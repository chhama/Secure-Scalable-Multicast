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
            fp, pathname, description = imp.find_module('_namespace_typemap', [dirname(__file__)])
        except ImportError:
            import _namespace_typemap
            return _namespace_typemap
        if fp is not None:
            try:
                _mod = imp.load_module('_namespace_typemap', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _namespace_typemap = swig_import_helper()
    del swig_import_helper
else:
    import _namespace_typemap
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



def stest1(*args):
  return _namespace_typemap.stest1(*args)
stest1 = _namespace_typemap.stest1

def ctest1(*args):
  return _namespace_typemap.ctest1(*args)
ctest1 = _namespace_typemap.ctest1

def stest2(*args):
  return _namespace_typemap.stest2(*args)
stest2 = _namespace_typemap.stest2

def ctest2(*args):
  return _namespace_typemap.ctest2(*args)
ctest2 = _namespace_typemap.ctest2

def stest3(*args):
  return _namespace_typemap.stest3(*args)
stest3 = _namespace_typemap.stest3

def ctest3(*args):
  return _namespace_typemap.ctest3(*args)
ctest3 = _namespace_typemap.ctest3

def stest4(*args):
  return _namespace_typemap.stest4(*args)
stest4 = _namespace_typemap.stest4

def ctest4(*args):
  return _namespace_typemap.ctest4(*args)
ctest4 = _namespace_typemap.ctest4

def stest5(*args):
  return _namespace_typemap.stest5(*args)
stest5 = _namespace_typemap.stest5

def ctest5(*args):
  return _namespace_typemap.ctest5(*args)
ctest5 = _namespace_typemap.ctest5

def stest6(*args):
  return _namespace_typemap.stest6(*args)
stest6 = _namespace_typemap.stest6

def ctest6(*args):
  return _namespace_typemap.ctest6(*args)
ctest6 = _namespace_typemap.ctest6

def stest7(*args):
  return _namespace_typemap.stest7(*args)
stest7 = _namespace_typemap.stest7

def ctest7(*args):
  return _namespace_typemap.ctest7(*args)
ctest7 = _namespace_typemap.ctest7

def stest8(*args):
  return _namespace_typemap.stest8(*args)
stest8 = _namespace_typemap.stest8

def ctest8(*args):
  return _namespace_typemap.ctest8(*args)
ctest8 = _namespace_typemap.ctest8

def stest9(*args):
  return _namespace_typemap.stest9(*args)
stest9 = _namespace_typemap.stest9

def ctest9(*args):
  return _namespace_typemap.ctest9(*args)
ctest9 = _namespace_typemap.ctest9

def stest10(*args):
  return _namespace_typemap.stest10(*args)
stest10 = _namespace_typemap.stest10

def ctest10(*args):
  return _namespace_typemap.ctest10(*args)
ctest10 = _namespace_typemap.ctest10

def stest11(*args):
  return _namespace_typemap.stest11(*args)
stest11 = _namespace_typemap.stest11

def ctest11(*args):
  return _namespace_typemap.ctest11(*args)
ctest11 = _namespace_typemap.ctest11

def stest12(*args):
  return _namespace_typemap.stest12(*args)
stest12 = _namespace_typemap.stest12

def ctest12(*args):
  return _namespace_typemap.ctest12(*args)
ctest12 = _namespace_typemap.ctest12

def ttest1(*args):
  return _namespace_typemap.ttest1(*args)
ttest1 = _namespace_typemap.ttest1
# This file is compatible with both classic and new-style classes.


