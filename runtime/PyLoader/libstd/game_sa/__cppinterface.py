from enum import Enum
import struct
from libstd.cleo import call_function, call_method
from libstd.memory import read_memory, read_float, write_memory, write_float
from typing import TypeVar, Generic, Union, Optional, Any

T = TypeVar('T')
pointer = int


class GTAClass:
    def __init__(self, address: Optional[int] = None):
        self.__address = address

    @property
    def address(self) -> int:
        return self.__address

    def write_to_address(self, address: int):
        assert self.address, "You can't write directly a python class to a memory address"
        static_type_check(int, address)


def static_type_check(T: type, value):
    if issubclass(T, Enum):
        assert type(value) == int or type(value) == T
    else:
        assert T == type(value)


def static_int_check(fmt: str, value):
    if fmt == 'c':
        assert -0x80 <= value <= 0x7F
    elif fmt == 'C':
        assert 0 <= value <= 0xFF
    elif fmt == 'h':
        assert -0x8000 <= value <= 0x7FFF
    elif fmt == 'H':
        assert 0 <= value <= 0xFFFF
    elif fmt == 'i':
        assert -0x80000000 <= value <= 0x7FFFFFFF
    elif fmt == 'I' or fmt == 'p':
        assert 0 <= value <= 0xFFFFFFFF


def read_string_from_memory(address: int, max_size=-1):
    strng = ""
    while len(strng) < max_size or max_size == -1:
        ch = read_memory(address + len(strng), 1, True)
        if not ch: break
        strng += chr(ch)
    return strng


def write_string_to_memory(address: int, val, size=-1):
    idx = 0
    while idx < size - 1 or size == -1:
        write_memory(address + idx, 1, ord(val[idx]), True)
        idx += 1
    write_memory(address + idx, 1, 0, True)


def integer_or_enum(value: Union[int, Enum]):
    return value.value if issubclass(type(value), Enum) else value
