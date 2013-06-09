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
            fp, pathname, description = imp.find_module('_template_static', [dirname(__file__)])
        except ImportError:
            import _template_static
            return _template_static
        if fp is not None:
            try:
                _mod = imp.load_module('_template_static', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_static = swig_import_helper()
    del swig_import_helper
else:
    import _template_static
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


class foo_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, foo_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, foo_i, name)
    __repr__ = _swig_repr
    __swig_setmethods__["test"] = _template_static.foo_i_test_set
    __swig_getmethods__["test"] = _template_static.foo_i_test_get
    if _newclass:test = _swig_property(_template_static.foo_i_test_get, _template_static.foo_i_test_set)
    def __init__(self): 
        this = _template_static.new_foo_i()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_static.delete_foo_i
    __del__ = lambda self : None;
foo_i_swigregister = _template_static.foo_i_swigregister
foo_i_swigregister(foo_i)
cvar = _template_static.cvar

class foo_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, foo_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, foo_d, name)
    __repr__ = _swig_repr
    __swig_setmethods__["test"] = _template_static.foo_d_test_set
    __swig_getmethods__["test"] = _template_static.foo_d_test_get
    if _newclass:test = _swig_property(_template_static.foo_d_test_get, _template_static.foo_d_test_set)
    def __init__(self): 
        this = _template_static.new_foo_d()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_static.delete_foo_d
    __del__ = lambda self : None;
foo_d_swigregister = _template_static.foo_d_swigregister
foo_d_swigregister(foo_d)

class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_getmethods__["bar_double"] = lambda x: _template_static.Foo_bar_double
    if _newclass:bar_double = staticmethod(_template_static.Foo_bar_double)
    def __init__(self): 
        this = _template_static.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_static.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _template_static.Foo_swigregister
Foo_swigregister(Foo)

def Foo_bar_double(*args):
  return _template_static.Foo_bar_double(*args)
Foo_bar_double = _template_static.Foo_bar_double

# This file is compatible with both classic and new-style classes.


