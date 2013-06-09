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
            fp, pathname, description = imp.find_module('_preproc', [dirname(__file__)])
        except ImportError:
            import _preproc
            return _preproc
        if fp is not None:
            try:
                _mod = imp.load_module('_preproc', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _preproc = swig_import_helper()
    del swig_import_helper
else:
    import _preproc
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


SLASHSLASH = _preproc.SLASHSLASH

def hello0():
  return _preproc.hello0()
hello0 = _preproc.hello0

def hello1():
  return _preproc.hello1()
hello1 = _preproc.hello1

def hello2():
  return _preproc.hello2()
hello2 = _preproc.hello2

def f(*args):
  return _preproc.f(*args)
f = _preproc.f
a5 = _preproc.a5
b5 = _preproc.b5
c5 = _preproc.c5
d5 = _preproc.d5
C1 = _preproc.C1
ALONG_NAME = _preproc.ALONG_NAME
C4 = _preproc.C4
a6 = _preproc.a6
b6 = _preproc.b6
c6 = _preproc.c6
d6 = _preproc.d6
class EmbeddedDefines(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, EmbeddedDefines, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, EmbeddedDefines, name)
    __repr__ = _swig_repr
    __swig_setmethods__["dummy"] = _preproc.EmbeddedDefines_dummy_set
    __swig_getmethods__["dummy"] = _preproc.EmbeddedDefines_dummy_get
    if _newclass:dummy = _swig_property(_preproc.EmbeddedDefines_dummy_get, _preproc.EmbeddedDefines_dummy_set)
    def __init__(self): 
        this = _preproc.new_EmbeddedDefines()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _preproc.delete_EmbeddedDefines
    __del__ = lambda self : None;
EmbeddedDefines_swigregister = _preproc.EmbeddedDefines_swigregister
EmbeddedDefines_swigregister(EmbeddedDefines)
EMBEDDED_DEFINE = _preproc.EMBEDDED_DEFINE
EMBEDDED_SWIG_CONSTANT = _preproc.EMBEDDED_SWIG_CONSTANT

A1 = _preproc.A1
A2 = _preproc.A2
A3 = _preproc.A3
A4 = _preproc.A4
A5 = _preproc.A5
A6 = _preproc.A6
A7 = _preproc.A7
A8 = _preproc.A8
A9 = _preproc.A9
A10 = _preproc.A10
A11 = _preproc.A11
A12 = _preproc.A12
A13 = _preproc.A13
__GMP_HAVE_CONST = _preproc.__GMP_HAVE_CONST
__GMP_HAVE_PROTOTYPES = _preproc.__GMP_HAVE_PROTOTYPES
__GMP_HAVE_TOKEN_PASTE = _preproc.__GMP_HAVE_TOKEN_PASTE
ONE = _preproc.ONE
one = _preproc.one
two = _preproc.two
three = _preproc.three

def test(*args):
  return _preproc.test(*args)
test = _preproc.test
SOME_MASK_DEF = _preproc.SOME_MASK_DEF
BOLTZMANN = _preproc.BOLTZMANN
AVOGADRO = _preproc.AVOGADRO
RGAS = _preproc.RGAS
RGASX = _preproc.RGASX
class TypeNameTraits(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TypeNameTraits, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TypeNameTraits, name)
    __repr__ = _swig_repr
    __swig_setmethods__["val"] = _preproc.TypeNameTraits_val_set
    __swig_getmethods__["val"] = _preproc.TypeNameTraits_val_get
    if _newclass:val = _swig_property(_preproc.TypeNameTraits_val_get, _preproc.TypeNameTraits_val_set)
    def __init__(self): 
        this = _preproc.new_TypeNameTraits()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _preproc.delete_TypeNameTraits
    __del__ = lambda self : None;
TypeNameTraits_swigregister = _preproc.TypeNameTraits_swigregister
TypeNameTraits_swigregister(TypeNameTraits)
cvar = _preproc.cvar
endif = cvar.endif
define = cvar.define
defined = cvar.defined


def method(*args):
  return _preproc.method(*args)
method = _preproc.method
# This file is compatible with both classic and new-style classes.

