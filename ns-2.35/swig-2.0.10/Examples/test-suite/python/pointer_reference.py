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
            fp, pathname, description = imp.find_module('_pointer_reference', [dirname(__file__)])
        except ImportError:
            import _pointer_reference
            return _pointer_reference
        if fp is not None:
            try:
                _mod = imp.load_module('_pointer_reference', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _pointer_reference = swig_import_helper()
    del swig_import_helper
else:
    import _pointer_reference
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



def foo(*args):
  return _pointer_reference.foo(*args)
foo = _pointer_reference.foo
class Struct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Struct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Struct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["value"] = _pointer_reference.Struct_value_set
    __swig_getmethods__["value"] = _pointer_reference.Struct_value_get
    if _newclass:value = _swig_property(_pointer_reference.Struct_value_get, _pointer_reference.Struct_value_set)
    def __init__(self, *args): 
        this = _pointer_reference.new_Struct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["instance"] = _pointer_reference.Struct_instance_set
    __swig_getmethods__["instance"] = _pointer_reference.Struct_instance_get
    if _newclass:instance = _swig_property(_pointer_reference.Struct_instance_get, _pointer_reference.Struct_instance_set)
    __swig_setmethods__["pInstance"] = _pointer_reference.Struct_pInstance_set
    __swig_getmethods__["pInstance"] = _pointer_reference.Struct_pInstance_get
    if _newclass:pInstance = _swig_property(_pointer_reference.Struct_pInstance_get, _pointer_reference.Struct_pInstance_set)
    __swig_destroy__ = _pointer_reference.delete_Struct
    __del__ = lambda self : None;
Struct_swigregister = _pointer_reference.Struct_swigregister
Struct_swigregister(Struct)
cvar = _pointer_reference.cvar


def set(*args):
  return _pointer_reference.set(*args)
set = _pointer_reference.set

def get():
  return _pointer_reference.get()
get = _pointer_reference.get

def overloading(*args):
  return _pointer_reference.overloading(*args)
overloading = _pointer_reference.overloading
# This file is compatible with both classic and new-style classes.


