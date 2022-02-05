##################################################
# Generates Python classes from SB library jsons
IN_FILE : str = "sa.json"
#
##################################################
from fileinput import close
import json, re
from unicodedata import name

# pattern to convert CamelCase to snake_case
caseConv = re.compile(r'(?<!^)(?=[A-Z])')

# get all the available classes from json
def getClassData()-> list:

    cls_list : list = []
    with open(IN_FILE) as f:
        data = json.load(f)

        for block in data["classes"]:
            cls_list.insert(-1, block.get("name"))

    return cls_list

def generateClass(cls_name: str):

    out = open("classes\{}.py".format(caseConv.sub('_', cls_name).lower()), 'w')
    in_ = open(IN_FILE, 'r')
    data = json.load(in_)

    out.write("import opcodes\nfrom typing import Tuple\n\n")
    out.write("class {}():\n".format(cls_name))


    for ext_block in data["extensions"]:
        for y in ext_block.get("commands"):
            class_ = y.get("class")

            if class_ == cls_name:
                desc = y.get("short_desc")
                int_func = y.get("name").lower()
                ext_func = caseConv.sub('_', y.get("member")).lower()

                if ext_func == "create":
                    ext_func = "__init__"

                # get attributes
                attr_block = y.get("attrs")
                is_cond = False
                is_static = False
                if (attr_block):
                    is_cond = attr_block.get("is_condition")
                    is_static = attr_block.get("is_static")



                # get input param list
                int_params: str = ''
                ext_params: str = ''

                if (is_static):
                    out.write("   @staticmethod\n")
                else:
                    int_params: str = 'self.__handle, '
                    ext_params = "self, "

                in_block = y.get("input")

                if in_block:
                    for param in in_block:
                        name = param.get("name")

                        if name != "self":
                            type_ = param.get("type")
                            if type_ == "string":
                                type_ = "str"

                            if type_ in ["model_vehicle", "script_id"]:
                                type_ = "int"
                            
                            if name == "model_vehicle":
                                name = "int"

                            int_params += param.get("name") + ', '
                            ext_params += "{}: {}, ".format(name, type_)

                # get output param list
                out_params: str = ''

                out_block = y.get("output")
                rtn_text = ''

                if out_block:
                    length = len(out_block)

                    if (length > 0):
                        out_params = ' -> '
                        rtn_text = 'return '

                        if (length > 1):
                            out_params += ' Tuple['

                        for param in out_block:
                            name = param.get("name")
                            type_ = param.get("type")
                            if type_ == "string":
                                type_ = "str"
                            
                            if type_ == "model_vehicle":
                                type_ = "int"

                            out_params += "{}, ".format(type_)
                        
                        out_params = out_params[:-2]
                        if (length > 1):
                            out_params += ']'          

                if (rtn_text == '' and is_cond):
                    rtn_text = 'return '
                    

                out.write("   def {}({}){}:\n".format(ext_func, ext_params[:-2], out_params))

                if desc != "":
                    out.write("      '''{}'''\n".format(desc))

                if ext_func == "__init__":
                    rtn_text = "self.__handle = "

                out.write("      {}opcodes.{}({})\n\n".format(rtn_text, int_func, int_params[:-2]))

    in_.close()
    out.close()


##################################################
# Main
##################################################

classes = getClassData()
for cls in classes:
    generateClass(cls)
                