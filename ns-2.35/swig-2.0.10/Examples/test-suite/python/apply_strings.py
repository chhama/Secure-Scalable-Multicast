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
            fp, pathname, description = imp.find_module('_apply_strings', [dirname(__file__)])
        except ImportError:
            import _apply_strings
            return _apply_strings
        if fp is not None:
            try:
                _mod = imp.load_module('_apply_strings', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _apply_strings = swig_import_helper()
    del swig_import_helper
else:
    import _apply_strings
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


try:
    import weakref
    weakref_proxy = weakref.proxy
except:
    weakref_proxy = lambda x: x



def UCharFunction(*args):
  return _apply_strings.UCharFunction(*args)
UCharFunction = _apply_strings.UCharFunction

def SCharFunction(*args):
  return _apply_strings.SCharFunction(*args)
SCharFunction = _apply_strings.SCharFunction

def CUCharFunction(*args):
  return _apply_strings.CUCharFunction(*args)
CUCharFunction = _apply_strings.CUCharFunction

def CSCharFunction(*args):
  return _apply_strings.CSCharFunction(*args)
CSCharFunction = _apply_strings.CSCharFunction

def CharFunction(*args):
  return _apply_strings.CharFunction(*args)
CharFunction = _apply_strings.CharFunction

def CCharFunction(*args):
  return _apply_strings.CCharFunction(*args)
CCharFunction = _apply_strings.CCharFunction
class TNumber(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TNumber, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TNumber, name)
    __repr__ = _swig_repr
    __swig_setmethods__["DigitsMemberA"] = _apply_strings.TNumber_DigitsMemberA_set
    __swig_getmethods__["DigitsMemberA"] = _apply_strings.TNumber_DigitsMemberA_get
    if _newclass:DigitsMemberA = _swig_property(_apply_strings.TNumber_DigitsMemberA_get, _apply_strings.TNumber_DigitsMemberA_set)
    __swig_setmethods__["DigitsMemberB"] = _apply_strings.TNumber_DigitsMemberB_set
    __swig_getmethods__["DigitsMemberB"] = _apply_strings.TNumber_DigitsMemberB_get
    if _newclass:DigitsMemberB = _swig_property(_apply_strings.TNumber_DigitsMemberB_get, _apply_strings.TNumber_DigitsMemberB_set)
    def __init__(self): 
        this = _apply_strings.new_TNumber()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _apply_strings.delete_TNumber
    __del__ = lambda self : None;
TNumber_swigregister = _apply_strings.TNumber_swigregister
TNumber_swigregister(TNumber)

class DirectorTest(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DirectorTest, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DirectorTest, name)
    __repr__ = _swig_repr
    def UCharFunction(self, *args): return _apply_strings.DirectorTest_UCharFunction(self, *args)
    def SCharFunction(self, *args): return _apply_strings.DirectorTest_SCharFunction(self, *args)
    def CUCharFunction(self, *args): return _apply_strings.DirectorTest_CUCharFunction(self, *args)
    def CSCharFunction(self, *args): return _apply_strings.DirectorTest_CSCharFunction(self, *args)
    def CharFunction(self, *args): return _apply_strings.DirectorTest_CharFunction(self, *args)
    def CCharFunction(self, *args): return _apply_strings.DirectorTest_CCharFunction(self, *args)
    __swig_destroy__ = _apply_strings.delete_DirectorTest
    __del__ = lambda self : None;
    def __init__(self): 
        if self.__class__ == DirectorTest:
            _self = None
        else:
            _self = self
        this = _apply_strings.new_DirectorTest(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _apply_strings.disown_DirectorTest(self)
        return weakref_proxy(self)
DirectorTest_swigregister = _apply_strings.DirectorTest_swigregister
DirectorTest_swigregister(DirectorTest)
cvar = _apply_strings.cvar

# This file is compatible with both classic and new-style classes.


