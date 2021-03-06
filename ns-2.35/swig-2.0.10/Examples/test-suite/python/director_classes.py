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
            fp, pathname, description = imp.find_module('_director_classes', [dirname(__file__)])
        except ImportError:
            import _director_classes
            return _director_classes
        if fp is not None:
            try:
                _mod = imp.load_module('_director_classes', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_classes = swig_import_helper()
    del swig_import_helper
else:
    import _director_classes
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


try:
    import weakref
    weakref_proxy = weakref.proxy
except:
    weakref_proxy = lambda x: x


class DoubleHolder(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DoubleHolder, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DoubleHolder, name)
    __repr__ = _swig_repr
    def __init__(self, v=0.0): 
        this = _director_classes.new_DoubleHolder(v)
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["val"] = _director_classes.DoubleHolder_val_set
    __swig_getmethods__["val"] = _director_classes.DoubleHolder_val_get
    if _newclass:val = _swig_property(_director_classes.DoubleHolder_val_get, _director_classes.DoubleHolder_val_set)
    __swig_destroy__ = _director_classes.delete_DoubleHolder
    __del__ = lambda self : None;
DoubleHolder_swigregister = _director_classes.DoubleHolder_swigregister
DoubleHolder_swigregister(DoubleHolder)
cvar = _director_classes.cvar

class Base(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Base, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Base, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Base:
            _self = None
        else:
            _self = self
        this = _director_classes.new_Base(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_classes.delete_Base
    __del__ = lambda self : None;
    def Val(self, *args): return _director_classes.Base_Val(self, *args)
    def Ref(self, *args): return _director_classes.Base_Ref(self, *args)
    def Ptr(self, *args): return _director_classes.Base_Ptr(self, *args)
    def FullyOverloaded(self, *args): return _director_classes.Base_FullyOverloaded(self, *args)
    def SemiOverloaded(self, *args): return _director_classes.Base_SemiOverloaded(self, *args)
    def DefaultParms(self, *args): return _director_classes.Base_DefaultParms(self, *args)
    def __disown__(self):
        self.this.disown()
        _director_classes.disown_Base(self)
        return weakref_proxy(self)
Base_swigregister = _director_classes.Base_swigregister
Base_swigregister(Base)

class Derived(Base):
    __swig_setmethods__ = {}
    for _s in [Base]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Derived, name, value)
    __swig_getmethods__ = {}
    for _s in [Base]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Derived, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Derived:
            _self = None
        else:
            _self = self
        this = _director_classes.new_Derived(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_classes.delete_Derived
    __del__ = lambda self : None;
    def Val(self, *args): return _director_classes.Derived_Val(self, *args)
    def Ref(self, *args): return _director_classes.Derived_Ref(self, *args)
    def Ptr(self, *args): return _director_classes.Derived_Ptr(self, *args)
    def FullyOverloaded(self, *args): return _director_classes.Derived_FullyOverloaded(self, *args)
    def SemiOverloaded(self, *args): return _director_classes.Derived_SemiOverloaded(self, *args)
    def DefaultParms(self, *args): return _director_classes.Derived_DefaultParms(self, *args)
    def __disown__(self):
        self.this.disown()
        _director_classes.disown_Derived(self)
        return weakref_proxy(self)
Derived_swigregister = _director_classes.Derived_swigregister
Derived_swigregister(Derived)

class Caller(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Caller, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Caller, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _director_classes.new_Caller()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_classes.delete_Caller
    __del__ = lambda self : None;
    def set(self, *args): return _director_classes.Caller_set(self, *args)
    def reset(self): return _director_classes.Caller_reset(self)
    def ValCall(self, *args): return _director_classes.Caller_ValCall(self, *args)
    def RefCall(self, *args): return _director_classes.Caller_RefCall(self, *args)
    def PtrCall(self, *args): return _director_classes.Caller_PtrCall(self, *args)
    def FullyOverloadedCall(self, *args): return _director_classes.Caller_FullyOverloadedCall(self, *args)
    def SemiOverloadedCall(self, *args): return _director_classes.Caller_SemiOverloadedCall(self, *args)
    def DefaultParmsCall(self, *args): return _director_classes.Caller_DefaultParmsCall(self, *args)
Caller_swigregister = _director_classes.Caller_swigregister
Caller_swigregister(Caller)

class BaseClass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BaseClass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BaseClass, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_classes.delete_BaseClass
    __del__ = lambda self : None;
    def dofoo(self, *args): return _director_classes.BaseClass_dofoo(self, *args)
    def __init__(self): 
        if self.__class__ == BaseClass:
            _self = None
        else:
            _self = self
        this = _director_classes.new_BaseClass(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_classes.disown_BaseClass(self)
        return weakref_proxy(self)
BaseClass_swigregister = _director_classes.BaseClass_swigregister
BaseClass_swigregister(BaseClass)

class DerivedClass(BaseClass):
    __swig_setmethods__ = {}
    for _s in [BaseClass]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, DerivedClass, name, value)
    __swig_getmethods__ = {}
    for _s in [BaseClass]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, DerivedClass, name)
    __repr__ = _swig_repr
    def __init__(self): 
        if self.__class__ == DerivedClass:
            _self = None
        else:
            _self = self
        this = _director_classes.new_DerivedClass(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_classes.delete_DerivedClass
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_classes.disown_DerivedClass(self)
        return weakref_proxy(self)
DerivedClass_swigregister = _director_classes.DerivedClass_swigregister
DerivedClass_swigregister(DerivedClass)

# This file is compatible with both classic and new-style classes.


