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
            fp, pathname, description = imp.find_module('_long_long', [dirname(__file__)])
        except ImportError:
            import _long_long
            return _long_long
        if fp is not None:
            try:
                _mod = imp.load_module('_long_long', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _long_long = swig_import_helper()
    del swig_import_helper
else:
    import _long_long
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



def foo1(*args):
  return _long_long.foo1(*args)
foo1 = _long_long.foo1

def foo2(*args):
  return _long_long.foo2(*args)
foo2 = _long_long.foo2

def foo3(*args):
  return _long_long.foo3(*args)
foo3 = _long_long.foo3

def foo4(*args):
  return _long_long.foo4(*args)
foo4 = _long_long.foo4

def foo5(*args):
  return _long_long.foo5(*args)
foo5 = _long_long.foo5

def foo6(*args):
  return _long_long.foo6(*args)
foo6 = _long_long.foo6

def bar1():
  return _long_long.bar1()
bar1 = _long_long.bar1

def bar2():
  return _long_long.bar2()
bar2 = _long_long.bar2

def bar3():
  return _long_long.bar3()
bar3 = _long_long.bar3

def bar4():
  return _long_long.bar4()
bar4 = _long_long.bar4

def bar5():
  return _long_long.bar5()
bar5 = _long_long.bar5

def bar6():
  return _long_long.bar6()
bar6 = _long_long.bar6
lconst1 = _long_long.lconst1
lconst2 = _long_long.lconst2
lconst3 = _long_long.lconst3
lconst4 = _long_long.lconst4
lconst5 = _long_long.lconst5
lconst6 = _long_long.lconst6
# This file is compatible with both classic and new-style classes.

cvar = _long_long.cvar

