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
            fp, pathname, description = imp.find_module('_extend', [dirname(__file__)])
        except ImportError:
            import _extend
            return _extend
        if fp is not None:
            try:
                _mod = imp.load_module('_extend', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _extend = swig_import_helper()
    del swig_import_helper
else:
    import _extend
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


class Base(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Base, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Base, name)
    __repr__ = _swig_repr
    def __init__(self, v=0): 
        this = _extend.new_Base(v)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["value"] = _extend.Base_value_set
    __swig_getmethods__["value"] = _extend.Base_value_get
    if _newclass:value = _swig_property(_extend.Base_value_get, _extend.Base_value_set)
    def method(self, *args): return _extend.Base_method(self, *args)
    __swig_destroy__ = _extend.delete_Base
    __del__ = lambda self : None;
    __swig_getmethods__["zeroVal"] = lambda x: _extend.Base_zeroVal
    if _newclass:zeroVal = staticmethod(_extend.Base_zeroVal)
    def currentValue(self): return _extend.Base_currentValue(self)
    def extendmethod(self, *args): return _extend.Base_extendmethod(self, *args)
Base_swigregister = _extend.Base_swigregister
Base_swigregister(Base)

def Base_zeroVal():
  return _extend.Base_zeroVal()
Base_zeroVal = _extend.Base_zeroVal

class Derived(Base):
    __swig_setmethods__ = {}
    for _s in [Base]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Derived, name, value)
    __swig_getmethods__ = {}
    for _s in [Base]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Derived, name)
    __repr__ = _swig_repr
    __swig_setmethods__["actualval"] = _extend.Derived_actualval_set
    __swig_getmethods__["actualval"] = _extend.Derived_actualval_get
    if _newclass:actualval = _swig_property(_extend.Derived_actualval_get, _extend.Derived_actualval_set)
    def __init__(self, *args): 
        this = _extend.new_Derived(*args)
        try: self.this.append(this)
        except: self.this = this
    def method(self, *args): return _extend.Derived_method(self, *args)
    __swig_setmethods__["extendval"] = _extend.Derived_extendval_set
    __swig_getmethods__["extendval"] = _extend.Derived_extendval_get
    if _newclass:extendval = _swig_property(_extend.Derived_extendval_get, _extend.Derived_extendval_set)
    __swig_destroy__ = _extend.delete_Derived
    __del__ = lambda self : None;
Derived_swigregister = _extend.Derived_swigregister
Derived_swigregister(Derived)

# This file is compatible with both classic and new-style classes.


