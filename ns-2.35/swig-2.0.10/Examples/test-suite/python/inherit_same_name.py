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
            fp, pathname, description = imp.find_module('_inherit_same_name', [dirname(__file__)])
        except ImportError:
            import _inherit_same_name
            return _inherit_same_name
        if fp is not None:
            try:
                _mod = imp.load_module('_inherit_same_name', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _inherit_same_name = swig_import_helper()
    del swig_import_helper
else:
    import _inherit_same_name
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
    def __init__(self): 
        this = _inherit_same_name.new_Base()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_same_name.delete_Base
    __del__ = lambda self : None;
Base_swigregister = _inherit_same_name.Base_swigregister
Base_swigregister(Base)

class Derived(Base):
    __swig_setmethods__ = {}
    for _s in [Base]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Derived, name, value)
    __swig_getmethods__ = {}
    for _s in [Base]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Derived, name)
    __repr__ = _swig_repr
    def MethodOrVariable(self): return _inherit_same_name.Derived_MethodOrVariable(self)
    def __init__(self): 
        this = _inherit_same_name.new_Derived()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_same_name.delete_Derived
    __del__ = lambda self : None;
Derived_swigregister = _inherit_same_name.Derived_swigregister
Derived_swigregister(Derived)

class Bottom(Derived):
    __swig_setmethods__ = {}
    for _s in [Derived]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bottom, name, value)
    __swig_getmethods__ = {}
    for _s in [Derived]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bottom, name)
    __repr__ = _swig_repr
    def MethodOrVariable(self): return _inherit_same_name.Bottom_MethodOrVariable(self)
    def __init__(self): 
        this = _inherit_same_name.new_Bottom()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_same_name.delete_Bottom
    __del__ = lambda self : None;
Bottom_swigregister = _inherit_same_name.Bottom_swigregister
Bottom_swigregister(Bottom)

# This file is compatible with both classic and new-style classes.


