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
            fp, pathname, description = imp.find_module('_arrays_dimensionless', [dirname(__file__)])
        except ImportError:
            import _arrays_dimensionless
            return _arrays_dimensionless
        if fp is not None:
            try:
                _mod = imp.load_module('_arrays_dimensionless', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _arrays_dimensionless = swig_import_helper()
    del swig_import_helper
else:
    import _arrays_dimensionless
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


class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    __swig_setmethods__["ints"] = _arrays_dimensionless.Bar_ints_set
    __swig_getmethods__["ints"] = _arrays_dimensionless.Bar_ints_get
    if _newclass:ints = _swig_property(_arrays_dimensionless.Bar_ints_get, _arrays_dimensionless.Bar_ints_set)
    def __init__(self): 
        this = _arrays_dimensionless.new_Bar()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _arrays_dimensionless.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _arrays_dimensionless.Bar_swigregister
Bar_swigregister(Bar)
cvar = _arrays_dimensionless.cvar
constglobalints = cvar.constglobalints


def arr_bool(*args):
  return _arrays_dimensionless.arr_bool(*args)
arr_bool = _arrays_dimensionless.arr_bool

def arr_char(*args):
  return _arrays_dimensionless.arr_char(*args)
arr_char = _arrays_dimensionless.arr_char

def arr_schar(*args):
  return _arrays_dimensionless.arr_schar(*args)
arr_schar = _arrays_dimensionless.arr_schar

def arr_uchar(*args):
  return _arrays_dimensionless.arr_uchar(*args)
arr_uchar = _arrays_dimensionless.arr_uchar

def arr_short(*args):
  return _arrays_dimensionless.arr_short(*args)
arr_short = _arrays_dimensionless.arr_short

def arr_ushort(*args):
  return _arrays_dimensionless.arr_ushort(*args)
arr_ushort = _arrays_dimensionless.arr_ushort

def arr_int(*args):
  return _arrays_dimensionless.arr_int(*args)
arr_int = _arrays_dimensionless.arr_int

def arr_uint(*args):
  return _arrays_dimensionless.arr_uint(*args)
arr_uint = _arrays_dimensionless.arr_uint

def arr_long(*args):
  return _arrays_dimensionless.arr_long(*args)
arr_long = _arrays_dimensionless.arr_long

def arr_ulong(*args):
  return _arrays_dimensionless.arr_ulong(*args)
arr_ulong = _arrays_dimensionless.arr_ulong

def arr_ll(*args):
  return _arrays_dimensionless.arr_ll(*args)
arr_ll = _arrays_dimensionless.arr_ll

def arr_ull(*args):
  return _arrays_dimensionless.arr_ull(*args)
arr_ull = _arrays_dimensionless.arr_ull

def arr_float(*args):
  return _arrays_dimensionless.arr_float(*args)
arr_float = _arrays_dimensionless.arr_float

def arr_double(*args):
  return _arrays_dimensionless.arr_double(*args)
arr_double = _arrays_dimensionless.arr_double

def ptr_bool(*args):
  return _arrays_dimensionless.ptr_bool(*args)
ptr_bool = _arrays_dimensionless.ptr_bool

def ptr_char(*args):
  return _arrays_dimensionless.ptr_char(*args)
ptr_char = _arrays_dimensionless.ptr_char

def ptr_schar(*args):
  return _arrays_dimensionless.ptr_schar(*args)
ptr_schar = _arrays_dimensionless.ptr_schar

def ptr_uchar(*args):
  return _arrays_dimensionless.ptr_uchar(*args)
ptr_uchar = _arrays_dimensionless.ptr_uchar

def ptr_short(*args):
  return _arrays_dimensionless.ptr_short(*args)
ptr_short = _arrays_dimensionless.ptr_short

def ptr_ushort(*args):
  return _arrays_dimensionless.ptr_ushort(*args)
ptr_ushort = _arrays_dimensionless.ptr_ushort

def ptr_int(*args):
  return _arrays_dimensionless.ptr_int(*args)
ptr_int = _arrays_dimensionless.ptr_int

def ptr_uint(*args):
  return _arrays_dimensionless.ptr_uint(*args)
ptr_uint = _arrays_dimensionless.ptr_uint

def ptr_long(*args):
  return _arrays_dimensionless.ptr_long(*args)
ptr_long = _arrays_dimensionless.ptr_long

def ptr_ulong(*args):
  return _arrays_dimensionless.ptr_ulong(*args)
ptr_ulong = _arrays_dimensionless.ptr_ulong

def ptr_ll(*args):
  return _arrays_dimensionless.ptr_ll(*args)
ptr_ll = _arrays_dimensionless.ptr_ll

def ptr_ull(*args):
  return _arrays_dimensionless.ptr_ull(*args)
ptr_ull = _arrays_dimensionless.ptr_ull

def ptr_float(*args):
  return _arrays_dimensionless.ptr_float(*args)
ptr_float = _arrays_dimensionless.ptr_float

def ptr_double(*args):
  return _arrays_dimensionless.ptr_double(*args)
ptr_double = _arrays_dimensionless.ptr_double
# This file is compatible with both classic and new-style classes.


