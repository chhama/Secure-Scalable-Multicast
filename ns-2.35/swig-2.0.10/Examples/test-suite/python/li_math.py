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
            fp, pathname, description = imp.find_module('_li_math', [dirname(__file__)])
        except ImportError:
            import _li_math
            return _li_math
        if fp is not None:
            try:
                _mod = imp.load_module('_li_math', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_math = swig_import_helper()
    del swig_import_helper
else:
    import _li_math
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



def cos(*args):
  return _li_math.cos(*args)
cos = _li_math.cos

def sin(*args):
  return _li_math.sin(*args)
sin = _li_math.sin

def tan(*args):
  return _li_math.tan(*args)
tan = _li_math.tan

def acos(*args):
  return _li_math.acos(*args)
acos = _li_math.acos

def asin(*args):
  return _li_math.asin(*args)
asin = _li_math.asin

def atan(*args):
  return _li_math.atan(*args)
atan = _li_math.atan

def atan2(*args):
  return _li_math.atan2(*args)
atan2 = _li_math.atan2

def cosh(*args):
  return _li_math.cosh(*args)
cosh = _li_math.cosh

def sinh(*args):
  return _li_math.sinh(*args)
sinh = _li_math.sinh

def tanh(*args):
  return _li_math.tanh(*args)
tanh = _li_math.tanh

def exp(*args):
  return _li_math.exp(*args)
exp = _li_math.exp

def log(*args):
  return _li_math.log(*args)
log = _li_math.log

def log10(*args):
  return _li_math.log10(*args)
log10 = _li_math.log10

def pow(*args):
  return _li_math.pow(*args)
pow = _li_math.pow

def sqrt(*args):
  return _li_math.sqrt(*args)
sqrt = _li_math.sqrt

def fabs(*args):
  return _li_math.fabs(*args)
fabs = _li_math.fabs

def ceil(*args):
  return _li_math.ceil(*args)
ceil = _li_math.ceil

def floor(*args):
  return _li_math.floor(*args)
floor = _li_math.floor

def fmod(*args):
  return _li_math.fmod(*args)
fmod = _li_math.fmod
M_E = _li_math.M_E
M_LOG2E = _li_math.M_LOG2E
M_LOG10E = _li_math.M_LOG10E
M_LN2 = _li_math.M_LN2
M_LN10 = _li_math.M_LN10
M_PI = _li_math.M_PI
M_PI_2 = _li_math.M_PI_2
M_PI_4 = _li_math.M_PI_4
M_1_PI = _li_math.M_1_PI
M_2_PI = _li_math.M_2_PI
M_2_SQRTPI = _li_math.M_2_SQRTPI
M_SQRT2 = _li_math.M_SQRT2
M_SQRT1_2 = _li_math.M_SQRT1_2
# This file is compatible with both classic and new-style classes.


