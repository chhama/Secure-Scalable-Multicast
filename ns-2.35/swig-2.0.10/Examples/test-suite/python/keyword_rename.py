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
            fp, pathname, description = imp.find_module('_keyword_rename', [dirname(__file__)])
        except ImportError:
            import _keyword_rename
            return _keyword_rename
        if fp is not None:
            try:
                _mod = imp.load_module('_keyword_rename', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _keyword_rename = swig_import_helper()
    del swig_import_helper
else:
    import _keyword_rename
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



def _in(*args):
  return _keyword_rename._in(*args)
_in = _keyword_rename._in

def _except(*args):
  return _keyword_rename._except(*args)
_except = _keyword_rename._except

def _pass(*args):
  return _keyword_rename._pass(*args)
_pass = _keyword_rename._pass

def tie(*args):
  return _keyword_rename.tie(*args)
tie = _keyword_rename.tie

def use(*args):
  return _keyword_rename.use(*args)
use = _keyword_rename.use

def implements(*args):
  return _keyword_rename.implements(*args)
implements = _keyword_rename.implements

def synchronized(*args):
  return _keyword_rename.synchronized(*args)
synchronized = _keyword_rename.synchronized

def string(*args):
  return _keyword_rename.string(*args)
string = _keyword_rename.string
class sealed(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, sealed, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, sealed, name)
    __repr__ = _swig_repr
    __swig_setmethods__["i"] = _keyword_rename.sealed_i_set
    __swig_getmethods__["i"] = _keyword_rename.sealed_i_get
    if _newclass:i = _swig_property(_keyword_rename.sealed_i_get, _keyword_rename.sealed_i_set)
    def __init__(self): 
        this = _keyword_rename.new_sealed()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _keyword_rename.delete_sealed
    __del__ = lambda self : None;
sealed_swigregister = _keyword_rename.sealed_swigregister
sealed_swigregister(sealed)


def go(*args):
  return _keyword_rename.go(*args)
go = _keyword_rename.go

def chan(*args):
  return _keyword_rename.chan(*args)
chan = _keyword_rename.chan
# This file is compatible with both classic and new-style classes.

