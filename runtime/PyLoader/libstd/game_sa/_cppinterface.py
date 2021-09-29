# This file provides utility to simulate some C++ features in python
# and helps reading and writing memory for internal game classes

###############################
# game_sa STANDARD definition #
###############################

from abc import ABCMeta, abstractmethod, abstractproperty, abstractstaticmethod
from typing import Tuple, Final, Generic, TypeVar
from libstd.memory import read_memory, write_memory, read_float, write_float
from libstd.cleo import call_function, call_method
from enum import Enum
import ctypes

pointer = int
T = TypeVar('T')

class classproperty(property):
    def __get__(self, cls, owner):
        return classmethod(self.fget).__get__(None, owner)()

def check_func_type(srcType, T):
    if type(T) != srcType:
        raise TypeError("Invalid argument type")


class gtaclass(metaclass=ABCMeta):
    def __init__(self, addr):
        self.__address = addr
    
    @property
    def address(self) -> int:
        return self.__address

    @abstractmethod
    def write_to_address(self, address):
        pass



def read_string_from_memory(address: int, max_size = -1):
    strng = ""
    while len(strng) < max_size or max_size == -1:
        ch = read_memory(address + len(strng), 1, True)
        if not ch: break
        strng += chr(ch)
    return strng
    

def write_string_to_memory(address: int, val, size = -1):
    idx = 0
    while idx < size - 1 or size == -1:
        write_memory(address + idx, 1, ord(val[idx]), True)
        idx += 1
    write_memory(address + idx, 1, 0, True)