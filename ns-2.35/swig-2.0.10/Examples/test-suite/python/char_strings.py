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
            fp, pathname, description = imp.find_module('_char_strings', [dirname(__file__)])
        except ImportError:
            import _char_strings
            return _char_strings
        if fp is not None:
            try:
                _mod = imp.load_module('_char_strings', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _char_strings = swig_import_helper()
    del swig_import_helper
else:
    import _char_strings
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



def GetCharHeapString():
  return _char_strings.GetCharHeapString()
GetCharHeapString = _char_strings.GetCharHeapString

def GetConstCharProgramCodeString():
  return _char_strings.GetConstCharProgramCodeString()
GetConstCharProgramCodeString = _char_strings.GetConstCharProgramCodeString

def DeleteCharHeapString():
  return _char_strings.DeleteCharHeapString()
DeleteCharHeapString = _char_strings.DeleteCharHeapString

def GetCharStaticString():
  return _char_strings.GetCharStaticString()
GetCharStaticString = _char_strings.GetCharStaticString

def GetCharStaticStringFixed():
  return _char_strings.GetCharStaticStringFixed()
GetCharStaticStringFixed = _char_strings.GetCharStaticStringFixed

def GetConstCharStaticStringFixed():
  return _char_strings.GetConstCharStaticStringFixed()
GetConstCharStaticStringFixed = _char_strings.GetConstCharStaticStringFixed

def SetCharHeapString(*args):
  return _char_strings.SetCharHeapString(*args)
SetCharHeapString = _char_strings.SetCharHeapString

def SetCharStaticString(*args):
  return _char_strings.SetCharStaticString(*args)
SetCharStaticString = _char_strings.SetCharStaticString

def SetCharArrayStaticString(*args):
  return _char_strings.SetCharArrayStaticString(*args)
SetCharArrayStaticString = _char_strings.SetCharArrayStaticString

def SetConstCharHeapString(*args):
  return _char_strings.SetConstCharHeapString(*args)
SetConstCharHeapString = _char_strings.SetConstCharHeapString

def SetConstCharStaticString(*args):
  return _char_strings.SetConstCharStaticString(*args)
SetConstCharStaticString = _char_strings.SetConstCharStaticString

def SetConstCharArrayStaticString(*args):
  return _char_strings.SetConstCharArrayStaticString(*args)
SetConstCharArrayStaticString = _char_strings.SetConstCharArrayStaticString

def SetCharConstStaticString(*args):
  return _char_strings.SetCharConstStaticString(*args)
SetCharConstStaticString = _char_strings.SetCharConstStaticString

def SetConstCharConstStaticString(*args):
  return _char_strings.SetConstCharConstStaticString(*args)
SetConstCharConstStaticString = _char_strings.SetConstCharConstStaticString

def CharPingPong(*args):
  return _char_strings.CharPingPong(*args)
CharPingPong = _char_strings.CharPingPong

def CharArrayPingPong(*args):
  return _char_strings.CharArrayPingPong(*args)
CharArrayPingPong = _char_strings.CharArrayPingPong

def CharArrayDimsPingPong(*args):
  return _char_strings.CharArrayDimsPingPong(*args)
CharArrayDimsPingPong = _char_strings.CharArrayDimsPingPong

def GetNewCharString():
  return _char_strings.GetNewCharString()
GetNewCharString = _char_strings.GetNewCharString

def GetNextFormat(*args):
  return _char_strings.GetNextFormat(*args)
GetNextFormat = _char_strings.GetNextFormat

def GetCharPointerRef():
  return _char_strings.GetCharPointerRef()
GetCharPointerRef = _char_strings.GetCharPointerRef

def SetCharPointerRef(*args):
  return _char_strings.SetCharPointerRef(*args)
SetCharPointerRef = _char_strings.SetCharPointerRef

def GetConstCharPointerRef():
  return _char_strings.GetConstCharPointerRef()
GetConstCharPointerRef = _char_strings.GetConstCharPointerRef

def SetConstCharPointerRef(*args):
  return _char_strings.SetConstCharPointerRef(*args)
SetConstCharPointerRef = _char_strings.SetConstCharPointerRef
# This file is compatible with both classic and new-style classes.

cvar = _char_strings.cvar
global_const_char = cvar.global_const_char
global_const_char_array1 = cvar.global_const_char_array1
global_const_char_array2 = cvar.global_const_char_array2

