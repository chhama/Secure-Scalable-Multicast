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
            fp, pathname, description = imp.find_module('_primitive_ref', [dirname(__file__)])
        except ImportError:
            import _primitive_ref
            return _primitive_ref
        if fp is not None:
            try:
                _mod = imp.load_module('_primitive_ref', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _primitive_ref = swig_import_helper()
    del swig_import_helper
else:
    import _primitive_ref
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



def ref_int(*args):
  return _primitive_ref.ref_int(*args)
ref_int = _primitive_ref.ref_int

def ref_uint(*args):
  return _primitive_ref.ref_uint(*args)
ref_uint = _primitive_ref.ref_uint

def ref_short(*args):
  return _primitive_ref.ref_short(*args)
ref_short = _primitive_ref.ref_short

def ref_ushort(*args):
  return _primitive_ref.ref_ushort(*args)
ref_ushort = _primitive_ref.ref_ushort

def ref_long(*args):
  return _primitive_ref.ref_long(*args)
ref_long = _primitive_ref.ref_long

def ref_ulong(*args):
  return _primitive_ref.ref_ulong(*args)
ref_ulong = _primitive_ref.ref_ulong

def ref_schar(*args):
  return _primitive_ref.ref_schar(*args)
ref_schar = _primitive_ref.ref_schar

def ref_uchar(*args):
  return _primitive_ref.ref_uchar(*args)
ref_uchar = _primitive_ref.ref_uchar

def ref_char(*args):
  return _primitive_ref.ref_char(*args)
ref_char = _primitive_ref.ref_char

def ref_float(*args):
  return _primitive_ref.ref_float(*args)
ref_float = _primitive_ref.ref_float

def ref_double(*args):
  return _primitive_ref.ref_double(*args)
ref_double = _primitive_ref.ref_double

def ref_bool(*args):
  return _primitive_ref.ref_bool(*args)
ref_bool = _primitive_ref.ref_bool

def ref_longlong(*args):
  return _primitive_ref.ref_longlong(*args)
ref_longlong = _primitive_ref.ref_longlong

def ref_ulonglong(*args):
  return _primitive_ref.ref_ulonglong(*args)
ref_ulonglong = _primitive_ref.ref_ulonglong
class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    __swig_setmethods__["v"] = _primitive_ref.A_v_set
    __swig_getmethods__["v"] = _primitive_ref.A_v_get
    if _newclass:v = _swig_property(_primitive_ref.A_v_get, _primitive_ref.A_v_set)
    def __init__(self, *args): 
        this = _primitive_ref.new_A(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _primitive_ref.delete_A
    __del__ = lambda self : None;
A_swigregister = _primitive_ref.A_swigregister
A_swigregister(A)


def ref_over(*args):
  return _primitive_ref.ref_over(*args)
ref_over = _primitive_ref.ref_over
# This file is compatible with both classic and new-style classes.


