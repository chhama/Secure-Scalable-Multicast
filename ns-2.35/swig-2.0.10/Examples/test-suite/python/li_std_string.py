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
            fp, pathname, description = imp.find_module('_li_std_string', [dirname(__file__)])
        except ImportError:
            import _li_std_string
            return _li_std_string
        if fp is not None:
            try:
                _mod = imp.load_module('_li_std_string', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_std_string = swig_import_helper()
    del swig_import_helper
else:
    import _li_std_string
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



def test_value(*args):
  return _li_std_string.test_value(*args)
test_value = _li_std_string.test_value

def test_const_reference(*args):
  return _li_std_string.test_const_reference(*args)
test_const_reference = _li_std_string.test_const_reference

def test_pointer(*args):
  return _li_std_string.test_pointer(*args)
test_pointer = _li_std_string.test_pointer

def test_pointer_out():
  return _li_std_string.test_pointer_out()
test_pointer_out = _li_std_string.test_pointer_out

def test_const_pointer(*args):
  return _li_std_string.test_const_pointer(*args)
test_const_pointer = _li_std_string.test_const_pointer

def test_const_pointer_out():
  return _li_std_string.test_const_pointer_out()
test_const_pointer_out = _li_std_string.test_const_pointer_out

def test_reference(*args):
  return _li_std_string.test_reference(*args)
test_reference = _li_std_string.test_reference

def test_reference_out():
  return _li_std_string.test_reference_out()
test_reference_out = _li_std_string.test_reference_out

def test_reference_input(*args):
  return _li_std_string.test_reference_input(*args)
test_reference_input = _li_std_string.test_reference_input

def test_reference_inout(*args):
  return _li_std_string.test_reference_inout(*args)
test_reference_inout = _li_std_string.test_reference_inout

def test_throw():
  return _li_std_string.test_throw()
test_throw = _li_std_string.test_throw

def test_const_reference_throw():
  return _li_std_string.test_const_reference_throw()
test_const_reference_throw = _li_std_string.test_const_reference_throw

def test_pointer_throw():
  return _li_std_string.test_pointer_throw()
test_pointer_throw = _li_std_string.test_pointer_throw

def test_const_pointer_throw():
  return _li_std_string.test_const_pointer_throw()
test_const_pointer_throw = _li_std_string.test_const_pointer_throw
class Structure(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Structure, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Structure, name)
    __repr__ = _swig_repr
    __swig_setmethods__["MemberString"] = _li_std_string.Structure_MemberString_set
    __swig_getmethods__["MemberString"] = _li_std_string.Structure_MemberString_get
    if _newclass:MemberString = _swig_property(_li_std_string.Structure_MemberString_get, _li_std_string.Structure_MemberString_set)
    __swig_setmethods__["MemberString2"] = _li_std_string.Structure_MemberString2_set
    __swig_getmethods__["MemberString2"] = _li_std_string.Structure_MemberString2_get
    if _newclass:MemberString2 = _swig_property(_li_std_string.Structure_MemberString2_get, _li_std_string.Structure_MemberString2_set)
    __swig_setmethods__["StaticMemberString"] = _li_std_string.Structure_StaticMemberString_set
    __swig_getmethods__["StaticMemberString"] = _li_std_string.Structure_StaticMemberString_get
    if _newclass:StaticMemberString = _swig_property(_li_std_string.Structure_StaticMemberString_get, _li_std_string.Structure_StaticMemberString_set)
    __swig_setmethods__["StaticMemberString2"] = _li_std_string.Structure_StaticMemberString2_set
    __swig_getmethods__["StaticMemberString2"] = _li_std_string.Structure_StaticMemberString2_get
    if _newclass:StaticMemberString2 = _swig_property(_li_std_string.Structure_StaticMemberString2_get, _li_std_string.Structure_StaticMemberString2_set)
    __swig_getmethods__["ConstMemberString"] = _li_std_string.Structure_ConstMemberString_get
    if _newclass:ConstMemberString = _swig_property(_li_std_string.Structure_ConstMemberString_get)
    def __init__(self): 
        this = _li_std_string.new_Structure()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_std_string.delete_Structure
    __del__ = lambda self : None;
Structure_swigregister = _li_std_string.Structure_swigregister
Structure_swigregister(Structure)
cvar = _li_std_string.cvar
ConstGlobalString = cvar.ConstGlobalString
Structure.ConstStaticMemberString = _li_std_string.cvar.Structure_ConstStaticMemberString

class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    def test(self, *args): return _li_std_string.Foo_test(self, *args)
    def testl(self, *args): return _li_std_string.Foo_testl(self, *args)
    def __init__(self): 
        this = _li_std_string.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_std_string.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _li_std_string.Foo_swigregister
Foo_swigregister(Foo)


def stdstring_empty():
  return _li_std_string.stdstring_empty()
stdstring_empty = _li_std_string.stdstring_empty

def c_empty():
  return _li_std_string.c_empty()
c_empty = _li_std_string.c_empty

def c_null():
  return _li_std_string.c_null()
c_null = _li_std_string.c_null

def get_null(*args):
  return _li_std_string.get_null(*args)
get_null = _li_std_string.get_null
# This file is compatible with both classic and new-style classes.

