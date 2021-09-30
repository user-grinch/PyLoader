import sys
sys.path.append("../libstd")

import opcodes, cleo

class Vehicle():
    def __init__(self, model, x, y, z):
        self.handle = opcodes.create_car(model, x, y, z)
    def remove(self):
        opcodes.delete_car(self.handle)
    def explode(self):
        opcodes.explode_car(self.handle)
    def freeze(self, freeze):
        opcodes.freeze_car_position(self.handle, freeze)
    def get_model(self):
        return opcodes.get_car_model(self.handle)
    def exists(self):
        return cleo.get_car_pointer(self.handle) != 0
    def set_forward_speed(self, speed):
        opcodes.set_car_forward_speed(self.handle, speed)
    def get_model_name(self):
        return cleo.get_vehicle_model_name(self.get_model())
    def wander_randomly(self):
        opcodes.car_wander_randomly(self.handle)
    
