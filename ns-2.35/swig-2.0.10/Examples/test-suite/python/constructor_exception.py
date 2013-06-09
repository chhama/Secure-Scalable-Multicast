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
            fp, pathname, description = imp.find_module('_constructor_exception', [dirname(__file__)])
        except ImportError:
            import _constructor_exception
            return _constructor_exception
        if fp is not None:
            try:
                _mod = imp.load_module('_constructor_exception', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _constructor_exception = swig_import_helper()
    del swig_import_helper
else:
    import _constructor_exception
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


class Error(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Error, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Error, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _constructor_exception.new_Error()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _constructor_exception.delete_Error
    __del__ = lambda self : None;
Error_swigregister = _constructor_exception.Error_swigregister
Error_swigregister(Error)

class SomeClass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SomeClass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SomeClass, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _constructor_exception.new_SomeClass(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _constructor_exception.delete_SomeClass
    __del__ = lambda self : None;
SomeClass_swigregister = _constructor_exception.SomeClass_swigregister
SomeClass_swigregister(SomeClass)

class Test(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _constructor_exception.new_Test(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _constructor_exception.delete_Test
    __del__ = lambda self : None;
Test_swigregister = _constructor_exception.Test_swigregister
Test_swigregister(Test)

# This file is compatible with both classic and new-style classes.


