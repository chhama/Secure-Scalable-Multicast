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
            fp, pathname, description = imp.find_module('_director_abstract', [dirname(__file__)])
        except ImportError:
            import _director_abstract
            return _director_abstract
        if fp is not None:
            try:
                _mod = imp.load_module('_director_abstract', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_abstract = swig_import_helper()
    del swig_import_helper
else:
    import _director_abstract
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
    __swig_destroy__ = _director_abstract.delete_Foo
    __del__ = lambda self : None;
    def ping(self): return _director_abstract.Foo_ping(self)
    def pong(self): return _director_abstract.Foo_pong(self)
    def __init__(self): 
        if self.__class__ == Foo:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_Foo(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_Foo(self)
        return weakref_proxy(self)
Foo_swigregister = _director_abstract.Foo_swigregister
Foo_swigregister(Foo)

class Example0(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Example0, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Example0, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Example0:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_Example0(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_abstract.delete_Example0
    __del__ = lambda self : None;
    def GetXSize(self): return _director_abstract.Example0_GetXSize(self)
    def Color(self, *args): return _director_abstract.Example0_Color(self, *args)
    __swig_getmethods__["get_color"] = lambda x: _director_abstract.Example0_get_color
    if _newclass:get_color = staticmethod(_director_abstract.Example0_get_color)
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_Example0(self)
        return weakref_proxy(self)
Example0_swigregister = _director_abstract.Example0_swigregister
Example0_swigregister(Example0)

def Example0_get_color(*args):
  return _director_abstract.Example0_get_color(*args)
Example0_get_color = _director_abstract.Example0_get_color

class Example1(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Example1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Example1, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Example1:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_Example1(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_abstract.delete_Example1
    __del__ = lambda self : None;
    def GetXSize(self): return _director_abstract.Example1_GetXSize(self)
    def Color(self, *args): return _director_abstract.Example1_Color(self, *args)
    __swig_getmethods__["get_color"] = lambda x: _director_abstract.Example1_get_color
    if _newclass:get_color = staticmethod(_director_abstract.Example1_get_color)
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_Example1(self)
        return weakref_proxy(self)
Example1_swigregister = _director_abstract.Example1_swigregister
Example1_swigregister(Example1)

def Example1_get_color(*args):
  return _director_abstract.Example1_get_color(*args)
Example1_get_color = _director_abstract.Example1_get_color

class Example2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Example2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Example2, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Example2:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_Example2(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_abstract.delete_Example2
    __del__ = lambda self : None;
    def GetXSize(self): return _director_abstract.Example2_GetXSize(self)
    def Color(self, *args): return _director_abstract.Example2_Color(self, *args)
    __swig_getmethods__["get_color"] = lambda x: _director_abstract.Example2_get_color
    if _newclass:get_color = staticmethod(_director_abstract.Example2_get_color)
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_Example2(self)
        return weakref_proxy(self)
Example2_swigregister = _director_abstract.Example2_swigregister
Example2_swigregister(Example2)

def Example2_get_color(*args):
  return _director_abstract.Example2_get_color(*args)
Example2_get_color = _director_abstract.Example2_get_color

class Example4(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Example4, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Example4, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Example4:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_Example4(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_abstract.delete_Example4
    __del__ = lambda self : None;
    def GetXSize(self): return _director_abstract.Example4_GetXSize(self)
    def Color(self, *args): return _director_abstract.Example4_Color(self, *args)
    __swig_getmethods__["get_color"] = lambda x: _director_abstract.Example4_get_color
    if _newclass:get_color = staticmethod(_director_abstract.Example4_get_color)
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_Example4(self)
        return weakref_proxy(self)
Example4_swigregister = _director_abstract.Example4_swigregister
Example4_swigregister(Example4)

def Example4_get_color(*args):
  return _director_abstract.Example4_get_color(*args)
Example4_get_color = _director_abstract.Example4_get_color

class Example3_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Example3_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Example3_i, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        if self.__class__ == Example3_i:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_Example3_i(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_abstract.delete_Example3_i
    __del__ = lambda self : None;
    def Color(self, *args): return _director_abstract.Example3_i_Color(self, *args)
    __swig_getmethods__["get_color"] = lambda x: _director_abstract.Example3_i_get_color
    if _newclass:get_color = staticmethod(_director_abstract.Example3_i_get_color)
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_Example3_i(self)
        return weakref_proxy(self)
Example3_i_swigregister = _director_abstract.Example3_i_swigregister
Example3_i_swigregister(Example3_i)

def Example3_i_get_color(*args):
  return _director_abstract.Example3_i_get_color(*args)
Example3_i_get_color = _director_abstract.Example3_i_get_color

class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_abstract.delete_A
    __del__ = lambda self : None;
    def __init__(self, *args): 
        if self.__class__ == A:
            _self = None
        else:
            _self = self
        this = _director_abstract.new_A(_self, *args)
        try: self.this.append(this)
        except: self.this = this
    def f(self): return _director_abstract.A_f(self)
    def __disown__(self):
        self.this.disown()
        _director_abstract.disown_A(self)
        return weakref_proxy(self)
A_swigregister = _director_abstract.A_swigregister
A_swigregister(A)

def g(*args):
  return _director_abstract.g(*args)
g = _director_abstract.g

# This file is compatible with both classic and new-style classes.


