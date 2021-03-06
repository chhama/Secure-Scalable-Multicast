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
            fp, pathname, description = imp.find_module('_cpp_nodefault', [dirname(__file__)])
        except ImportError:
            import _cpp_nodefault
            return _cpp_nodefault
        if fp is not None:
            try:
                _mod = imp.load_module('_cpp_nodefault', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _cpp_nodefault = swig_import_helper()
    del swig_import_helper
else:
    import _cpp_nodefault
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


class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_setmethods__["a"] = _cpp_nodefault.Foo_a_set
    __swig_getmethods__["a"] = _cpp_nodefault.Foo_a_get
    if _newclass:a = _swig_property(_cpp_nodefault.Foo_a_get, _cpp_nodefault.Foo_a_set)
    def __init__(self, *args): 
        this = _cpp_nodefault.new_Foo(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _cpp_nodefault.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _cpp_nodefault.Foo_swigregister
Foo_swigregister(Foo)


def create(*args):
  return _cpp_nodefault.create(*args)
create = _cpp_nodefault.create

def consume(*args):
  return _cpp_nodefault.consume(*args)
consume = _cpp_nodefault.consume
class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def consume(self, *args): return _cpp_nodefault.Bar_consume(self, *args)
    def create(self, *args): return _cpp_nodefault.Bar_create(self, *args)
    def __init__(self): 
        this = _cpp_nodefault.new_Bar()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _cpp_nodefault.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _cpp_nodefault.Bar_swigregister
Bar_swigregister(Bar)

# This file is compatible with both classic and new-style classes.

cvar = _cpp_nodefault.cvar

