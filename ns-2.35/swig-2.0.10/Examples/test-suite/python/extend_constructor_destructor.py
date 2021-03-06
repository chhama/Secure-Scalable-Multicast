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
            fp, pathname, description = imp.find_module('_extend_constructor_destructor', [dirname(__file__)])
        except ImportError:
            import _extend_constructor_destructor
            return _extend_constructor_destructor
        if fp is not None:
            try:
                _mod = imp.load_module('_extend_constructor_destructor', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _extend_constructor_destructor = swig_import_helper()
    del swig_import_helper
else:
    import _extend_constructor_destructor
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


class AStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, AStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, AStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.AStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.AStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.AStruct_ivar_get, _extend_constructor_destructor.AStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_AStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_AStruct
    __del__ = lambda self : None;
AStruct_swigregister = _extend_constructor_destructor.AStruct_swigregister
AStruct_swigregister(AStruct)
cvar = _extend_constructor_destructor.cvar

class BStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.BStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.BStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.BStruct_ivar_get, _extend_constructor_destructor.BStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_BStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_BStruct
    __del__ = lambda self : None;
BStruct_swigregister = _extend_constructor_destructor.BStruct_swigregister
BStruct_swigregister(BStruct)

class CStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.CStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.CStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.CStruct_ivar_get, _extend_constructor_destructor.CStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_CStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_CStruct
    __del__ = lambda self : None;
CStruct_swigregister = _extend_constructor_destructor.CStruct_swigregister
CStruct_swigregister(CStruct)

class DStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.DStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.DStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.DStruct_ivar_get, _extend_constructor_destructor.DStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_DStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_DStruct
    __del__ = lambda self : None;
DStruct_swigregister = _extend_constructor_destructor.DStruct_swigregister
DStruct_swigregister(DStruct)

class EStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, EStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, EStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.EStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.EStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.EStruct_ivar_get, _extend_constructor_destructor.EStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_EStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_EStruct
    __del__ = lambda self : None;
EStruct_swigregister = _extend_constructor_destructor.EStruct_swigregister
EStruct_swigregister(EStruct)

class FStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, FStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, FStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.FStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.FStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.FStruct_ivar_get, _extend_constructor_destructor.FStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_FStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_FStruct
    __del__ = lambda self : None;
FStruct_swigregister = _extend_constructor_destructor.FStruct_swigregister
FStruct_swigregister(FStruct)

class GStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, GStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, GStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ivar"] = _extend_constructor_destructor.GStruct_ivar_set
    __swig_getmethods__["ivar"] = _extend_constructor_destructor.GStruct_ivar_get
    if _newclass:ivar = _swig_property(_extend_constructor_destructor.GStruct_ivar_get, _extend_constructor_destructor.GStruct_ivar_set)
    def __init__(self, *args): 
        this = _extend_constructor_destructor.new_GStruct(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_constructor_destructor.delete_GStruct
    __del__ = lambda self : None;
GStruct_swigregister = _extend_constructor_destructor.GStruct_swigregister
GStruct_swigregister(GStruct)

# This file is compatible with both classic and new-style classes.


