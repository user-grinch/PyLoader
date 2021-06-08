##################################################
# Generates Python function definations from gta3sc commands.xml
IN_FILE : str = "commands.xml"
OUT_FILE :str = "defs.txt"
#
##################################################

import xml.etree.ElementTree as ET

xml_tree = ET.parse(IN_FILE)
xml_root = xml_tree.getroot()

fout = open(OUT_FILE, "w")

for header in xml_root: 
    # go through <Command ID= "XXX" Name= "YYY">
    opcode_id : int = int(header.attrib["ID"],16)
    opcode_name : str = header.attrib["Name"].lower()

    # parse only supported
    if header.attrib.get("Supported") != "false":
        out_type : str = ""
        params_str : str = ""
        params_str_without_type : str = ""
        out_count = 0
        out_params = []

        for args in header:
            # go into the actual data section      

            count :int = 1;     
            for data in args:
                type : str = data.get("Type")
                entity : str = data.get("Entity") or ""
                entity = entity.lower()
                desc : str = data.get("Desc") or ""
                desc = desc.replace(" ", "_")
                is_out : bool = (data.get("Out")  == "true")
                
                if (type == "STRING"):
                    type = "str"

                if (type == "TEXT_LABEL"):
                    type = "str"

                if (type == "LABEL"):
                    type = "str"

                if entity == "car":
                    entity = "hveh"
                
                if entity == "char":
                    entity = "hchar"

                if entity == "object":
                    entity = "hobj"

                if desc == "Bool":
                    desc = "state"
                
                if desc == "":
                    desc = "unknown" + str(count)

                if is_out:
                    out_type = out_type + type.lower() + ", "
                    out_count = out_count + 1
                else:
                    if entity:
                        if entity in out_params:
                            entity = entity + str(count)

                        params_str = params_str + entity + ": " + type.lower() + ", "
                        params_str_without_type = params_str_without_type + entity + ", " 
                        out_params.insert(-1, entity)
                    else:
                        desc = desc.lower()
                        if desc in out_params:
                            desc = desc + str(count)

                        params_str = params_str + desc + ": " + type.lower() + ", "
                        params_str_without_type = params_str_without_type + desc + ", " 
                        out_params.insert(-1, desc)

                count = count + 1

        opcode_str = hex(opcode_id).replace("0x","")

        while len(opcode_str) < 4:
            opcode_str = "0" + opcode_str    
            
        rtn_text :str  = ""
        
        if out_type == "":
            out_type = "None"
        else:
            rtn_text = "return "
            if out_count > 1:
                out_type = "Tuple[" + out_type[:-2] + "]"
            else:
                out_type = out_type[:-2]

        if opcode_name[:3] == "is_" or opcode_name[:4] == "has_":
            out_type = "bool"
            rtn_text = "return "

        fout.write('''def {}({}) -> {}:\n\t\'\'\'More info: https://gtamods.com/wiki/{} https://gtagmodding.com/opcode-database/opcode/{}\'\'\'\n\t{}_opcodes.{}({})\n\n'''.format(opcode_name, params_str[:-2], out_type,opcode_str.upper(),opcode_str.upper(),rtn_text,opcode_name,params_str_without_type[:-2]))
fout.close()