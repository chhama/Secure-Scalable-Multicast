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
            fp, pathname, description = imp.find_module('_director_basic', [dirname(__file__)])
        except ImportError:
            import _director_basic
            return _director_basic
        if fp is not None:
            try:
                _mod = imp.load_module('_director_basic', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_basic = swig_import_helper()
    del swig_import_helper
else:
    import _director_basic
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
    __swig_destroy__ = _director_basic.delete_Foo
    __del__ = lambda self : None;
    def ping(self): return _director_basic.Foo_ping(self)
    def pong(self): return _director_basic.Foo_pong(self)
    __swig_getmethods__["get_self"] = lambda x: _director_basic.Foo_get_self
    if _newclass:get_self = staticmethod(_director_basic.Foo_get_self)
    def __init__(self): 
        if self.__class__ == Foo:
            _self = None
        else:
            _self = self
        this = _director_basic.new_Foo(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_basic.disown_Foo(self)
        return weakref_proxy(self)
Foo_swigregister = _director_basic.Foo_swigregister
Foo_swigregister(Foo)

def Foo_get_self(*args):
  return _director_basic.Foo_get_self(*args)
Foo_get_self = _director_basic.Foo_get_self

class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == A:
            _self = None
        else:
            _self = self
        this = _director_basic.new_A(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_basic.delete_A
    __del__ = lambda self : None;
    def f(self, i=0): return _director_basic.A_f(self, i)
    def rg(self, i=0): return _director_basic.A_rg(self, i)
    def __disown__(self):
        self.this.disown()
        _director_basic.disown_A(self)
        return weakref_proxy(self)
A_swigregister = _director_basic.A_swigregister
A_swigregister(A)

class A1(A):
    __swig_setmethods__ = {}
    for _s in [A]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, A1, name, value)
    __swig_getmethods__ = {}
    for _s in [A]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, A1, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _director_basic.new_A1(*args)
        try: self.this.append(this)
        except: self.this = this
    def ff(self, i=0): return _director_basic.A1_ff(self, i)
    __swig_destroy__ = _director_basic.delete_A1
    __del__ = lambda self : None;
A1_swigregister = _director_basic.A1_swigregister
A1_swigregister(A1)

class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    __swig_setmethods__["x"] = _director_basic.Bar_x_set
    __swig_getmethods__["x"] = _director_basic.Bar_x_get
    if _newclass:x = _swig_property(_director_basic.Bar_x_get, _director_basic.Bar_x_set)
    def __init__(self, _x=0): 
        this = _director_basic.new_Bar(_x)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_basic.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _director_basic.Bar_swigregister
Bar_swigregister(Bar)

class MyClass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MyClass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MyClass, name)
    __repr__ = _swig_repr
    def __init__(self, a=0): 
        if self.__class__ == MyClass:
            _self = None
        else:
            _self = self
        this = _director_basic.new_MyClass(_self, a)
        try: self.this.append(this)
        except: self.this = this
    def method(self, *args): return _director_basic.MyClass_method(self, *args)
    __swig_destroy__ = _director_basic.delete_MyClass
    __del__ = lambda self : None;
    def vmethod(self, *args): return _director_basic.MyClass_vmethod(self, *args)
    def pmethod(self, *args): return _director_basic.MyClass_pmethod(self, *args)
    def cmethod(self, *args): return _director_basic.MyClass_cmethod(self, *args)
    __swig_getmethods__["get_self"] = lambda x: _director_basic.MyClass_get_self
    if _newclass:get_self = staticmethod(_director_basic.MyClass_get_self)
    __swig_getmethods__["call_pmethod"] = lambda x: _director_basic.MyClass_call_pmethod
    if _newclass:call_pmethod = staticmethod(_director_basic.MyClass_call_pmethod)
    def __disown__(self):
        self.this.disown()
        _director_basic.disown_MyClass(self)
        return weakref_proxy(self)
MyClass_swigregister = _director_basic.MyClass_swigregister
MyClass_swigregister(MyClass)

def MyClass_get_self(*args):
  return _director_basic.MyClass_get_self(*args)
MyClass_get_self = _director_basic.MyClass_get_self

def MyClass_call_pmethod(*args):
  return _director_basic.MyClass_call_pmethod(*args)
MyClass_call_pmethod = _director_basic.MyClass_call_pmethod

class MyClassT_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MyClassT_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MyClassT_i, name)
    __repr__ = _swig_repr
    def __init__(self, a=0): 
        this = _director_basic.new_MyClassT_i(a)
        try: self.this.append(this)
        except: self.this = this
    def method(self, *args): return _director_basic.MyClassT_i_method(self, *args)
    __swig_destroy__ = _director_basic.delete_MyClassT_i
    __del__ = lambda self : None;
MyClassT_i_swigregister = _director_basic.MyClassT_i_swigregister
MyClassT_i_swigregister(MyClassT_i)

# This file is compatible with both classic and new-style classes.

