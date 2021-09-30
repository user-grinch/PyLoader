import _script

def get_author(script_file_name : str = "") -> str:
	'''Returns the name of the script author. If no name(with extension) is provided, returns the info of the current script'''

	return _script.get_author(script_file_name)

def get_desc(script_file_name :str = "") -> str:
	'''Returns the description of the script. If no name(with extension) is provided, returns the info of the current script'''

	return _script.get_desc(script_file_name)

def get_file_name(script_file_name :str = "") -> str:
	'''Returns the file anme of the script. If no name(with extension) is provided, returns the info of the current script'''

	return _script.get_file_name(script_file_name)

def get_name(script_file_name :str = "") -> str:
	'''Returns the name of the script set using 'name()' function. If no name(with extension) is provided, returns the info of the current script'''

	return _script.get_name(script_file_name)

def get_version(script_file_name :str = "") -> str:
	'''Returns the version of the script. If no name(with extension) is provided, returns the info of the current script'''

	return _script.get_version(script_file_name)

def author(author_name :str) -> None:
	'''Sets the author name of the script'''

	_script.author(author_name)

def desc(description :str) -> None:
	'''Sets the description text of the script'''

	_script.desc(description)

def name(script_name :str) -> None:
	'''Sets the name of the script'''

	_script.name(script_name)

def version(script_version :str) -> None:
	'''Sets the version text of the script'''

	_script.version(script_version)

def minimum_version(min_version :str) -> None:
	'''Specifies the minimum version required by the script. If not met, a warning is shown in the PyLoader.log'''

	_script.minimum_version(min_version)

def load(script_name :str) -> None:
	'''Loads a script from the provided filename. Relative to PyLoader folder'''

	_script.load(script_name)

def unload(script_name :str = "") -> None:
	'''Unloads a script from the provided filename. Relative to PyLoader folder. Passing empty string defaults to current script'''

	_script.unload(script_name)

def reload(script_name :str = "") -> None:
	'''Reloads a script from the provided filename. Relative to PyLoader folder. Passing empty string defaults to current script'''

	_script.reload(script_name)

def properties(*argv) -> bool:
	'''Sets script specific property flags.\n\nValid properties:\n\nno_reload: Disables script reloading'''

	return _script.properties(*argv)



