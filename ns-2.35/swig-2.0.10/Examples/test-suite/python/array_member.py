# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.



from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_array_member', [dirname(__file__)])
        except ImportError:
            import _array_member
            return _array_member
        if fp is not None:
            try:
                _mod = imp.load_module('_array_member', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _array_member = swig_import_helper()
    del swig_import_helper
else:
    import _array_member
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_setmethods__["text"] = _array_member.Foo_text_set
    __swig_getmethods__["text"] = _array_member.Foo_text_get
    if _newclass:text = _swig_property(_array_member.Foo_text_get, _array_member.Foo_text_set)
    __swig_setmethods__["data"] = _array_member.Foo_data_set
    __swig_getmethods__["data"] = _array_member.Foo_data_get
    if _newclass:data = _swig_property(_array_member.Foo_data_get, _array_member.Foo_data_set)
    def __init__(self): 
        this = _array_member.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _array_member.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _array_member.Foo_swigregister
Foo_swigregister(Foo)


def set_value(*args):
  return _array_member.set_value(*args)
set_value = _array_member.set_value

def get_value(*args):
  return _array_member.get_value(*args)
get_value = _array_member.get_value
class Material(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Material, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Material, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _array_member.new_Material()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _array_member.delete_Material
    __del__ = lambda self : None;
Material_swigregister = _array_member.Material_swigregister
Material_swigregister(Material)
cvar = _array_member.cvar

class RayPacketData(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, RayPacketData, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, RayPacketData, name)
    __repr__ = _swig_repr
    Size = _array_member.RayPacketData_Size
    __swig_setmethods__["chitMat"] = _array_member.RayPacketData_chitMat_set
    __swig_getmethods__["chitMat"] = _array_member.RayPacketData_chitMat_get
    if _newclass:chitMat = _swig_property(_array_member.RayPacketData_chitMat_get, _array_member.RayPacketData_chitMat_set)
    __swig_setmethods__["hitMat_val"] = _array_member.RayPacketData_hitMat_val_set
    __swig_getmethods__["hitMat_val"] = _array_member.RayPacketData_hitMat_val_get
    if _newclass:hitMat_val = _swig_property(_array_member.RayPacketData_hitMat_val_get, _array_member.RayPacketData_hitMat_val_set)
    __swig_setmethods__["hitMat"] = _array_member.RayPacketData_hitMat_set
    __swig_getmethods__["hitMat"] = _array_member.RayPacketData_hitMat_get
    if _newclass:hitMat = _swig_property(_array_member.RayPacketData_hitMat_get, _array_member.RayPacketData_hitMat_set)
    __swig_setmethods__["chitMat2"] = _array_member.RayPacketData_chitMat2_set
    __swig_getmethods__["chitMat2"] = _array_member.RayPacketData_chitMat2_get
    if _newclass:chitMat2 = _swig_property(_array_member.RayPacketData_chitMat2_get, _array_member.RayPacketData_chitMat2_set)
    __swig_setmethods__["hitMat_val2"] = _array_member.RayPacketData_hitMat_val2_set
    __swig_getmethods__["hitMat_val2"] = _array_member.RayPacketData_hitMat_val2_get
    if _newclass:hitMat_val2 = _swig_property(_array_member.RayPacketData_hitMat_val2_get, _array_member.RayPacketData_hitMat_val2_set)
    __swig_setmethods__["hitMat2"] = _array_member.RayPacketData_hitMat2_set
    __swig_getmethods__["hitMat2"] = _array_member.RayPacketData_hitMat2_get
    if _newclass:hitMat2 = _swig_property(_array_member.RayPacketData_hitMat2_get, _array_member.RayPacketData_hitMat2_set)
    def __init__(self): 
        this = _array_member.new_RayPacketData()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _array_member.delete_RayPacketData
    __del__ = lambda self : None;
RayPacketData_swigregister = _array_member.RayPacketData_swigregister
RayPacketData_swigregister(RayPacketData)

BUFF_LEN = _array_member.BUFF_LEN
class MyBuff(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MyBuff, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MyBuff, name)
    __repr__ = _swig_repr
    __swig_setmethods__["i"] = _array_member.MyBuff_i_set
    __swig_getmethods__["i"] = _array_member.MyBuff_i_get
    if _newclass:i = _swig_property(_array_member.MyBuff_i_get, _array_member.MyBuff_i_set)
    __swig_setmethods__["x"] = _array_member.MyBuff_x_set
    __swig_getmethods__["x"] = _array_member.MyBuff_x_get
    if _newclass:x = _swig_property(_array_member.MyBuff_x_get, _array_member.MyBuff_x_set)
    def __init__(self): 
        this = _array_member.new_MyBuff()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _array_member.delete_MyBuff
    __del__ = lambda self : None;
MyBuff_swigregister = _array_member.MyBuff_swigregister
MyBuff_swigregister(MyBuff)

class MySBuff(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MySBuff, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MySBuff, name)
    __repr__ = _swig_repr
    __swig_setmethods__["i"] = _array_member.MySBuff_i_set
    __swig_getmethods__["i"] = _array_member.MySBuff_i_get
    if _newclass:i = _swig_property(_array_member.MySBuff_i_get, _array_member.MySBuff_i_set)
    __swig_setmethods__["x"] = _array_member.MySBuff_x_set
    __swig_getmethods__["x"] = _array_member.MySBuff_x_get
    if _newclass:x = _swig_property(_array_member.MySBuff_x_get, _array_member.MySBuff_x_set)
    def __init__(self): 
        this = _array_member.new_MySBuff()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _array_member.delete_MySBuff
    __del__ = lambda self : None;
MySBuff_swigregister = _array_member.MySBuff_swigregister
MySBuff_swigregister(MySBuff)

# This file is compatible with both classic and new-style classes.

