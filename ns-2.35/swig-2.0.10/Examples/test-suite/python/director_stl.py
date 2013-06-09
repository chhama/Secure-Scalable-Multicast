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
            fp, pathname, description = imp.find_module('_director_stl', [dirname(__file__)])
        except ImportError:
            import _director_stl
            return _director_stl
        if fp is not None:
            try:
                _mod = imp.load_module('_director_stl', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_stl = swig_import_helper()
    del swig_import_helper
else:
    import _director_stl
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


class SwigPyIterator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SwigPyIterator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SwigPyIterator, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _director_stl.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _director_stl.SwigPyIterator_value(self)
    def incr(self, n=1): return _director_stl.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _director_stl.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _director_stl.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _director_stl.SwigPyIterator_equal(self, *args)
    def copy(self): return _director_stl.SwigPyIterator_copy(self)
    def next(self): return _director_stl.SwigPyIterator_next(self)
    def __next__(self): return _director_stl.SwigPyIterator___next__(self)
    def previous(self): return _director_stl.SwigPyIterator_previous(self)
    def advance(self, *args): return _director_stl.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _director_stl.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _director_stl.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _director_stl.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _director_stl.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _director_stl.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _director_stl.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _director_stl.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_stl.delete_Foo
    __del__ = lambda self : None;
    def bar(self, *args): return _director_stl.Foo_bar(self, *args)
    def ping(self, *args): return _director_stl.Foo_ping(self, *args)
    def pong(self, *args): return _director_stl.Foo_pong(self, *args)
    def tping(self, *args): return _director_stl.Foo_tping(self, *args)
    def tpong(self, *args): return _director_stl.Foo_tpong(self, *args)
    def pident(self, *args): return _director_stl.Foo_pident(self, *args)
    def vident(self, *args): return _director_stl.Foo_vident(self, *args)
    def vsecond(self, *args): return _director_stl.Foo_vsecond(self, *args)
    def tpident(self, *args): return _director_stl.Foo_tpident(self, *args)
    def tvident(self, *args): return _director_stl.Foo_tvident(self, *args)
    def tvsecond(self, *args): return _director_stl.Foo_tvsecond(self, *args)
    def vidents(self, *args): return _director_stl.Foo_vidents(self, *args)
    def tvidents(self, *args): return _director_stl.Foo_tvidents(self, *args)
    def __init__(self): 
        if self.__class__ == Foo:
            _self = None
        else:
            _self = self
        this = _director_stl.new_Foo(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_stl.disown_Foo(self)
        return weakref_proxy(self)
Foo_swigregister = _director_stl.Foo_swigregister
Foo_swigregister(Foo)

# This file is compatible with both classic and new-style classes.

