import common, script, pool

script.name("ReloadAll")
script.author("Grinch_")
script.desc("Reload all scripts pressing Left Control + R")
script.version("1.0")

while True:
  if common.key_pressed(0xA2) and common.key_pressed(0x52):
    while common.key_pressed(0xA2) and common.key_pressed(0x52):
      common.wait(5)
      
    # Reloading other scripts
    name : str = script.get_file_name()
    for script_name in pool.script():
      if script_name != name:
        script.reload(script_name)

    script.reload() # Reloading current script

  common.wait(0)


