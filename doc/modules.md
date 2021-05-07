# Custom Modules

### How to import modules?

These modules expose the functionality of the game to the python interpreter. Can be imported as normal python modules.

`import cleo  
from cleo import  
import cleo as cl`

### Where to install third-party modules?

To add your own modules, you can place them inside the **PyLoader/lib** folder. Do not place them inside the **PyLoader/libstd** as it is reserved for pyloader ones.

### Install modules from pip \(site-packages\)

For this, you need a local installation of python-pip. From there go to the **PyLoader/lib** folder run the command,

`pip install <package_name> -t .`

### Create custom modules

Creating python modules is pretty straightforward and requires no changes for **PyLoader.** Check [here](https://www.tutorialspoint.com/python/python_modules.htm#:~:text=A%20module%20is%20a%20Python,can%20also%20include%20runnable%20code.) for examples. For creating advanced modules through C++ check the sample project [here](https://github.com/user-grinch/PyLoaderSA/tree/plugin-template). More examples are [here](https://github.com/user-grinch/PyLoaderSA/tree/master/PyLoader/sdk).

