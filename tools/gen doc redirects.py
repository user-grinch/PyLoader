##################################################
# Generates doc redirects from gta3sc commands.xml
IN_FILE : str = "commands.xml"
DOC_FILE : str = "doc.txt"
#
##################################################

import xml.etree.ElementTree as ET

xml_tree = ET.parse(IN_FILE)
xml_root = xml_tree.getroot()

fout = open(DOC_FILE, "w")

for header in xml_root: 
    # go through <Command ID= "XXX" Name= "YYY">
    opcode_id : str = header.attrib["ID"].replace("x","").upper()

    while (len(opcode_id) < 4):
        opcode_id = "0" + opcode_id

    opcode_name_lower : str = header.attrib["Name"].lower()
    
    fout.write("* [{}](https://gtagmodding.com/opcode-database/opcode/{}/)\n".format(opcode_name_lower,opcode_id))

fout.close()