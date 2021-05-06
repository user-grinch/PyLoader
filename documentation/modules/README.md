# Custom Modules

### How to import modules?

These modules expose functionality of the game to the python intrepreter. Can be imported as normal python modules.

`import cleo  
from cleo import  
import cleo as cl`

### Where to install third-party modules?

To add your own modules, you can place them inside the **PyLoader/lib** folder. Do not place them inside the **PyLoader/libstd** as it is reserved for pyloader ones.

### Install modules from pip \(site-packages\)

For this, you need a local installation of python-pip. From there goto the **PyLoader/lib** folder run the command,

`pip install <package_name> -t .`

  
  


  


