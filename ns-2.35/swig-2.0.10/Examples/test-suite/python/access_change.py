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
            fp, pathname, description = imp.find_module('_access_change', [dirname(__file__)])
        except ImportError:
            import _access_change
            return _access_change
        if fp is not None:
            try:
                _mod = imp.load_module('_access_change', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _access_change = swig_import_helper()
    del swig_import_helper
else:
    import _access_change
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


class BaseInt(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BaseInt, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BaseInt, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _access_change.delete_BaseInt
    __del__ = lambda self : None;
    def PublicProtectedPublic1(self): return _access_change.BaseInt_PublicProtectedPublic1(self)
    def PublicProtectedPublic2(self): return _access_change.BaseInt_PublicProtectedPublic2(self)
    def PublicProtectedPublic3(self): return _access_change.BaseInt_PublicProtectedPublic3(self)
    def PublicProtectedPublic4(self): return _access_change.BaseInt_PublicProtectedPublic4(self)
    def __init__(self): 
        this = _access_change.new_BaseInt()
        try: self.this.append(this)
        except: self.this = this
BaseInt_swigregister = _access_change.BaseInt_swigregister
BaseInt_swigregister(BaseInt)

class DerivedInt(BaseInt):
    __swig_setmethods__ = {}
    for _s in [BaseInt]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, DerivedInt, name, value)
    __swig_getmethods__ = {}
    for _s in [BaseInt]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, DerivedInt, name)
    __repr__ = _swig_repr
    def WasProtected1(self): return _access_change.DerivedInt_WasProtected1(self)
    def WasProtected2(self): return _access_change.DerivedInt_WasProtected2(self)
    def WasProtected3(self): return _access_change.DerivedInt_WasProtected3(self)
    def WasProtected4(self): return _access_change.DerivedInt_WasProtected4(self)
    def __init__(self): 
        this = _access_change.new_DerivedInt()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _access_change.delete_DerivedInt
    __del__ = lambda self : None;
DerivedInt_swigregister = _access_change.DerivedInt_swigregister
DerivedInt_swigregister(DerivedInt)

class BottomInt(DerivedInt):
    __swig_setmethods__ = {}
    for _s in [DerivedInt]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, BottomInt, name, value)
    __swig_getmethods__ = {}
    for _s in [DerivedInt]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, BottomInt, name)
    __repr__ = _swig_repr
    def WasProtected1(self): return _access_change.BottomInt_WasProtected1(self)
    def WasProtected2(self): return _access_change.BottomInt_WasProtected2(self)
    def WasProtected3(self): return _access_change.BottomInt_WasProtected3(self)
    def WasProtected4(self): return _access_change.BottomInt_WasProtected4(self)
    def PublicProtectedPublic1(self): return _access_change.BottomInt_PublicProtectedPublic1(self)
    def PublicProtectedPublic2(self): return _access_change.BottomInt_PublicProtectedPublic2(self)
    def PublicProtectedPublic3(self): return _access_change.BottomInt_PublicProtectedPublic3(self)
    def PublicProtectedPublic4(self): return _access_change.BottomInt_PublicProtectedPublic4(self)
    def __init__(self): 
        this = _access_change.new_BottomInt()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _access_change.delete_BottomInt
    __del__ = lambda self : None;
BottomInt_swigregister = _access_change.BottomInt_swigregister
BottomInt_swigregister(BottomInt)

# This file is compatible with both classic and new-style classes.


