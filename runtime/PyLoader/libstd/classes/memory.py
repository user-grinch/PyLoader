import _memory 

class Memory():
	@staticmethod
	def read(address :int, size :int, virtual_protect :bool = True) -> int:
		return _memory.read_memory(address, size, virtual_protect)

	@staticmethod
	def write(address :int, size :int, val :int, virtual_protect :bool = True) -> None:
		_memory.write_memory(address, size, val, virtual_protect)

	@staticmethod
	def read_float(address :int, virtual_protect :bool = True) -> float:
		return _memory.read_float(address, virtual_protect)

	@staticmethod
	def write_float(address :int, val :float, virtual_protect :bool = True) -> None:
		_memory.write_float(address, val, virtual_protect)

	@staticmethod
	def nop(address :int, size :int, virtual_protect :bool = True) -> None:
		_memory.nop(address, size, virtual_protect)

	@staticmethod
	def put_retn(address :int, size :int, pop_bytes :int, virtual_protect :bool = True) -> None:
		_memory.put_retn(address, size, pop_bytes, virtual_protect)

	@staticmethod
	def get_raw(address :int, size :int, virtual_protect :bool = True) -> str:
		return _memory.get_raw(address, size, virtual_protect)

	@staticmethod
	def set_raw(address :int, data :str, size :int, virtual_protect :bool = True) -> None:
		_memory.set_raw(address, data, size, virtual_protect)

	@staticmethod
	def call_function(address :int, num_args:int = 0, pop :int = 0, *arg) -> int:
		'''Calls the function from the address. Arguments are passed left to right. More info https://gtagmodding.com/opcode-database/opcode/0AA5/'''

		return _memory.call_function(address, num_args, pop, *arg)

	@staticmethod
	def call_method(address :int, struct :int, num_args :int = 0, pop :int = 0, *arg) -> int:
		'''Calls the method from the address. Arguments are passed left to right. More info https://gtagmodding.com/opcode-database/opcode/0AA6/'''

		return _memory.call_method(address, struct, num_args, pop, *arg)

	@staticmethod
	def free_library(handle) -> None:
		'''Frees the loaded library'''

		_memory.free_library(handle)

	@staticmethod
	def load_library(name :str) -> int:
		'''Loads a library from name. Returns 0 on failure'''

		return _memory.load_library(name)

	@staticmethod
	def get_proc_address(handle, str) -> int:
		'''Get the procedure address'''

		return _memory.get_proc_address(handle, str)

