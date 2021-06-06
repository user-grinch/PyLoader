# PyLoader

## Introduction

This is a **.asi** plugin that allows writing custom Python scripts for GTA SanAndreas. This plugin is still in the early stages of development so, if you find and bugs or have feature suggestions let me know :\) 

**Python version**: 3.8x \(Windows 7+\)  
**Sample scripts**: [here](https://github.com/user-grinch/PyLoaderSA/tree/master/examples)  
**Plugin template**: [here](https://github.com/user-grinch/PyLoaderSA/tree/plugin-template)  

## Installation

1. Install [Visual C++ Redistributable 2019 x86](https://aka.ms/vs/16/release/vc_redist.x86.exe) and [asi loader](https://www.gtagarage.com/mods/show.php?id=21709)
2. Download [PyLoader.7z](https://github.com/user-grinch/PyLoaderSA/releases) and extract everything in the game directory.

**Note**: You need v1.0 of the game.

## Credits

1. [CLEO 4 devs](https://github.com/cleolibrary/CLEO4)
2. [Plugin SDK devs](https://github.com/DK22Pac/plugin-sdk)


# Doc
## Custom Modules

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



