import common

# Can be used for necessary cleanup
def on_script_terminate(error_occured: bool):
	if error_occured:
  		print("Script terminated")
	else:
		print("Script exited")

while True:
	if common.key_pressed(0x09):
		break

	common.wait(0)

  
	


