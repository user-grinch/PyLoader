import libstd.common as common
import libstd.script as script

script.name("ReloadAll")
script.author("Grinch_")
script.desc("Reload all scripts pressing Left Control + R")
script.version("1.0")

while True:
  if common.key_pressed(0xA2) and common.key_pressed(0x52):
    while common.key_pressed(0xA2) and common.key_pressed(0x52):
      common.wait(5)
      
    script.reload_all()

  common.wait(0)


