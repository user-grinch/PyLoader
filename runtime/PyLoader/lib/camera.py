import sys
sys.path.append("../libstd")

import opcodes, cleo

class Camera():
    '''both point_at and set_position should be properly called'''
    
    def point_at(self, x, y, z):
        opcodes.point_camera_at_point(x, y, z, 1)
        
    def set_position(self, x, y, z):
        '''for now rotations are 0'''
        opcodes.set_fixed_camera_position(x, y, z, 0, 0, 0)
        
    def restore(self):
        opcodes.restore_camera()

    def point_at_car(self, car):
        opcodes.point_camera_at_car(car, 18, 2)

    def point_at_character(self, char):
        opcodes.point_camera_at_char(char, 18, 2)
