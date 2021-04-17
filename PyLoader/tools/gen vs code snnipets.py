##################################################
# Generates VS Code snnipets from gta3sc commands.xml
IN_FILE : str = "commands.xml"
OUT_FILE :str = "snnipets.txt"
#
##################################################

import xml.etree.ElementTree as ET

xml_tree = ET.parse(IN_FILE)
xml_root = xml_tree.getroot()

fout = open(OUT_FILE, "w")

for header in xml_root: 
    # go through <Command ID= "XXX" Name= "YYY">
    opcode_id : int = int(header.attrib["ID"],16)
    opcode_name_lower : str = header.attrib["Name"].lower()
    opcode_name_title : str = header.attrib["Name"].title().replace("_","")

    # "Print to console": {
	# 	"prefix": "log2121212",
	# 	"body": [
	# 		"console.log('$1');",
	# 		"$2"
	# 	],
	# }

    cmd_str_front : str = ""
    cmd_str_back : str = ""
    # parse only supported
    if header.attrib.get("Supported") != "false":
        
        for args in header:
            # go into the actual data section           
            for data in args:
                type : str = data.get("Type")
                entity : str = data.get("Entity") or ""
                desc : str = data.get("Desc") or ""
                is_out : bool = (data.get("Out")  == "true")

                if (type == "TEXT_LABEL"):
                    type = "string"

                if (type == "LABEL"):
                    type = "string"

                if is_out:
                    if entity:
                        cmd_str_front = cmd_str_front + entity.lower() + " handle, "
                    else:
                        cmd_str_front = cmd_str_front + type.lower() + " " + desc.lower() + ", "
                else:
                    if entity:
                        cmd_str_back = cmd_str_back + entity.lower() + " handle, "
                    else:
                        cmd_str_back = cmd_str_back + type.lower() + " " + desc.lower() + ", "
        
        if cmd_str_front != "":
            cmd_str_front = cmd_str_front[:-2] + " = "

        fout.write(
        '''"{}":
{{
    "prefix": "opcode.{}",
    "body": [
        "{}opcode.{}({})",
    ],
}},
'''.format(opcode_name_title,opcode_name_lower,cmd_str_front,opcode_name_lower,cmd_str_back[:-2]))
                
                    

                


            

fout.close()