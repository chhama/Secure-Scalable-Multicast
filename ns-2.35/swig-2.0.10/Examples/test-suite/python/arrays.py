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
            fp, pathname, description = imp.find_module('_arrays', [dirname(__file__)])
        except ImportError:
            import _arrays
            return _arrays
        if fp is not None:
            try:
                _mod = imp.load_module('_arrays', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _arrays = swig_import_helper()
    del swig_import_helper
else:
    import _arrays
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


ARRAY_LEN = _arrays.ARRAY_LEN
One = _arrays.One
Two = _arrays.Two
Three = _arrays.Three
Four = _arrays.Four
Five = _arrays.Five
class SimpleStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimpleStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimpleStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["double_field"] = _arrays.SimpleStruct_double_field_set
    __swig_getmethods__["double_field"] = _arrays.SimpleStruct_double_field_get
    if _newclass:double_field = _swig_property(_arrays.SimpleStruct_double_field_get, _arrays.SimpleStruct_double_field_set)
    def __init__(self): 
        this = _arrays.new_SimpleStruct()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _arrays.delete_SimpleStruct
    __del__ = lambda self : None;
SimpleStruct_swigregister = _arrays.SimpleStruct_swigregister
SimpleStruct_swigregister(SimpleStruct)

class ArrayStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArrayStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ArrayStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["array_c"] = _arrays.ArrayStruct_array_c_set
    __swig_getmethods__["array_c"] = _arrays.ArrayStruct_array_c_get
    if _newclass:array_c = _swig_property(_arrays.ArrayStruct_array_c_get, _arrays.ArrayStruct_array_c_set)
    __swig_setmethods__["array_sc"] = _arrays.ArrayStruct_array_sc_set
    __swig_getmethods__["array_sc"] = _arrays.ArrayStruct_array_sc_get
    if _newclass:array_sc = _swig_property(_arrays.ArrayStruct_array_sc_get, _arrays.ArrayStruct_array_sc_set)
    __swig_setmethods__["array_uc"] = _arrays.ArrayStruct_array_uc_set
    __swig_getmethods__["array_uc"] = _arrays.ArrayStruct_array_uc_get
    if _newclass:array_uc = _swig_property(_arrays.ArrayStruct_array_uc_get, _arrays.ArrayStruct_array_uc_set)
    __swig_setmethods__["array_s"] = _arrays.ArrayStruct_array_s_set
    __swig_getmethods__["array_s"] = _arrays.ArrayStruct_array_s_get
    if _newclass:array_s = _swig_property(_arrays.ArrayStruct_array_s_get, _arrays.ArrayStruct_array_s_set)
    __swig_setmethods__["array_us"] = _arrays.ArrayStruct_array_us_set
    __swig_getmethods__["array_us"] = _arrays.ArrayStruct_array_us_get
    if _newclass:array_us = _swig_property(_arrays.ArrayStruct_array_us_get, _arrays.ArrayStruct_array_us_set)
    __swig_setmethods__["array_i"] = _arrays.ArrayStruct_array_i_set
    __swig_getmethods__["array_i"] = _arrays.ArrayStruct_array_i_get
    if _newclass:array_i = _swig_property(_arrays.ArrayStruct_array_i_get, _arrays.ArrayStruct_array_i_set)
    __swig_setmethods__["array_ui"] = _arrays.ArrayStruct_array_ui_set
    __swig_getmethods__["array_ui"] = _arrays.ArrayStruct_array_ui_get
    if _newclass:array_ui = _swig_property(_arrays.ArrayStruct_array_ui_get, _arrays.ArrayStruct_array_ui_set)
    __swig_setmethods__["array_l"] = _arrays.ArrayStruct_array_l_set
    __swig_getmethods__["array_l"] = _arrays.ArrayStruct_array_l_get
    if _newclass:array_l = _swig_property(_arrays.ArrayStruct_array_l_get, _arrays.ArrayStruct_array_l_set)
    __swig_setmethods__["array_ul"] = _arrays.ArrayStruct_array_ul_set
    __swig_getmethods__["array_ul"] = _arrays.ArrayStruct_array_ul_get
    if _newclass:array_ul = _swig_property(_arrays.ArrayStruct_array_ul_get, _arrays.ArrayStruct_array_ul_set)
    __swig_setmethods__["array_ll"] = _arrays.ArrayStruct_array_ll_set
    __swig_getmethods__["array_ll"] = _arrays.ArrayStruct_array_ll_get
    if _newclass:array_ll = _swig_property(_arrays.ArrayStruct_array_ll_get, _arrays.ArrayStruct_array_ll_set)
    __swig_setmethods__["array_f"] = _arrays.ArrayStruct_array_f_set
    __swig_getmethods__["array_f"] = _arrays.ArrayStruct_array_f_get
    if _newclass:array_f = _swig_property(_arrays.ArrayStruct_array_f_get, _arrays.ArrayStruct_array_f_set)
    __swig_setmethods__["array_d"] = _arrays.ArrayStruct_array_d_set
    __swig_getmethods__["array_d"] = _arrays.ArrayStruct_array_d_get
    if _newclass:array_d = _swig_property(_arrays.ArrayStruct_array_d_get, _arrays.ArrayStruct_array_d_set)
    __swig_setmethods__["array_struct"] = _arrays.ArrayStruct_array_struct_set
    __swig_getmethods__["array_struct"] = _arrays.ArrayStruct_array_struct_get
    if _newclass:array_struct = _swig_property(_arrays.ArrayStruct_array_struct_get, _arrays.ArrayStruct_array_struct_set)
    __swig_setmethods__["array_structpointers"] = _arrays.ArrayStruct_array_structpointers_set
    __swig_getmethods__["array_structpointers"] = _arrays.ArrayStruct_array_structpointers_get
    if _newclass:array_structpointers = _swig_property(_arrays.ArrayStruct_array_structpointers_get, _arrays.ArrayStruct_array_structpointers_set)
    __swig_setmethods__["array_ipointers"] = _arrays.ArrayStruct_array_ipointers_set
    __swig_getmethods__["array_ipointers"] = _arrays.ArrayStruct_array_ipointers_get
    if _newclass:array_ipointers = _swig_property(_arrays.ArrayStruct_array_ipointers_get, _arrays.ArrayStruct_array_ipointers_set)
    __swig_setmethods__["array_enum"] = _arrays.ArrayStruct_array_enum_set
    __swig_getmethods__["array_enum"] = _arrays.ArrayStruct_array_enum_get
    if _newclass:array_enum = _swig_property(_arrays.ArrayStruct_array_enum_get, _arrays.ArrayStruct_array_enum_set)
    __swig_setmethods__["array_enumpointers"] = _arrays.ArrayStruct_array_enumpointers_set
    __swig_getmethods__["array_enumpointers"] = _arrays.ArrayStruct_array_enumpointers_get
    if _newclass:array_enumpointers = _swig_property(_arrays.ArrayStruct_array_enumpointers_get, _arrays.ArrayStruct_array_enumpointers_set)
    __swig_getmethods__["array_const_i"] = _arrays.ArrayStruct_array_const_i_get
    if _newclass:array_const_i = _swig_property(_arrays.ArrayStruct_array_const_i_get)
    def __init__(self): 
        this = _arrays.new_ArrayStruct()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _arrays.delete_ArrayStruct
    __del__ = lambda self : None;
ArrayStruct_swigregister = _arrays.ArrayStruct_swigregister
ArrayStruct_swigregister(ArrayStruct)


def fn_taking_arrays(*args):
  return _arrays.fn_taking_arrays(*args)
fn_taking_arrays = _arrays.fn_taking_arrays

def newintpointer():
  return _arrays.newintpointer()
newintpointer = _arrays.newintpointer

def setintfrompointer(*args):
  return _arrays.setintfrompointer(*args)
setintfrompointer = _arrays.setintfrompointer

def getintfrompointer(*args):
  return _arrays.getintfrompointer(*args)
getintfrompointer = _arrays.getintfrompointer

def array_pointer_func(*args):
  return _arrays.array_pointer_func(*args)
array_pointer_func = _arrays.array_pointer_func
class CartPoseData_t(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CartPoseData_t, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CartPoseData_t, name)
    __repr__ = _swig_repr
    __swig_setmethods__["p"] = _arrays.CartPoseData_t_p_set
    __swig_getmethods__["p"] = _arrays.CartPoseData_t_p_get
    if _newclass:p = _swig_property(_arrays.CartPoseData_t_p_get, _arrays.CartPoseData_t_p_set)
    def __init__(self): 
        this = _arrays.new_CartPoseData_t()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _arrays.delete_CartPoseData_t
    __del__ = lambda self : None;
CartPoseData_t_swigregister = _arrays.CartPoseData_t_swigregister
CartPoseData_t_swigregister(CartPoseData_t)

# This file is compatible with both classic and new-style classes.

