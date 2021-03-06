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
            fp, pathname, description = imp.find_module('_li_typemaps', [dirname(__file__)])
        except ImportError:
            import _li_typemaps
            return _li_typemaps
        if fp is not None:
            try:
                _mod = imp.load_module('_li_typemaps', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_typemaps = swig_import_helper()
    del swig_import_helper
else:
    import _li_typemaps
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
    __swig_setmethods__["a"] = _li_typemaps.Foo_a_set
    __swig_getmethods__["a"] = _li_typemaps.Foo_a_get
    if _newclass:a = _swig_property(_li_typemaps.Foo_a_get, _li_typemaps.Foo_a_set)
    def __init__(self): 
        this = _li_typemaps.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_typemaps.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _li_typemaps.Foo_swigregister
Foo_swigregister(Foo)


def in_bool(*args):
  return _li_typemaps.in_bool(*args)
in_bool = _li_typemaps.in_bool

def in_int(*args):
  return _li_typemaps.in_int(*args)
in_int = _li_typemaps.in_int

def in_long(*args):
  return _li_typemaps.in_long(*args)
in_long = _li_typemaps.in_long

def in_short(*args):
  return _li_typemaps.in_short(*args)
in_short = _li_typemaps.in_short

def in_uint(*args):
  return _li_typemaps.in_uint(*args)
in_uint = _li_typemaps.in_uint

def in_ushort(*args):
  return _li_typemaps.in_ushort(*args)
in_ushort = _li_typemaps.in_ushort

def in_ulong(*args):
  return _li_typemaps.in_ulong(*args)
in_ulong = _li_typemaps.in_ulong

def in_uchar(*args):
  return _li_typemaps.in_uchar(*args)
in_uchar = _li_typemaps.in_uchar

def in_schar(*args):
  return _li_typemaps.in_schar(*args)
in_schar = _li_typemaps.in_schar

def in_float(*args):
  return _li_typemaps.in_float(*args)
in_float = _li_typemaps.in_float

def in_double(*args):
  return _li_typemaps.in_double(*args)
in_double = _li_typemaps.in_double

def in_longlong(*args):
  return _li_typemaps.in_longlong(*args)
in_longlong = _li_typemaps.in_longlong

def in_ulonglong(*args):
  return _li_typemaps.in_ulonglong(*args)
in_ulonglong = _li_typemaps.in_ulonglong

def inr_bool(*args):
  return _li_typemaps.inr_bool(*args)
inr_bool = _li_typemaps.inr_bool

def inr_int(*args):
  return _li_typemaps.inr_int(*args)
inr_int = _li_typemaps.inr_int

def inr_long(*args):
  return _li_typemaps.inr_long(*args)
inr_long = _li_typemaps.inr_long

def inr_short(*args):
  return _li_typemaps.inr_short(*args)
inr_short = _li_typemaps.inr_short

def inr_uint(*args):
  return _li_typemaps.inr_uint(*args)
inr_uint = _li_typemaps.inr_uint

def inr_ushort(*args):
  return _li_typemaps.inr_ushort(*args)
inr_ushort = _li_typemaps.inr_ushort

def inr_ulong(*args):
  return _li_typemaps.inr_ulong(*args)
inr_ulong = _li_typemaps.inr_ulong

def inr_uchar(*args):
  return _li_typemaps.inr_uchar(*args)
inr_uchar = _li_typemaps.inr_uchar

def inr_schar(*args):
  return _li_typemaps.inr_schar(*args)
inr_schar = _li_typemaps.inr_schar

def inr_float(*args):
  return _li_typemaps.inr_float(*args)
inr_float = _li_typemaps.inr_float

def inr_double(*args):
  return _li_typemaps.inr_double(*args)
inr_double = _li_typemaps.inr_double

def inr_longlong(*args):
  return _li_typemaps.inr_longlong(*args)
inr_longlong = _li_typemaps.inr_longlong

def inr_ulonglong(*args):
  return _li_typemaps.inr_ulonglong(*args)
inr_ulonglong = _li_typemaps.inr_ulonglong

def out_bool(*args):
  return _li_typemaps.out_bool(*args)
out_bool = _li_typemaps.out_bool

def out_int(*args):
  return _li_typemaps.out_int(*args)
out_int = _li_typemaps.out_int

def out_short(*args):
  return _li_typemaps.out_short(*args)
out_short = _li_typemaps.out_short

def out_long(*args):
  return _li_typemaps.out_long(*args)
out_long = _li_typemaps.out_long

def out_uint(*args):
  return _li_typemaps.out_uint(*args)
out_uint = _li_typemaps.out_uint

def out_ushort(*args):
  return _li_typemaps.out_ushort(*args)
out_ushort = _li_typemaps.out_ushort

def out_ulong(*args):
  return _li_typemaps.out_ulong(*args)
out_ulong = _li_typemaps.out_ulong

def out_uchar(*args):
  return _li_typemaps.out_uchar(*args)
out_uchar = _li_typemaps.out_uchar

def out_schar(*args):
  return _li_typemaps.out_schar(*args)
out_schar = _li_typemaps.out_schar

def out_float(*args):
  return _li_typemaps.out_float(*args)
out_float = _li_typemaps.out_float

def out_double(*args):
  return _li_typemaps.out_double(*args)
out_double = _li_typemaps.out_double

def out_longlong(*args):
  return _li_typemaps.out_longlong(*args)
out_longlong = _li_typemaps.out_longlong

def out_ulonglong(*args):
  return _li_typemaps.out_ulonglong(*args)
out_ulonglong = _li_typemaps.out_ulonglong

def out_foo(*args):
  return _li_typemaps.out_foo(*args)
out_foo = _li_typemaps.out_foo

def outr_bool(*args):
  return _li_typemaps.outr_bool(*args)
outr_bool = _li_typemaps.outr_bool

def outr_int(*args):
  return _li_typemaps.outr_int(*args)
outr_int = _li_typemaps.outr_int

def outr_short(*args):
  return _li_typemaps.outr_short(*args)
outr_short = _li_typemaps.outr_short

def outr_long(*args):
  return _li_typemaps.outr_long(*args)
outr_long = _li_typemaps.outr_long

def outr_uint(*args):
  return _li_typemaps.outr_uint(*args)
outr_uint = _li_typemaps.outr_uint

def outr_ushort(*args):
  return _li_typemaps.outr_ushort(*args)
outr_ushort = _li_typemaps.outr_ushort

def outr_ulong(*args):
  return _li_typemaps.outr_ulong(*args)
outr_ulong = _li_typemaps.outr_ulong

def outr_uchar(*args):
  return _li_typemaps.outr_uchar(*args)
outr_uchar = _li_typemaps.outr_uchar

def outr_schar(*args):
  return _li_typemaps.outr_schar(*args)
outr_schar = _li_typemaps.outr_schar

def outr_float(*args):
  return _li_typemaps.outr_float(*args)
outr_float = _li_typemaps.outr_float

def outr_double(*args):
  return _li_typemaps.outr_double(*args)
outr_double = _li_typemaps.outr_double

def outr_longlong(*args):
  return _li_typemaps.outr_longlong(*args)
outr_longlong = _li_typemaps.outr_longlong

def outr_ulonglong(*args):
  return _li_typemaps.outr_ulonglong(*args)
outr_ulonglong = _li_typemaps.outr_ulonglong

def inout_bool(*args):
  return _li_typemaps.inout_bool(*args)
inout_bool = _li_typemaps.inout_bool

def inout_int(*args):
  return _li_typemaps.inout_int(*args)
inout_int = _li_typemaps.inout_int

def inout_short(*args):
  return _li_typemaps.inout_short(*args)
inout_short = _li_typemaps.inout_short

def inout_long(*args):
  return _li_typemaps.inout_long(*args)
inout_long = _li_typemaps.inout_long

def inout_uint(*args):
  return _li_typemaps.inout_uint(*args)
inout_uint = _li_typemaps.inout_uint

def inout_ushort(*args):
  return _li_typemaps.inout_ushort(*args)
inout_ushort = _li_typemaps.inout_ushort

def inout_ulong(*args):
  return _li_typemaps.inout_ulong(*args)
inout_ulong = _li_typemaps.inout_ulong

def inout_uchar(*args):
  return _li_typemaps.inout_uchar(*args)
inout_uchar = _li_typemaps.inout_uchar

def inout_schar(*args):
  return _li_typemaps.inout_schar(*args)
inout_schar = _li_typemaps.inout_schar

def inout_float(*args):
  return _li_typemaps.inout_float(*args)
inout_float = _li_typemaps.inout_float

def inout_double(*args):
  return _li_typemaps.inout_double(*args)
inout_double = _li_typemaps.inout_double

def inout_longlong(*args):
  return _li_typemaps.inout_longlong(*args)
inout_longlong = _li_typemaps.inout_longlong

def inout_ulonglong(*args):
  return _li_typemaps.inout_ulonglong(*args)
inout_ulonglong = _li_typemaps.inout_ulonglong

def inoutr_bool(*args):
  return _li_typemaps.inoutr_bool(*args)
inoutr_bool = _li_typemaps.inoutr_bool

def inoutr_int(*args):
  return _li_typemaps.inoutr_int(*args)
inoutr_int = _li_typemaps.inoutr_int

def inoutr_short(*args):
  return _li_typemaps.inoutr_short(*args)
inoutr_short = _li_typemaps.inoutr_short

def inoutr_long(*args):
  return _li_typemaps.inoutr_long(*args)
inoutr_long = _li_typemaps.inoutr_long

def inoutr_uint(*args):
  return _li_typemaps.inoutr_uint(*args)
inoutr_uint = _li_typemaps.inoutr_uint

def inoutr_ushort(*args):
  return _li_typemaps.inoutr_ushort(*args)
inoutr_ushort = _li_typemaps.inoutr_ushort

def inoutr_ulong(*args):
  return _li_typemaps.inoutr_ulong(*args)
inoutr_ulong = _li_typemaps.inoutr_ulong

def inoutr_uchar(*args):
  return _li_typemaps.inoutr_uchar(*args)
inoutr_uchar = _li_typemaps.inoutr_uchar

def inoutr_schar(*args):
  return _li_typemaps.inoutr_schar(*args)
inoutr_schar = _li_typemaps.inoutr_schar

def inoutr_float(*args):
  return _li_typemaps.inoutr_float(*args)
inoutr_float = _li_typemaps.inoutr_float

def inoutr_double(*args):
  return _li_typemaps.inoutr_double(*args)
inoutr_double = _li_typemaps.inoutr_double

def inoutr_longlong(*args):
  return _li_typemaps.inoutr_longlong(*args)
inoutr_longlong = _li_typemaps.inoutr_longlong

def inoutr_ulonglong(*args):
  return _li_typemaps.inoutr_ulonglong(*args)
inoutr_ulonglong = _li_typemaps.inoutr_ulonglong

def inoutr_int2(*args):
  return _li_typemaps.inoutr_int2(*args)
inoutr_int2 = _li_typemaps.inoutr_int2
# This file is compatible with both classic and new-style classes.


