
# Generates PyLoader opcode wrappers from SB json
# Author: Grinch_
# Date: 2020-04-15
from io import TextIOWrapper
import urllib.request, json

# Constants
JSON_URL = "https://raw.githubusercontent.com/sannybuilder/library/master/sa/sa.json"

def camel_to_snake(s):
    return ''.join(['_'+c.lower() if c.isupper() else c for c in s]).lstrip('_')

if __name__ == "__main__":
    # urllib.request.urlretrieve(JSON_URL, "file.json")

    fhdr : TextIOWrapper = open("hdr.c", "w")
    fcmds : TextIOWrapper = open("cmds.c", "w")
    fsrc : TextIOWrapper = open("src.cpp", "w")

    with open("file.json") as f:
        data = json.load(f)

        # Only parsing the default game opcodes
        for opcodes in data["extensions"]:
            if opcodes["name"] == "default":
                for opcode in opcodes["commands"]:
                    
                    # ignore unsupported opcodes
                    unsupported :bool = False
                    condition :bool = False;
                    if ("attrs" in opcode):
                        if ("is_unsupported" in opcode["attrs"]):
                            unsupported = opcode["attrs"]["is_unsupported"]
                        if ("is_nop" in opcode["attrs"]):
                            unsupported = opcode["attrs"]["is_nop"]
                        if ("is_condition" in opcode["attrs"]):
                            condition = opcode["attrs"]["is_condition"]

                    if (unsupported):
                        continue
                    
                    name :str = opcode["name"].lower()
                    method_name :str = name
                    # handle class names
                    class_ : str = "Misc"
                    if ("class" in opcode):
                        class_ = opcode["class"].title()

                    if ("member" in opcode):
                        method_name = camel_to_snake(opcode["member"])

                    fcmds.write('register_command("{}", "{}", {});\n'.format(method_name, class_, name))
                    fhdr.write("static PyObject* {}(PyObject* self, PyObject* args);\n".format(name, class_))



                    # source files
                    fsrc.write("PyObject* {}(PyObject* self, PyObject* args) // {}\n{{\n".format(name, class_))
                    
                    input_ptn : str = ""
                    input_args : str = ""
                    # handle inpurts
                    if ("input" in opcode):
                        fsrc.write("\t// inputs\n")
                        for input in opcode["input"]:

                            type_ : str = input["type"]
                            name_ : str = input["name"].lower()

                            if (name_ == ""):
                                name_ = "var"
                            
                            if (name_ in ["char", "class", "self", "args"]):
                                name_ += "_"

                            if (type_ == "float"):
                                input_ptn += "f"
                            elif (type_ == "label"):
                                input_ptn += "s"
                                type_ = "const char*"
                            else:
                                type_ = "int"
                                input_ptn += "i"
                                
                            input_args += "&" + name_ + ", "
                            fsrc.write("\t{} {};\n".format(type_, name_))
                    
                    output_ptn : str = ""
                    output_args : str = ""
                    # handle outputs
                    if ("output" in opcode):
                        fsrc.write("\n\t// outputs\n")
                        for output in opcode["output"]:

                            type_ : str = output["type"].lower()
                            name_ : str = output["name"].lower()

                            if (name_ == ""):
                                name_ = "var"
                            
                            if (name_ in ["char", "class", "self", "args"]):
                                name_ += "_"

                            if (type_ == "float"):
                                output_ptn += "f"
                            elif (type_ == "label"):
                                output_ptn += "s"
                                type_ = "const char*"
                            else:
                                type_ = "int"
                                output_ptn += "i"
                            
                            fsrc.write("\t{} {};\n".format(type_, name_.lower()))
                            output_args += "&" + name_ + ", "

                   
                    if not (input_args == ""):
                        fsrc.write('\tif (!PyArg_ParseTuple(args, "{}", {}))\n\t{{\n\t\treturn PyBool_FromLong(0);\n\t}}\n'.format(input_ptn, input_args[:-2]));

                     # add ", " at the end of input args if output args exits
                    if (output_args == ""):
                        input_args = input_args[:-2]
                    cmd_str : str = "plugin::Command<0x{}>({}{})".format(opcode["id"], input_args.replace("&", ""), output_args[:-2]);
                    
                    # handle opcode calling
                    if (condition):
                        fsrc.write("\treturn PyBool_FromLong({});\n}}\n\n".format(cmd_str))
                    else:
                        fsrc.write("\t" + cmd_str + ";")

                        if (output_args == ""):
                            fsrc.write("\n\treturn PyBool_FromLong(1);\n}\n\n")
                        else:
                            fsrc.write('\n\treturn Py_BuildValue("{}", {});\n}}\n\n'.format(output_ptn, output_args[:-2].replace("&", "")))

                break
    
    # close the files
    fcmds.close()
    fhdr.close()
    fsrc.close()
