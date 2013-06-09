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
            fp, pathname, description = imp.find_module('_li_cpointer', [dirname(__file__)])
        except ImportError:
            import _li_cpointer
            return _li_cpointer
        if fp is not None:
            try:
                _mod = imp.load_module('_li_cpointer', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_cpointer = swig_import_helper()
    del swig_import_helper
else:
    import _li_cpointer
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



def new_intp():
  return _li_cpointer.new_intp()
new_intp = _li_cpointer.new_intp

def copy_intp(*args):
  return _li_cpointer.copy_intp(*args)
copy_intp = _li_cpointer.copy_intp

def delete_intp(*args):
  return _li_cpointer.delete_intp(*args)
delete_intp = _li_cpointer.delete_intp

def intp_assign(*args):
  return _li_cpointer.intp_assign(*args)
intp_assign = _li_cpointer.intp_assign

def intp_value(*args):
  return _li_cpointer.intp_value(*args)
intp_value = _li_cpointer.intp_value
class doublep(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, doublep, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, doublep, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _li_cpointer.new_doublep()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_cpointer.delete_doublep
    __del__ = lambda self : None;
    def assign(self, *args): return _li_cpointer.doublep_assign(self, *args)
    def value(self): return _li_cpointer.doublep_value(self)
    def cast(self): return _li_cpointer.doublep_cast(self)
    __swig_getmethods__["frompointer"] = lambda x: _li_cpointer.doublep_frompointer
    if _newclass:frompointer = staticmethod(_li_cpointer.doublep_frompointer)
doublep_swigregister = _li_cpointer.doublep_swigregister
doublep_swigregister(doublep)

def doublep_frompointer(*args):
  return _li_cpointer.doublep_frompointer(*args)
doublep_frompointer = _li_cpointer.doublep_frompointer


def int_to_uint(*args):
  return _li_cpointer.int_to_uint(*args)
int_to_uint = _li_cpointer.int_to_uint
# This file is compatible with both classic and new-style classes.

