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
            fp, pathname, description = imp.find_module('_long_long_apply', [dirname(__file__)])
        except ImportError:
            import _long_long_apply
            return _long_long_apply
        if fp is not None:
            try:
                _mod = imp.load_module('_long_long_apply', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _long_long_apply = swig_import_helper()
    del swig_import_helper
else:
    import _long_long_apply
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



def value1(*args):
  return _long_long_apply.value1(*args)
value1 = _long_long_apply.value1

def value2(*args):
  return _long_long_apply.value2(*args)
value2 = _long_long_apply.value2

def ref1(*args):
  return _long_long_apply.ref1(*args)
ref1 = _long_long_apply.ref1

def ref2(*args):
  return _long_long_apply.ref2(*args)
ref2 = _long_long_apply.ref2

def in_longlong(*args):
  return _long_long_apply.in_longlong(*args)
in_longlong = _long_long_apply.in_longlong

def in_ulonglong(*args):
  return _long_long_apply.in_ulonglong(*args)
in_ulonglong = _long_long_apply.in_ulonglong

def inr_longlong(*args):
  return _long_long_apply.inr_longlong(*args)
inr_longlong = _long_long_apply.inr_longlong

def inr_ulonglong(*args):
  return _long_long_apply.inr_ulonglong(*args)
inr_ulonglong = _long_long_apply.inr_ulonglong

def out_longlong(*args):
  return _long_long_apply.out_longlong(*args)
out_longlong = _long_long_apply.out_longlong

def out_ulonglong(*args):
  return _long_long_apply.out_ulonglong(*args)
out_ulonglong = _long_long_apply.out_ulonglong

def outr_longlong(*args):
  return _long_long_apply.outr_longlong(*args)
outr_longlong = _long_long_apply.outr_longlong

def outr_ulonglong(*args):
  return _long_long_apply.outr_ulonglong(*args)
outr_ulonglong = _long_long_apply.outr_ulonglong

def inout_longlong(*args):
  return _long_long_apply.inout_longlong(*args)
inout_longlong = _long_long_apply.inout_longlong

def inout_ulonglong(*args):
  return _long_long_apply.inout_ulonglong(*args)
inout_ulonglong = _long_long_apply.inout_ulonglong

def inoutr_longlong(*args):
  return _long_long_apply.inoutr_longlong(*args)
inoutr_longlong = _long_long_apply.inoutr_longlong

def inoutr_ulonglong(*args):
  return _long_long_apply.inoutr_ulonglong(*args)
inoutr_ulonglong = _long_long_apply.inoutr_ulonglong
# This file is compatible with both classic and new-style classes.

cvar = _long_long_apply.cvar
global_ref1 = cvar.global_ref1
global_ref2 = cvar.global_ref2

