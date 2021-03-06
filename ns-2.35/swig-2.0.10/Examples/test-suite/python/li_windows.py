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
            fp, pathname, description = imp.find_module('_li_windows', [dirname(__file__)])
        except ImportError:
            import _li_windows
            return _li_windows
        if fp is not None:
            try:
                _mod = imp.load_module('_li_windows', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_windows = swig_import_helper()
    del swig_import_helper
else:
    import _li_windows
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



def int8_val(*args):
  return _li_windows.int8_val(*args)
int8_val = _li_windows.int8_val

def int16_val(*args):
  return _li_windows.int16_val(*args)
int16_val = _li_windows.int16_val

def int32_val(*args):
  return _li_windows.int32_val(*args)
int32_val = _li_windows.int32_val

def int64_val(*args):
  return _li_windows.int64_val(*args)
int64_val = _li_windows.int64_val

def uint8_val(*args):
  return _li_windows.uint8_val(*args)
uint8_val = _li_windows.uint8_val

def uint16_val(*args):
  return _li_windows.uint16_val(*args)
uint16_val = _li_windows.uint16_val

def uint32_val(*args):
  return _li_windows.uint32_val(*args)
uint32_val = _li_windows.uint32_val

def uint64_val(*args):
  return _li_windows.uint64_val(*args)
uint64_val = _li_windows.uint64_val

def int8_ref(*args):
  return _li_windows.int8_ref(*args)
int8_ref = _li_windows.int8_ref

def int16_ref(*args):
  return _li_windows.int16_ref(*args)
int16_ref = _li_windows.int16_ref

def int32_ref(*args):
  return _li_windows.int32_ref(*args)
int32_ref = _li_windows.int32_ref

def int64_ref(*args):
  return _li_windows.int64_ref(*args)
int64_ref = _li_windows.int64_ref

def uint8_ref(*args):
  return _li_windows.uint8_ref(*args)
uint8_ref = _li_windows.uint8_ref

def uint16_ref(*args):
  return _li_windows.uint16_ref(*args)
uint16_ref = _li_windows.uint16_ref

def uint32_ref(*args):
  return _li_windows.uint32_ref(*args)
uint32_ref = _li_windows.uint32_ref

def uint64_ref(*args):
  return _li_windows.uint64_ref(*args)
uint64_ref = _li_windows.uint64_ref
class WindowsInts(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, WindowsInts, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, WindowsInts, name)
    __repr__ = _swig_repr
    __swig_setmethods__["int8_member"] = _li_windows.WindowsInts_int8_member_set
    __swig_getmethods__["int8_member"] = _li_windows.WindowsInts_int8_member_get
    if _newclass:int8_member = _swig_property(_li_windows.WindowsInts_int8_member_get, _li_windows.WindowsInts_int8_member_set)
    __swig_setmethods__["int16_member"] = _li_windows.WindowsInts_int16_member_set
    __swig_getmethods__["int16_member"] = _li_windows.WindowsInts_int16_member_get
    if _newclass:int16_member = _swig_property(_li_windows.WindowsInts_int16_member_get, _li_windows.WindowsInts_int16_member_set)
    __swig_setmethods__["int32_member"] = _li_windows.WindowsInts_int32_member_set
    __swig_getmethods__["int32_member"] = _li_windows.WindowsInts_int32_member_get
    if _newclass:int32_member = _swig_property(_li_windows.WindowsInts_int32_member_get, _li_windows.WindowsInts_int32_member_set)
    __swig_setmethods__["int64_member"] = _li_windows.WindowsInts_int64_member_set
    __swig_getmethods__["int64_member"] = _li_windows.WindowsInts_int64_member_get
    if _newclass:int64_member = _swig_property(_li_windows.WindowsInts_int64_member_get, _li_windows.WindowsInts_int64_member_set)
    __swig_setmethods__["uint8_member"] = _li_windows.WindowsInts_uint8_member_set
    __swig_getmethods__["uint8_member"] = _li_windows.WindowsInts_uint8_member_get
    if _newclass:uint8_member = _swig_property(_li_windows.WindowsInts_uint8_member_get, _li_windows.WindowsInts_uint8_member_set)
    __swig_setmethods__["uint16_member"] = _li_windows.WindowsInts_uint16_member_set
    __swig_getmethods__["uint16_member"] = _li_windows.WindowsInts_uint16_member_get
    if _newclass:uint16_member = _swig_property(_li_windows.WindowsInts_uint16_member_get, _li_windows.WindowsInts_uint16_member_set)
    __swig_setmethods__["uint32_member"] = _li_windows.WindowsInts_uint32_member_set
    __swig_getmethods__["uint32_member"] = _li_windows.WindowsInts_uint32_member_get
    if _newclass:uint32_member = _swig_property(_li_windows.WindowsInts_uint32_member_get, _li_windows.WindowsInts_uint32_member_set)
    __swig_setmethods__["uint64_member"] = _li_windows.WindowsInts_uint64_member_set
    __swig_getmethods__["uint64_member"] = _li_windows.WindowsInts_uint64_member_get
    if _newclass:uint64_member = _swig_property(_li_windows.WindowsInts_uint64_member_get, _li_windows.WindowsInts_uint64_member_set)
    def __init__(self): 
        this = _li_windows.new_WindowsInts()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_windows.delete_WindowsInts
    __del__ = lambda self : None;
WindowsInts_swigregister = _li_windows.WindowsInts_swigregister
WindowsInts_swigregister(WindowsInts)
cvar = _li_windows.cvar


def int8_td(*args):
  return _li_windows.int8_td(*args)
int8_td = _li_windows.int8_td

def int16_td(*args):
  return _li_windows.int16_td(*args)
int16_td = _li_windows.int16_td

def int32_td(*args):
  return _li_windows.int32_td(*args)
int32_td = _li_windows.int32_td

def int64_td(*args):
  return _li_windows.int64_td(*args)
int64_td = _li_windows.int64_td

def uint8_td(*args):
  return _li_windows.uint8_td(*args)
uint8_td = _li_windows.uint8_td

def uint16_td(*args):
  return _li_windows.uint16_td(*args)
uint16_td = _li_windows.uint16_td

def uint32_td(*args):
  return _li_windows.uint32_td(*args)
uint32_td = _li_windows.uint32_td

def uint64_td(*args):
  return _li_windows.uint64_td(*args)
uint64_td = _li_windows.uint64_td

def declspecstdcall(*args):
  return _li_windows.declspecstdcall(*args)
declspecstdcall = _li_windows.declspecstdcall

def mefod(*args):
  return _li_windows.mefod(*args)
mefod = _li_windows.mefod

def funktion(*args):
  return _li_windows.funktion(*args)
funktion = _li_windows.funktion
# This file is compatible with both classic and new-style classes.


