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
            fp, pathname, description = imp.find_module('_typemap_qualifier_strip', [dirname(__file__)])
        except ImportError:
            import _typemap_qualifier_strip
            return _typemap_qualifier_strip
        if fp is not None:
            try:
                _mod = imp.load_module('_typemap_qualifier_strip', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _typemap_qualifier_strip = swig_import_helper()
    del swig_import_helper
else:
    import _typemap_qualifier_strip
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



def create_int(*args):
  return _typemap_qualifier_strip.create_int(*args)
create_int = _typemap_qualifier_strip.create_int

def testA1(*args):
  return _typemap_qualifier_strip.testA1(*args)
testA1 = _typemap_qualifier_strip.testA1

def testA2(*args):
  return _typemap_qualifier_strip.testA2(*args)
testA2 = _typemap_qualifier_strip.testA2

def testA3(*args):
  return _typemap_qualifier_strip.testA3(*args)
testA3 = _typemap_qualifier_strip.testA3

def testA4(*args):
  return _typemap_qualifier_strip.testA4(*args)
testA4 = _typemap_qualifier_strip.testA4

def testB1(*args):
  return _typemap_qualifier_strip.testB1(*args)
testB1 = _typemap_qualifier_strip.testB1

def testB2(*args):
  return _typemap_qualifier_strip.testB2(*args)
testB2 = _typemap_qualifier_strip.testB2

def testB3(*args):
  return _typemap_qualifier_strip.testB3(*args)
testB3 = _typemap_qualifier_strip.testB3

def testB4(*args):
  return _typemap_qualifier_strip.testB4(*args)
testB4 = _typemap_qualifier_strip.testB4

def testC1(*args):
  return _typemap_qualifier_strip.testC1(*args)
testC1 = _typemap_qualifier_strip.testC1

def testC2(*args):
  return _typemap_qualifier_strip.testC2(*args)
testC2 = _typemap_qualifier_strip.testC2

def testC3(*args):
  return _typemap_qualifier_strip.testC3(*args)
testC3 = _typemap_qualifier_strip.testC3

def testC4(*args):
  return _typemap_qualifier_strip.testC4(*args)
testC4 = _typemap_qualifier_strip.testC4

def testD1(*args):
  return _typemap_qualifier_strip.testD1(*args)
testD1 = _typemap_qualifier_strip.testD1

def testD2(*args):
  return _typemap_qualifier_strip.testD2(*args)
testD2 = _typemap_qualifier_strip.testD2

def testD3(*args):
  return _typemap_qualifier_strip.testD3(*args)
testD3 = _typemap_qualifier_strip.testD3

def testD4(*args):
  return _typemap_qualifier_strip.testD4(*args)
testD4 = _typemap_qualifier_strip.testD4
# This file is compatible with both classic and new-style classes.


