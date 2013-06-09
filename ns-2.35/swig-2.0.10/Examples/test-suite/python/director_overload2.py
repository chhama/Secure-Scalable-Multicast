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
            fp, pathname, description = imp.find_module('_director_overload2', [dirname(__file__)])
        except ImportError:
            import _director_overload2
            return _director_overload2
        if fp is not None:
            try:
                _mod = imp.load_module('_director_overload2', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_overload2 = swig_import_helper()
    del swig_import_helper
else:
    import _director_overload2
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


class OverloadBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, OverloadBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, OverloadBase, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_overload2.delete_OverloadBase
    __del__ = lambda self : None;
    def mmm(self): return _director_overload2.OverloadBase_mmm(self)
    def nnn(self, *args): return _director_overload2.OverloadBase_nnn(self, *args)
    def __init__(self): 
        if self.__class__ == OverloadBase:
            _self = None
        else:
            _self = self
        this = _director_overload2.new_OverloadBase(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_overload2.disown_OverloadBase(self)
        return weakref_proxy(self)
OverloadBase_swigregister = _director_overload2.OverloadBase_swigregister
OverloadBase_swigregister(OverloadBase)

class OverloadDerived1(OverloadBase):
    __swig_setmethods__ = {}
    for _s in [OverloadBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, OverloadDerived1, name, value)
    __swig_getmethods__ = {}
    for _s in [OverloadBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, OverloadDerived1, name)
    __repr__ = _swig_repr
    def nnn(self, *args): return _director_overload2.OverloadDerived1_nnn(self, *args)
    def __init__(self): 
        if self.__class__ == OverloadDerived1:
            _self = None
        else:
            _self = self
        this = _director_overload2.new_OverloadDerived1(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_overload2.delete_OverloadDerived1
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_overload2.disown_OverloadDerived1(self)
        return weakref_proxy(self)
OverloadDerived1_swigregister = _director_overload2.OverloadDerived1_swigregister
OverloadDerived1_swigregister(OverloadDerived1)

class OverloadDerived2(OverloadBase):
    __swig_setmethods__ = {}
    for _s in [OverloadBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, OverloadDerived2, name, value)
    __swig_getmethods__ = {}
    for _s in [OverloadBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, OverloadDerived2, name)
    __repr__ = _swig_repr
    def nnn(self): return _director_overload2.OverloadDerived2_nnn(self)
    def __init__(self): 
        if self.__class__ == OverloadDerived2:
            _self = None
        else:
            _self = self
        this = _director_overload2.new_OverloadDerived2(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_overload2.delete_OverloadDerived2
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_overload2.disown_OverloadDerived2(self)
        return weakref_proxy(self)
OverloadDerived2_swigregister = _director_overload2.OverloadDerived2_swigregister
OverloadDerived2_swigregister(OverloadDerived2)

# This file is compatible with both classic and new-style classes.

