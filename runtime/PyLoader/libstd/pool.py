import _internal

class pool_base():
    pointers :list = []
    index :int = 0

    def __init__(self):
        raise NotImplementedError
        
    def __iter__(self):
        return self

    def __next__(self):
        if self.index >= len(self.pointers):
            raise StopIteration
        else:
            val = self.pointers[self.index]
            self.index += 1
            return val

class veh(pool_base):
    def __init__(self):
        self.pointers = _internal._get_veh_pool()

class ped(pool_base):
    def __init__(self):
        self.pointers = _internal._get_ped_pool()

class object(pool_base):
    def __init__(self):
        self.pointers = _internal._get_object_pool()

class building(pool_base):
    def __init__(self):
        self.pointers = _internal._get_building_pool()

class script(pool_base):
    def __init__(self):
        self.pointers = _internal._get_script_pool()   


