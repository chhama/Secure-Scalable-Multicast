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
            fp, pathname, description = imp.find_module('_smart_pointer_member', [dirname(__file__)])
        except ImportError:
            import _smart_pointer_member
            return _smart_pointer_member
        if fp is not None:
            try:
                _mod = imp.load_module('_smart_pointer_member', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _smart_pointer_member = swig_import_helper()
    del swig_import_helper
else:
    import _smart_pointer_member
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


class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    __swig_setmethods__["x"] = _smart_pointer_member.Foo_x_set
    __swig_getmethods__["x"] = _smart_pointer_member.Foo_x_get
    if _newclass:x = _swig_property(_smart_pointer_member.Foo_x_get, _smart_pointer_member.Foo_x_set)
    __swig_setmethods__["y"] = _smart_pointer_member.Foo_y_set
    __swig_getmethods__["y"] = _smart_pointer_member.Foo_y_get
    if _newclass:y = _swig_property(_smart_pointer_member.Foo_y_get, _smart_pointer_member.Foo_y_set)
    ZZ = _smart_pointer_member.Foo_ZZ
    __swig_setmethods__["zx"] = _smart_pointer_member.Foo_zx_set
    __swig_getmethods__["zx"] = _smart_pointer_member.Foo_zx_get
    if _newclass:zx = _swig_property(_smart_pointer_member.Foo_zx_get, _smart_pointer_member.Foo_zx_set)
    __swig_getmethods__["boo"] = lambda x: _smart_pointer_member.Foo_boo
    if _newclass:boo = staticmethod(_smart_pointer_member.Foo_boo)
    def __init__(self): 
        this = _smart_pointer_member.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_member.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _smart_pointer_member.Foo_swigregister
Foo_swigregister(Foo)
cvar = _smart_pointer_member.cvar
Foo.z = _smart_pointer_member.cvar.Foo_z

def Foo_boo():
  return _smart_pointer_member.Foo_boo()
Foo_boo = _smart_pointer_member.Foo_boo

def foo(*args):
  return _smart_pointer_member.foo(*args)
foo = _smart_pointer_member.foo

class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_member.new_Bar(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_member.Bar___deref__(self)
    __swig_getmethods__["bua"] = lambda x: _smart_pointer_member.Bar_bua
    if _newclass:bua = staticmethod(_smart_pointer_member.Bar_bua)
    __swig_destroy__ = _smart_pointer_member.delete_Bar
    __del__ = lambda self : None;
    __swig_setmethods__["x"] = _smart_pointer_member.Bar_x_set
    __swig_getmethods__["x"] = _smart_pointer_member.Bar_x_get
    if _newclass:x = _swig_property(_smart_pointer_member.Bar_x_get, _smart_pointer_member.Bar_x_set)
    __swig_setmethods__["y"] = _smart_pointer_member.Bar_y_set
    __swig_getmethods__["y"] = _smart_pointer_member.Bar_y_get
    if _newclass:y = _swig_property(_smart_pointer_member.Bar_y_get, _smart_pointer_member.Bar_y_set)
    __swig_getmethods__["z"] = _smart_pointer_member.Bar_z_get
    if _newclass:z = _swig_property(_smart_pointer_member.Bar_z_get)
    __swig_getmethods__["ZZ"] = _smart_pointer_member.Bar_ZZ_get
    if _newclass:ZZ = _swig_property(_smart_pointer_member.Bar_ZZ_get)
    __swig_setmethods__["zx"] = _smart_pointer_member.Bar_zx_set
    __swig_getmethods__["zx"] = _smart_pointer_member.Bar_zx_get
    if _newclass:zx = _swig_property(_smart_pointer_member.Bar_zx_get, _smart_pointer_member.Bar_zx_set)
    def boo(self): return _smart_pointer_member.Bar_boo(self)
Bar_swigregister = _smart_pointer_member.Bar_swigregister
Bar_swigregister(Bar)

def Bar_bua():
  return _smart_pointer_member.Bar_bua()
Bar_bua = _smart_pointer_member.Bar_bua

class CBar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CBar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CBar, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_member.new_CBar(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_member.CBar___deref__(self)
    __swig_destroy__ = _smart_pointer_member.delete_CBar
    __del__ = lambda self : None;
    __swig_getmethods__["x"] = _smart_pointer_member.CBar_x_get
    if _newclass:x = _swig_property(_smart_pointer_member.CBar_x_get)
    __swig_getmethods__["y"] = _smart_pointer_member.CBar_y_get
    if _newclass:y = _swig_property(_smart_pointer_member.CBar_y_get)
    __swig_getmethods__["z"] = _smart_pointer_member.CBar_z_get
    if _newclass:z = _swig_property(_smart_pointer_member.CBar_z_get)
    __swig_getmethods__["ZZ"] = _smart_pointer_member.CBar_ZZ_get
    if _newclass:ZZ = _swig_property(_smart_pointer_member.CBar_ZZ_get)
    __swig_getmethods__["zx"] = _smart_pointer_member.CBar_zx_get
    if _newclass:zx = _swig_property(_smart_pointer_member.CBar_zx_get)
CBar_swigregister = _smart_pointer_member.CBar_swigregister
CBar_swigregister(CBar)


def get_y(*args):
  return _smart_pointer_member.get_y(*args)
get_y = _smart_pointer_member.get_y

def get_z(*args):
  return _smart_pointer_member.get_z(*args)
get_z = _smart_pointer_member.get_z
# This file is compatible with both classic and new-style classes.

