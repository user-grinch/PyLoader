import sys
sys.path.append("../libstd")

import opcodes, cleo

class Ped():
    def __init__(self, model, ped_type, x, y, z):
        self.handle = opcodes.create_char(model, ped_type, x, y, z)
    def remove(self):
        opcodes.delete_char(self.handle)
    def set_position(self, x, y, z):
        opcodes.set_char_coordinates(self.handle, x, y, z)
    def get_position(self, x, y, z):
        return opcodes.get_char_coordinates(self.handle)
    def get_vehicle(self):
        return opcodes.store_car_char_is_in(self.handle)
    def is_in_vehicle(self, vehicle):
        return opcodes.is_char_in_car(self.handle, vehicle)
    def get_heading(self):
        return opcodes.get_char_heading(self.handle)
    def set_heading(self, heading):
        opcodes.set_char_heading(self.handle, heading)
    def give_weapon(self, weapon, ammo):
        '''refer to sanny builder help for weapon ids'''
        opcodes.give_weapon_to_char(self.handle, weapon, ammo)
    def fight(self, other_char):
        opcodes.task_kill_char_on_foot(self.handle, other_char)
        
