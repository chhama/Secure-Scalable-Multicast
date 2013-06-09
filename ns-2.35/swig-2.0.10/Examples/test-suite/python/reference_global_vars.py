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
            fp, pathname, description = imp.find_module('_reference_global_vars', [dirname(__file__)])
        except ImportError:
            import _reference_global_vars
            return _reference_global_vars
        if fp is not None:
            try:
                _mod = imp.load_module('_reference_global_vars', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _reference_global_vars = swig_import_helper()
    del swig_import_helper
else:
    import _reference_global_vars
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


class TestClass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TestClass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TestClass, name)
    __repr__ = _swig_repr
    __swig_setmethods__["num"] = _reference_global_vars.TestClass_num_set
    __swig_getmethods__["num"] = _reference_global_vars.TestClass_num_get
    if _newclass:num = _swig_property(_reference_global_vars.TestClass_num_get, _reference_global_vars.TestClass_num_set)
    def __init__(self, n=0): 
        this = _reference_global_vars.new_TestClass(n)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _reference_global_vars.delete_TestClass
    __del__ = lambda self : None;
TestClass_swigregister = _reference_global_vars.TestClass_swigregister
TestClass_swigregister(TestClass)


def getconstTC():
  return _reference_global_vars.getconstTC()
getconstTC = _reference_global_vars.getconstTC

def setref_bool(*args):
  return _reference_global_vars.setref_bool(*args)
setref_bool = _reference_global_vars.setref_bool

def createref_bool(*args):
  return _reference_global_vars.createref_bool(*args)
createref_bool = _reference_global_vars.createref_bool

def value_bool(*args):
  return _reference_global_vars.value_bool(*args)
value_bool = _reference_global_vars.value_bool

def setref_char(*args):
  return _reference_global_vars.setref_char(*args)
setref_char = _reference_global_vars.setref_char

def createref_char(*args):
  return _reference_global_vars.createref_char(*args)
createref_char = _reference_global_vars.createref_char

def value_char(*args):
  return _reference_global_vars.value_char(*args)
value_char = _reference_global_vars.value_char

def setref_unsigned_char(*args):
  return _reference_global_vars.setref_unsigned_char(*args)
setref_unsigned_char = _reference_global_vars.setref_unsigned_char

def createref_unsigned_char(*args):
  return _reference_global_vars.createref_unsigned_char(*args)
createref_unsigned_char = _reference_global_vars.createref_unsigned_char

def value_unsigned_char(*args):
  return _reference_global_vars.value_unsigned_char(*args)
value_unsigned_char = _reference_global_vars.value_unsigned_char

def setref_signed_char(*args):
  return _reference_global_vars.setref_signed_char(*args)
setref_signed_char = _reference_global_vars.setref_signed_char

def createref_signed_char(*args):
  return _reference_global_vars.createref_signed_char(*args)
createref_signed_char = _reference_global_vars.createref_signed_char

def value_signed_char(*args):
  return _reference_global_vars.value_signed_char(*args)
value_signed_char = _reference_global_vars.value_signed_char

def setref_short(*args):
  return _reference_global_vars.setref_short(*args)
setref_short = _reference_global_vars.setref_short

def createref_short(*args):
  return _reference_global_vars.createref_short(*args)
createref_short = _reference_global_vars.createref_short

def value_short(*args):
  return _reference_global_vars.value_short(*args)
value_short = _reference_global_vars.value_short

def setref_unsigned_short(*args):
  return _reference_global_vars.setref_unsigned_short(*args)
setref_unsigned_short = _reference_global_vars.setref_unsigned_short

def createref_unsigned_short(*args):
  return _reference_global_vars.createref_unsigned_short(*args)
createref_unsigned_short = _reference_global_vars.createref_unsigned_short

def value_unsigned_short(*args):
  return _reference_global_vars.value_unsigned_short(*args)
value_unsigned_short = _reference_global_vars.value_unsigned_short

def setref_int(*args):
  return _reference_global_vars.setref_int(*args)
setref_int = _reference_global_vars.setref_int

def createref_int(*args):
  return _reference_global_vars.createref_int(*args)
createref_int = _reference_global_vars.createref_int

def value_int(*args):
  return _reference_global_vars.value_int(*args)
value_int = _reference_global_vars.value_int

def setref_unsigned_int(*args):
  return _reference_global_vars.setref_unsigned_int(*args)
setref_unsigned_int = _reference_global_vars.setref_unsigned_int

def createref_unsigned_int(*args):
  return _reference_global_vars.createref_unsigned_int(*args)
createref_unsigned_int = _reference_global_vars.createref_unsigned_int

def value_unsigned_int(*args):
  return _reference_global_vars.value_unsigned_int(*args)
value_unsigned_int = _reference_global_vars.value_unsigned_int

def setref_long(*args):
  return _reference_global_vars.setref_long(*args)
setref_long = _reference_global_vars.setref_long

def createref_long(*args):
  return _reference_global_vars.createref_long(*args)
createref_long = _reference_global_vars.createref_long

def value_long(*args):
  return _reference_global_vars.value_long(*args)
value_long = _reference_global_vars.value_long

def setref_unsigned_long(*args):
  return _reference_global_vars.setref_unsigned_long(*args)
setref_unsigned_long = _reference_global_vars.setref_unsigned_long

def createref_unsigned_long(*args):
  return _reference_global_vars.createref_unsigned_long(*args)
createref_unsigned_long = _reference_global_vars.createref_unsigned_long

def value_unsigned_long(*args):
  return _reference_global_vars.value_unsigned_long(*args)
value_unsigned_long = _reference_global_vars.value_unsigned_long

def setref_float(*args):
  return _reference_global_vars.setref_float(*args)
setref_float = _reference_global_vars.setref_float

def createref_float(*args):
  return _reference_global_vars.createref_float(*args)
createref_float = _reference_global_vars.createref_float

def value_float(*args):
  return _reference_global_vars.value_float(*args)
value_float = _reference_global_vars.value_float

def setref_double(*args):
  return _reference_global_vars.setref_double(*args)
setref_double = _reference_global_vars.setref_double

def createref_double(*args):
  return _reference_global_vars.createref_double(*args)
createref_double = _reference_global_vars.createref_double

def value_double(*args):
  return _reference_global_vars.value_double(*args)
value_double = _reference_global_vars.value_double

def setref_long_long(*args):
  return _reference_global_vars.setref_long_long(*args)
setref_long_long = _reference_global_vars.setref_long_long

def createref_long_long(*args):
  return _reference_global_vars.createref_long_long(*args)
createref_long_long = _reference_global_vars.createref_long_long

def value_long_long(*args):
  return _reference_global_vars.value_long_long(*args)
value_long_long = _reference_global_vars.value_long_long

def setref_unsigned_long_long(*args):
  return _reference_global_vars.setref_unsigned_long_long(*args)
setref_unsigned_long_long = _reference_global_vars.setref_unsigned_long_long

def createref_unsigned_long_long(*args):
  return _reference_global_vars.createref_unsigned_long_long(*args)
createref_unsigned_long_long = _reference_global_vars.createref_unsigned_long_long

def value_unsigned_long_long(*args):
  return _reference_global_vars.value_unsigned_long_long(*args)
value_unsigned_long_long = _reference_global_vars.value_unsigned_long_long

def setref_TestClass(*args):
  return _reference_global_vars.setref_TestClass(*args)
setref_TestClass = _reference_global_vars.setref_TestClass

def createref_TestClass(*args):
  return _reference_global_vars.createref_TestClass(*args)
createref_TestClass = _reference_global_vars.createref_TestClass

def value_TestClass(*args):
  return _reference_global_vars.value_TestClass(*args)
value_TestClass = _reference_global_vars.value_TestClass
# This file is compatible with both classic and new-style classes.

cvar = _reference_global_vars.cvar
