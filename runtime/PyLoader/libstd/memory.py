# Function definations for the intellisense
# Author: Grinch_
# Last updated on: 05/06/2021

import _memory 

def read_memory(address :int, size :int, virtual_protect :bool) -> int:
	return _memory.read_memory(address, size, virtual_protect)

def write_memory(address :int, size :int, val :int, virtual_protect :bool) -> None:
	_memory.write_memory(address, size, val, virtual_protect)

def read_float(address :int, virtual_protect :bool) -> float:
	return _memory.read_float(address, virtual_protect)

def write_float(address :int, val :float, virtual_protect :bool) -> None:
	_memory.write_float(address, val, virtual_protect)

def nop(address :int, size :int, virtual_protect :bool) -> None:
	_memory.nop(address, size, virtual_protect)

def put_retn(address :int, size :int, pop_bytes :int, virtual_protect :bool) -> None:
	_memory.put_retn(address, size, pop_bytes, virtual_protect)

def get_raw(address :int, size :int, virtual_protect :bool) -> str:
	return _memory.get_raw(address, size, virtual_protect)

def set_raw(address :int, data :str, size :int, virtual_protect :bool) -> None:
	_memory.set_raw(address, data, size, virtual_protect)

