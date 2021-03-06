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
            fp, pathname, description = imp.find_module('_director_exception', [dirname(__file__)])
        except ImportError:
            import _director_exception
            return _director_exception
        if fp is not None:
            try:
                _mod = imp.load_module('_director_exception', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_exception = swig_import_helper()
    del swig_import_helper
else:
    import _director_exception
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


class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_exception.delete_Foo
    __del__ = lambda self : None;
    def ping(self): return _director_exception.Foo_ping(self)
    def pong(self, val=3): return _director_exception.Foo_pong(self, val)
    def __init__(self): 
        if self.__class__ == Foo:
            _self = None
        else:
            _self = self
        this = _director_exception.new_Foo(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_exception.disown_Foo(self)
        return weakref_proxy(self)
Foo_swigregister = _director_exception.Foo_swigregister
Foo_swigregister(Foo)


def launder(*args):
  return _director_exception.launder(*args)
launder = _director_exception.launder
class Exception1(Exception):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Exception1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Exception1, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _director_exception.new_Exception1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_exception.delete_Exception1
    __del__ = lambda self : None;
Exception1_swigregister = _director_exception.Exception1_swigregister
Exception1_swigregister(Exception1)

class Exception2(Exception):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Exception2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Exception2, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _director_exception.new_Exception2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_exception.delete_Exception2
    __del__ = lambda self : None;
Exception2_swigregister = _director_exception.Exception2_swigregister
Exception2_swigregister(Exception2)

class Base(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Base, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Base, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_exception.delete_Base
    __del__ = lambda self : None;
    def __init__(self): 
        this = _director_exception.new_Base()
        try: self.this.append(this)
        except: self.this = this
Base_swigregister = _director_exception.Base_swigregister
Base_swigregister(Base)

class Bar(Base):
    __swig_setmethods__ = {}
    for _s in [Base]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    for _s in [Base]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def ping(self): return _director_exception.Bar_ping(self)
    def pong(self): return _director_exception.Bar_pong(self)
    def pang(self): return _director_exception.Bar_pang(self)
    def __init__(self): 
        if self.__class__ == Bar:
            _self = None
        else:
            _self = self
        this = _director_exception.new_Bar(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_exception.delete_Bar
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_exception.disown_Bar(self)
        return weakref_proxy(self)
Bar_swigregister = _director_exception.Bar_swigregister
Bar_swigregister(Bar)

# This file is compatible with both classic and new-style classes.


