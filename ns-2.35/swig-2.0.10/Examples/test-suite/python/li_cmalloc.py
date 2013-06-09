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
            fp, pathname, description = imp.find_module('_li_cmalloc', [dirname(__file__)])
        except ImportError:
            import _li_cmalloc
            return _li_cmalloc
        if fp is not None:
            try:
                _mod = imp.load_module('_li_cmalloc', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_cmalloc = swig_import_helper()
    del swig_import_helper
else:
    import _li_cmalloc
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



def malloc_int(*args):
  return _li_cmalloc.malloc_int(*args)
malloc_int = _li_cmalloc.malloc_int

def calloc_int(*args):
  return _li_cmalloc.calloc_int(*args)
calloc_int = _li_cmalloc.calloc_int

def realloc_int(*args):
  return _li_cmalloc.realloc_int(*args)
realloc_int = _li_cmalloc.realloc_int

def free_int(*args):
  return _li_cmalloc.free_int(*args)
free_int = _li_cmalloc.free_int
sizeof_int = _li_cmalloc.sizeof_int

def malloc_double(*args):
  return _li_cmalloc.malloc_double(*args)
malloc_double = _li_cmalloc.malloc_double

def calloc_double(*args):
  return _li_cmalloc.calloc_double(*args)
calloc_double = _li_cmalloc.calloc_double

def realloc_double(*args):
  return _li_cmalloc.realloc_double(*args)
realloc_double = _li_cmalloc.realloc_double

def free_double(*args):
  return _li_cmalloc.free_double(*args)
free_double = _li_cmalloc.free_double
sizeof_double = _li_cmalloc.sizeof_double

def malloc_void(*args):
  return _li_cmalloc.malloc_void(*args)
malloc_void = _li_cmalloc.malloc_void

def calloc_void(*args):
  return _li_cmalloc.calloc_void(*args)
calloc_void = _li_cmalloc.calloc_void

def realloc_void(*args):
  return _li_cmalloc.realloc_void(*args)
realloc_void = _li_cmalloc.realloc_void

def free_void(*args):
  return _li_cmalloc.free_void(*args)
free_void = _li_cmalloc.free_void

def malloc_intp(*args):
  return _li_cmalloc.malloc_intp(*args)
malloc_intp = _li_cmalloc.malloc_intp

def calloc_intp(*args):
  return _li_cmalloc.calloc_intp(*args)
calloc_intp = _li_cmalloc.calloc_intp

def realloc_intp(*args):
  return _li_cmalloc.realloc_intp(*args)
realloc_intp = _li_cmalloc.realloc_intp

def free_intp(*args):
  return _li_cmalloc.free_intp(*args)
free_intp = _li_cmalloc.free_intp
sizeof_intp = _li_cmalloc.sizeof_intp
# This file is compatible with both classic and new-style classes.

