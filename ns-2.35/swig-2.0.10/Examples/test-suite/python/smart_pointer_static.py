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
            fp, pathname, description = imp.find_module('_smart_pointer_static', [dirname(__file__)])
        except ImportError:
            import _smart_pointer_static
            return _smart_pointer_static
        if fp is not None:
            try:
                _mod = imp.load_module('_smart_pointer_static', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _smart_pointer_static = swig_import_helper()
    del swig_import_helper
else:
    import _smart_pointer_static
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


class MyHandle_Foo2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MyHandle_Foo2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MyHandle_Foo2, name)
    __repr__ = _swig_repr
    def __deref__(self): return _smart_pointer_static.MyHandle_Foo2___deref__(self)
    def __init__(self): 
        this = _smart_pointer_static.new_MyHandle_Foo2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_static.delete_MyHandle_Foo2
    __del__ = lambda self : None;
    def sum(self, *args): return _smart_pointer_static.MyHandle_Foo2_sum(self, *args)
MyHandle_Foo2_swigregister = _smart_pointer_static.MyHandle_Foo2_swigregister
MyHandle_Foo2_swigregister(MyHandle_Foo2)

class Foo2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo2, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _smart_pointer_static.delete_Foo2
    __del__ = lambda self : None;
    __swig_getmethods__["sum"] = lambda x: _smart_pointer_static.Foo2_sum
    if _newclass:sum = staticmethod(_smart_pointer_static.Foo2_sum)
    def __init__(self): 
        this = _smart_pointer_static.new_Foo2()
        try: self.this.append(this)
        except: self.this = this
Foo2_swigregister = _smart_pointer_static.Foo2_swigregister
Foo2_swigregister(Foo2)

def Foo2_sum(*args):
  return _smart_pointer_static.Foo2_sum(*args)
Foo2_sum = _smart_pointer_static.Foo2_sum

# This file is compatible with both classic and new-style classes.

