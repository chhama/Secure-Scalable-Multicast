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
            fp, pathname, description = imp.find_module('_smart_pointer_extend', [dirname(__file__)])
        except ImportError:
            import _smart_pointer_extend
            return _smart_pointer_extend
        if fp is not None:
            try:
                _mod = imp.load_module('_smart_pointer_extend', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _smart_pointer_extend = swig_import_helper()
    del swig_import_helper
else:
    import _smart_pointer_extend
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


class CBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CBase, name)
    __repr__ = _swig_repr
    __swig_getmethods__["hello"] = lambda x: _smart_pointer_extend.CBase_hello
    if _newclass:hello = staticmethod(_smart_pointer_extend.CBase_hello)
    __swig_setmethods__["x"] = _smart_pointer_extend.CBase_x_set
    __swig_getmethods__["x"] = _smart_pointer_extend.CBase_x_get
    if _newclass:x = _swig_property(_smart_pointer_extend.CBase_x_get, _smart_pointer_extend.CBase_x_set)
    z = _smart_pointer_extend.CBase_z
    def foo(self, *args): return _smart_pointer_extend.CBase_foo(self, *args)
    def bar(self, *args): return _smart_pointer_extend.CBase_bar(self, *args)
    def boo(self, *args): return _smart_pointer_extend.CBase_boo(self, *args)
    def __init__(self): 
        this = _smart_pointer_extend.new_CBase()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_CBase
    __del__ = lambda self : None;
CBase_swigregister = _smart_pointer_extend.CBase_swigregister
CBase_swigregister(CBase)

def CBase_hello():
  return _smart_pointer_extend.CBase_hello()
CBase_hello = _smart_pointer_extend.CBase_hello

class CDerived(CBase):
    __swig_setmethods__ = {}
    for _s in [CBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, CDerived, name, value)
    __swig_getmethods__ = {}
    for _s in [CBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, CDerived, name)
    __repr__ = _swig_repr
    def foo(self, *args): return _smart_pointer_extend.CDerived_foo(self, *args)
    def __init__(self): 
        this = _smart_pointer_extend.new_CDerived()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_CDerived
    __del__ = lambda self : None;
CDerived_swigregister = _smart_pointer_extend.CDerived_swigregister
CDerived_swigregister(CDerived)

class CPtr(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CPtr, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CPtr, name)
    __repr__ = _swig_repr
    def __deref__(self): return _smart_pointer_extend.CPtr___deref__(self)
    def __init__(self): 
        this = _smart_pointer_extend.new_CPtr()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_CPtr
    __del__ = lambda self : None;
    def foo(self, *args): return _smart_pointer_extend.CPtr_foo(self, *args)
    def hello(self): return _smart_pointer_extend.CPtr_hello(self)
    __swig_setmethods__["x"] = _smart_pointer_extend.CPtr_x_set
    __swig_getmethods__["x"] = _smart_pointer_extend.CPtr_x_get
    if _newclass:x = _swig_property(_smart_pointer_extend.CPtr_x_get, _smart_pointer_extend.CPtr_x_set)
    __swig_getmethods__["z"] = _smart_pointer_extend.CPtr_z_get
    if _newclass:z = _swig_property(_smart_pointer_extend.CPtr_z_get)
    def bar(self, *args): return _smart_pointer_extend.CPtr_bar(self, *args)
    def boo(self, *args): return _smart_pointer_extend.CPtr_boo(self, *args)
CPtr_swigregister = _smart_pointer_extend.CPtr_swigregister
CPtr_swigregister(CPtr)


def get_hello(*args):
  return _smart_pointer_extend.get_hello(*args)
get_hello = _smart_pointer_extend.get_hello
class CPtrConst(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CPtrConst, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CPtrConst, name)
    __repr__ = _swig_repr
    def __deref__(self): return _smart_pointer_extend.CPtrConst___deref__(self)
    def __init__(self): 
        this = _smart_pointer_extend.new_CPtrConst()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_CPtrConst
    __del__ = lambda self : None;
    __swig_getmethods__["x"] = _smart_pointer_extend.CPtrConst_x_get
    if _newclass:x = _swig_property(_smart_pointer_extend.CPtrConst_x_get)
    __swig_getmethods__["z"] = _smart_pointer_extend.CPtrConst_z_get
    if _newclass:z = _swig_property(_smart_pointer_extend.CPtrConst_z_get)
CPtrConst_swigregister = _smart_pointer_extend.CPtrConst_swigregister
CPtrConst_swigregister(CPtrConst)

class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    __repr__ = _swig_repr
    def extension(self, *args): return _smart_pointer_extend.Foo_extension(self, *args)
    def __init__(self): 
        this = _smart_pointer_extend.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _smart_pointer_extend.Foo_swigregister
Foo_swigregister(Foo)

class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_extend.new_Bar(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_extend.Bar___deref__(self)
    __swig_destroy__ = _smart_pointer_extend.delete_Bar
    __del__ = lambda self : None;
    def extension(self, *args): return _smart_pointer_extend.Bar_extension(self, *args)
Bar_swigregister = _smart_pointer_extend.Bar_swigregister
Bar_swigregister(Bar)

class CFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CFoo, name)
    __repr__ = _swig_repr
    __swig_getmethods__["StatFun"] = lambda x: _smart_pointer_extend.CFoo_StatFun
    if _newclass:StatFun = staticmethod(_smart_pointer_extend.CFoo_StatFun)
    __swig_getmethods__["HoHoHo"] = lambda x: _smart_pointer_extend.CFoo_HoHoHo
    if _newclass:HoHoHo = staticmethod(_smart_pointer_extend.CFoo_HoHoHo)
    def __init__(self): 
        this = _smart_pointer_extend.new_CFoo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_CFoo
    __del__ = lambda self : None;
CFoo_swigregister = _smart_pointer_extend.CFoo_swigregister
CFoo_swigregister(CFoo)

def CFoo_StatFun(*args):
  return _smart_pointer_extend.CFoo_StatFun(*args)
CFoo_StatFun = _smart_pointer_extend.CFoo_StatFun

def CFoo_HoHoHo(*args):
  return _smart_pointer_extend.CFoo_HoHoHo(*args)
CFoo_HoHoHo = _smart_pointer_extend.CFoo_HoHoHo

class CPtrFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CPtrFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CPtrFoo, name)
    __repr__ = _swig_repr
    def __deref__(self): return _smart_pointer_extend.CPtrFoo___deref__(self)
    def __init__(self): 
        this = _smart_pointer_extend.new_CPtrFoo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_CPtrFoo
    __del__ = lambda self : None;
    def StatFun(self, *args): return _smart_pointer_extend.CPtrFoo_StatFun(self, *args)
    def HoHoHo(self, *args): return _smart_pointer_extend.CPtrFoo_HoHoHo(self, *args)
CPtrFoo_swigregister = _smart_pointer_extend.CPtrFoo_swigregister
CPtrFoo_swigregister(CPtrFoo)

class DPtrFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DPtrFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DPtrFoo, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_extend.new_DPtrFoo(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_extend.DPtrFoo___deref__(self)
    __swig_destroy__ = _smart_pointer_extend.delete_DPtrFoo
    __del__ = lambda self : None;
    def F(self): return _smart_pointer_extend.DPtrFoo_F(self)
    def SExt(self, i=1): return _smart_pointer_extend.DPtrFoo_SExt(self, i)
    def Ext(self, i=2): return _smart_pointer_extend.DPtrFoo_Ext(self, i)
DPtrFoo_swigregister = _smart_pointer_extend.DPtrFoo_swigregister
DPtrFoo_swigregister(DPtrFoo)

class DFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DFoo, name)
    __repr__ = _swig_repr
    def F(self): return _smart_pointer_extend.DFoo_F(self)
    __swig_getmethods__["SExt"] = lambda x: _smart_pointer_extend.DFoo_SExt
    if _newclass:SExt = staticmethod(_smart_pointer_extend.DFoo_SExt)
    def Ext(self, i=2): return _smart_pointer_extend.DFoo_Ext(self, i)
    def __init__(self): 
        this = _smart_pointer_extend.new_DFoo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_extend.delete_DFoo
    __del__ = lambda self : None;
DFoo_swigregister = _smart_pointer_extend.DFoo_swigregister
DFoo_swigregister(DFoo)

def DFoo_SExt(i=1):
  return _smart_pointer_extend.DFoo_SExt(i)
DFoo_SExt = _smart_pointer_extend.DFoo_SExt

# This file is compatible with both classic and new-style classes.

