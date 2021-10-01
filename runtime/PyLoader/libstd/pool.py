import _pool

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
    '''Vehicle Pool. Contains handle of the current game vehicles'''
    def __init__(self):
        self.pointers = _pool.get_veh_pool()

class ped(pool_base):
    '''Ped Pool. Contains handle of the current game peds'''
    def __init__(self):
        self.pointers = _pool.get_ped_pool()

class object(pool_base):
    '''Object Pool. Contains handle of the current game objects'''
    def __init__(self):
        self.pointers = _pool.get_object_pool()

class building(pool_base):
    '''Object Pool. Contains handle of the current game static objects'''
    def __init__(self):
        self.pointers = _pool.get_building_pool()

class script(pool_base):
    '''Script Pool. Contains name of the loaded PyLoader scripts'''
    def __init__(self):
        self.pointers = _pool.get_script_pool()   


