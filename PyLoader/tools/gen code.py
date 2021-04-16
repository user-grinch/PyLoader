##################################################
# Generates C++ code from gta3sc commands.xml
IN_FILE : str = "commands.xml"
CLS_FILE :str = "class.txt"
SRC_FILE : str = "src.txt"
HDR_FILE : str = "header.txt"
#
##################################################

import xml.etree.ElementTree as ET

xml_tree = ET.parse(IN_FILE)
xml_root = xml_tree.getroot()

fclas = open(CLS_FILE, "w")
fsrc = open(SRC_FILE, "w")
fhdr = open(HDR_FILE, "w")

for header in xml_root: 
    # go through <Command ID= "XXX" Name= "YYY">
    opcode_id : int = int(header.attrib["ID"],16)
    opcode_name_lower : str = header.attrib["Name"].lower()
    opcode_name_title : str = header.attrib["Name"].title().replace("_","")

    # parse only supported
    if header.attrib.get("Supported") != "false":
        # go into <Args> ... </Args>
        for args in header:
            fclas.write("static PyObject* {}(PyObject* self, PyObject* args);\n".format(opcode_name_title))
            fhdr.write('{{"{}", {}, METH_VARARGS}},\n'.format(opcode_name_lower, opcode_name_title))

            # write the src file 

            fsrc.write("PyObject* PyOpcodes::{}(PyObject* self, PyObject* args)\n{{\n".format(opcode_name_title))

            params : str = []
            is_out : bool = []
            params_tuple : str = []

            # go into the actual data section           
            for data in args:
                type_name : str = data.get("Type")
                is_out_flag : bool = data.get("Out") == "true"
                is_out.insert(-1,is_out_flag)

                if type_name == "FLOAT":
                    params.insert(-1,"f")
                    if not is_out_flag:
                        params_tuple.insert(-1,"f")
                elif type_name == "INT":
                    params.insert(-1,"i")
                    if not is_out_flag:
                        params_tuple.insert(-1,"i")
                elif (type_name == "TEXT_LABEL" or type_name == "STRING" or type_name == "LABEL"):
                    params.insert(-1,"s")
                    if not is_out_flag:
                        params_tuple.insert(-1,"s")
                else:
                    print("Unknown typename: {}".format(type_name))

            # Hacky way to fix ordering of the ElementTree, should use better alternative lxml..
            params.insert(0,params.pop())
            is_out.insert(0,is_out.pop())

            count = 0
            ref_str : str = ""
            cmd_str : str = ""
            for i in params:
                count = count + 1
                if i == "i":
                    fsrc.write("\tint var{};\n".format(count))
                if i == "f":
                    fsrc.write("\tfloat var{};\n".format(count))
                if i == "s":
                    fsrc.write("\tchar* var{};\n".format(count))

                if not is_out[count-1]:
                    ref_str = ref_str + "&var" + str(count) + ", "
                
                if is_out[count-1] and params[count-1] != "s":
                    cmd_str = cmd_str + "&var" + str(count) + ", "
                else:
                    cmd_str = cmd_str + "var" + str(count) + ", "

            fsrc.write('\n')
            

            if len(params_tuple) != 0:
                fsrc.write('\tif (!PyArg_ParseTuple(args,"{}", {}))\n\t\treturn Py_False;\n\n'.format(''.join(params_tuple),ref_str[:-2]))

            # handle different types of opcodes

            command_line :str = "\t"
            if opcode_name_lower[:3] == "is_":
                command_line = command_line + "int result = "

            command_line = command_line + 'plugin::Command<plugin::Commands::{}>({});\n'.format(opcode_name_lower.upper(),cmd_str[:-2])
            fsrc.write(command_line)

            # return values properly
            if opcode_name_lower[:3] == "is_":
                fsrc.write('\treturn Py_BuildValue("i", result);\n')
            else:
                type_format : str = ""
                val : str = ""
                index : int = 0

                for i in is_out:
                    if i:
                        type_format = type_format + params[index]
                        val = val + "var" + str(index+1) + ","
                    index = index + 1
                
                if type_format == "":
                    fsrc.write('\treturn Py_True;\n')
                else:
                    fsrc.write('\treturn Py_BuildValue("{}", {});\n'.format(type_format,val[:-1]))


            
            fsrc.write('}\n\n')

fclas.close()
fsrc.close()
fhdr.close()