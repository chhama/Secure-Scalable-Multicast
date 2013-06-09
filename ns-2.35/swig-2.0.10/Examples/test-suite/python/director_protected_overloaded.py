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
            fp, pathname, description = imp.find_module('_director_protected_overloaded', [dirname(__file__)])
        except ImportError:
            import _director_protected_overloaded
            return _director_protected_overloaded
        if fp is not None:
            try:
                _mod = imp.load_module('_director_protected_overloaded', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_protected_overloaded = swig_import_helper()
    del swig_import_helper
else:
    import _director_protected_overloaded
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


class IDataObserver(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IDataObserver, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IDataObserver, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_protected_overloaded.delete_IDataObserver
    __del__ = lambda self : None;
    def notoverloaded(self): return _director_protected_overloaded.IDataObserver_notoverloaded(self)
    def isoverloaded(self, *args): return _director_protected_overloaded.IDataObserver_isoverloaded(self, *args)
    def __init__(self): 
        if self.__class__ == IDataObserver:
            _self = None
        else:
            _self = self
        this = _director_protected_overloaded.new_IDataObserver(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_protected_overloaded.disown_IDataObserver(self)
        return weakref_proxy(self)
IDataObserver_swigregister = _director_protected_overloaded.IDataObserver_swigregister
IDataObserver_swigregister(IDataObserver)

class DerivedDataObserver(IDataObserver):
    __swig_setmethods__ = {}
    for _s in [IDataObserver]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, DerivedDataObserver, name, value)
    __swig_getmethods__ = {}
    for _s in [IDataObserver]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, DerivedDataObserver, name)
    __repr__ = _swig_repr
    def __init__(self): 
        if self.__class__ == DerivedDataObserver:
            _self = None
        else:
            _self = self
        this = _director_protected_overloaded.new_DerivedDataObserver(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_protected_overloaded.delete_DerivedDataObserver
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_protected_overloaded.disown_DerivedDataObserver(self)
        return weakref_proxy(self)
    def notoverloaded(self): return _director_protected_overloaded.DerivedDataObserver_notoverloaded(self)
    def isoverloaded(self, *args): return _director_protected_overloaded.DerivedDataObserver_isoverloaded(self, *args)
DerivedDataObserver_swigregister = _director_protected_overloaded.DerivedDataObserver_swigregister
DerivedDataObserver_swigregister(DerivedDataObserver)

# This file is compatible with both classic and new-style classes.


