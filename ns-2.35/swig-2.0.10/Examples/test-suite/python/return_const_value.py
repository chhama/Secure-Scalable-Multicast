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
            fp, pathname, description = imp.find_module('_return_const_value', [dirname(__file__)])
        except ImportError:
            import _return_const_value
            return _return_const_value
        if fp is not None:
            try:
                _mod = imp.load_module('_return_const_value', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _return_const_value = swig_import_helper()
    del swig_import_helper
else:
    import _return_const_value
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
    __swig_setmethods__["_val"] = _return_const_value.Foo__val_set
    __swig_getmethods__["_val"] = _return_const_value.Foo__val_get
    if _newclass:_val = _swig_property(_return_const_value.Foo__val_get, _return_const_value.Foo__val_set)
    def __init__(self, *args): 
        this = _return_const_value.new_Foo(*args)
        try: self.this.append(this)
        except: self.this = this
    def getVal(self): return _return_const_value.Foo_getVal(self)
    __swig_destroy__ = _return_const_value.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _return_const_value.Foo_swigregister
Foo_swigregister(Foo)

class Foo_ptr(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo_ptr, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo_ptr, name)
    __repr__ = _swig_repr
    __swig_getmethods__["getPtr"] = lambda x: _return_const_value.Foo_ptr_getPtr
    if _newclass:getPtr = staticmethod(_return_const_value.Foo_ptr_getPtr)
    __swig_getmethods__["getConstPtr"] = lambda x: _return_const_value.Foo_ptr_getConstPtr
    if _newclass:getConstPtr = staticmethod(_return_const_value.Foo_ptr_getConstPtr)
    def __deref__(self): return _return_const_value.Foo_ptr___deref__(self)
    def __init__(self, *args): 
        this = _return_const_value.new_Foo_ptr(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _return_const_value.delete_Foo_ptr
    __del__ = lambda self : None;
    __swig_getmethods__["_val"] = _return_const_value.Foo_ptr__val_get
    if _newclass:_val = _swig_property(_return_const_value.Foo_ptr__val_get)
    def getVal(self): return _return_const_value.Foo_ptr_getVal(self)
Foo_ptr_swigregister = _return_const_value.Foo_ptr_swigregister
Foo_ptr_swigregister(Foo_ptr)

def Foo_ptr_getPtr():
  return _return_const_value.Foo_ptr_getPtr()
Foo_ptr_getPtr = _return_const_value.Foo_ptr_getPtr

def Foo_ptr_getConstPtr():
  return _return_const_value.Foo_ptr_getConstPtr()
Foo_ptr_getConstPtr = _return_const_value.Foo_ptr_getConstPtr

# This file is compatible with both classic and new-style classes.


