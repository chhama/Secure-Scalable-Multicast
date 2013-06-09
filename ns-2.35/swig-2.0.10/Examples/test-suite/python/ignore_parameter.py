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
            fp, pathname, description = imp.find_module('_ignore_parameter', [dirname(__file__)])
        except ImportError:
            import _ignore_parameter
            return _ignore_parameter
        if fp is not None:
            try:
                _mod = imp.load_module('_ignore_parameter', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _ignore_parameter = swig_import_helper()
    del swig_import_helper
else:
    import _ignore_parameter
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



def jaguar(*args):
  return _ignore_parameter.jaguar(*args)
jaguar = _ignore_parameter.jaguar

def lotus(*args):
  return _ignore_parameter.lotus(*args)
lotus = _ignore_parameter.lotus

def tvr(*args):
  return _ignore_parameter.tvr(*args)
tvr = _ignore_parameter.tvr

def ferrari():
  return _ignore_parameter.ferrari()
ferrari = _ignore_parameter.ferrari
class SportsCars(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SportsCars, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SportsCars, name)
    __repr__ = _swig_repr
    def daimler(self, *args): return _ignore_parameter.SportsCars_daimler(self, *args)
    def astonmartin(self, *args): return _ignore_parameter.SportsCars_astonmartin(self, *args)
    def bugatti(self, *args): return _ignore_parameter.SportsCars_bugatti(self, *args)
    def lamborghini(self): return _ignore_parameter.SportsCars_lamborghini(self)
    def __init__(self): 
        this = _ignore_parameter.new_SportsCars()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _ignore_parameter.delete_SportsCars
    __del__ = lambda self : None;
SportsCars_swigregister = _ignore_parameter.SportsCars_swigregister
SportsCars_swigregister(SportsCars)

class MiniCooper(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MiniCooper, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MiniCooper, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _ignore_parameter.new_MiniCooper(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _ignore_parameter.delete_MiniCooper
    __del__ = lambda self : None;
MiniCooper_swigregister = _ignore_parameter.MiniCooper_swigregister
MiniCooper_swigregister(MiniCooper)

class MorrisMinor(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MorrisMinor, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MorrisMinor, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _ignore_parameter.new_MorrisMinor(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _ignore_parameter.delete_MorrisMinor
    __del__ = lambda self : None;
MorrisMinor_swigregister = _ignore_parameter.MorrisMinor_swigregister
MorrisMinor_swigregister(MorrisMinor)

class FordAnglia(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, FordAnglia, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, FordAnglia, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _ignore_parameter.new_FordAnglia(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _ignore_parameter.delete_FordAnglia
    __del__ = lambda self : None;
FordAnglia_swigregister = _ignore_parameter.FordAnglia_swigregister
FordAnglia_swigregister(FordAnglia)

class AustinAllegro(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, AustinAllegro, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, AustinAllegro, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _ignore_parameter.new_AustinAllegro()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _ignore_parameter.delete_AustinAllegro
    __del__ = lambda self : None;
AustinAllegro_swigregister = _ignore_parameter.AustinAllegro_swigregister
AustinAllegro_swigregister(AustinAllegro)

# This file is compatible with both classic and new-style classes.


