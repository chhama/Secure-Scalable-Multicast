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
            fp, pathname, description = imp.find_module('_enums', [dirname(__file__)])
        except ImportError:
            import _enums
            return _enums
        if fp is not None:
            try:
                _mod = imp.load_module('_enums', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _enums = swig_import_helper()
    del swig_import_helper
else:
    import _enums
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


CSP_ITERATION_FWD = _enums.CSP_ITERATION_FWD
CSP_ITERATION_BWD = _enums.CSP_ITERATION_BWD
ABCDE = _enums.ABCDE
FGHJI = _enums.FGHJI

def bar1(*args):
  return _enums.bar1(*args)
bar1 = _enums.bar1

def bar2(*args):
  return _enums.bar2(*args)
bar2 = _enums.bar2

def bar3(*args):
  return _enums.bar3(*args)
bar3 = _enums.bar3
boo = _enums.boo
hoo = _enums.hoo
globalinstance1 = _enums.globalinstance1
globalinstance2 = _enums.globalinstance2
globalinstance3 = _enums.globalinstance3
AnonEnum1 = _enums.AnonEnum1
AnonEnum2 = _enums.AnonEnum2
class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_setmethods__["e"] = _enums.Foo_e_set
    __swig_getmethods__["e"] = _enums.Foo_e_get
    if _newclass:e = _swig_property(_enums.Foo_e_get, _enums.Foo_e_set)
    def __init__(self): 
        this = _enums.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _enums.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _enums.Foo_swigregister
Foo_swigregister(Foo)
cvar = _enums.cvar
BAR1 = _enums.BAR1
BAR2 = _enums.BAR2

class iFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, iFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, iFoo, name)
    __repr__ = _swig_repr
    __swig_setmethods__["e"] = _enums.iFoo_e_set
    __swig_getmethods__["e"] = _enums.iFoo_e_get
    if _newclass:e = _swig_property(_enums.iFoo_e_get, _enums.iFoo_e_set)
    def __init__(self): 
        this = _enums.new_iFoo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _enums.delete_iFoo
    __del__ = lambda self : None;
iFoo_swigregister = _enums.iFoo_swigregister
iFoo_swigregister(iFoo)
Phoo = _enums.Phoo
Char = _enums.Char

goodness = _enums.goodness
gracious = _enums.gracious
me = _enums.me
slap = _enums.slap
mine = _enums.mine
thigh = _enums.thigh
# This file is compatible with both classic and new-style classes.

