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
            fp, pathname, description = imp.find_module('_rename2', [dirname(__file__)])
        except ImportError:
            import _rename2
            return _rename2
        if fp is not None:
            try:
                _mod = imp.load_module('_rename2', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _rename2 = swig_import_helper()
    del swig_import_helper
else:
    import _rename2
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


class Klass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Klass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Klass, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _rename2.new_Klass(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_Klass
    __del__ = lambda self : None;
Klass_swigregister = _rename2.Klass_swigregister
Klass_swigregister(Klass)

class Another(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Another, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Another, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rename2.new_Another()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_Another
    __del__ = lambda self : None;
Another_swigregister = _rename2.Another_swigregister
Another_swigregister(Another)

En1 = _rename2.En1
En2 = _rename2.En2
En3 = _rename2.En3
class ABC(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ABC, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ABC, name)
    __repr__ = _swig_repr
    def methodABC(self, *args): return _rename2.ABC_methodABC(self, *args)
    def methodKlass(self, *args): return _rename2.ABC_methodKlass(self, *args)
    def opABC(self): return _rename2.ABC_opABC(self)
    def opKlass(self): return _rename2.ABC_opKlass(self)
    def __init__(self): 
        this = _rename2.new_ABC()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_ABC
    __del__ = lambda self : None;
ABC_swigregister = _rename2.ABC_swigregister
ABC_swigregister(ABC)

class XYZInt(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, XYZInt, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, XYZInt, name)
    __repr__ = _swig_repr
    def opIntPtrA(self): return _rename2.XYZInt_opIntPtrA(self)
    def opIntPtrB(self): return _rename2.XYZInt_opIntPtrB(self)
    def opAnother2(self): return _rename2.XYZInt_opAnother2(self)
    def tMethod2(self, *args): return _rename2.XYZInt_tMethod2(self, *args)
    def tMethodNotXYZ2(self, *args): return _rename2.XYZInt_tMethodNotXYZ2(self, *args)
    def tMethodXYZ2(self, *args): return _rename2.XYZInt_tMethodXYZ2(self, *args)
    def opT2(self): return _rename2.XYZInt_opT2(self)
    def opNotXYZ2(self): return _rename2.XYZInt_opNotXYZ2(self)
    def opXYZ2(self): return _rename2.XYZInt_opXYZ2(self)
    def __init__(self): 
        this = _rename2.new_XYZInt()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_XYZInt
    __del__ = lambda self : None;
XYZInt_swigregister = _rename2.XYZInt_swigregister
XYZInt_swigregister(XYZInt)

class XYZDouble(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, XYZDouble, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, XYZDouble, name)
    __repr__ = _swig_repr
    def opIntPtrA(self): return _rename2.XYZDouble_opIntPtrA(self)
    def opIntPtrB(self): return _rename2.XYZDouble_opIntPtrB(self)
    def opAnother1(self): return _rename2.XYZDouble_opAnother1(self)
    def tMethod1(self, *args): return _rename2.XYZDouble_tMethod1(self, *args)
    def tMethodNotXYZ1(self, *args): return _rename2.XYZDouble_tMethodNotXYZ1(self, *args)
    def tMethodXYZ1(self, *args): return _rename2.XYZDouble_tMethodXYZ1(self, *args)
    def opT1(self): return _rename2.XYZDouble_opT1(self)
    def opNotXYZ1(self): return _rename2.XYZDouble_opNotXYZ1(self)
    def opXYZ1(self): return _rename2.XYZDouble_opXYZ1(self)
    def __init__(self): 
        this = _rename2.new_XYZDouble()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_XYZDouble
    __del__ = lambda self : None;
XYZDouble_swigregister = _rename2.XYZDouble_swigregister
XYZDouble_swigregister(XYZDouble)

class XYZKlass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, XYZKlass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, XYZKlass, name)
    __repr__ = _swig_repr
    def opIntPtrA(self): return _rename2.XYZKlass_opIntPtrA(self)
    def opIntPtrB(self): return _rename2.XYZKlass_opIntPtrB(self)
    def opAnother3(self): return _rename2.XYZKlass_opAnother3(self)
    def tMethod3(self, *args): return _rename2.XYZKlass_tMethod3(self, *args)
    def tMethodNotXYZ3(self, *args): return _rename2.XYZKlass_tMethodNotXYZ3(self, *args)
    def tMethodXYZ3(self, *args): return _rename2.XYZKlass_tMethodXYZ3(self, *args)
    def opT3(self): return _rename2.XYZKlass_opT3(self)
    def opNotXYZ3(self): return _rename2.XYZKlass_opNotXYZ3(self)
    def opXYZ3(self): return _rename2.XYZKlass_opXYZ3(self)
    def __init__(self): 
        this = _rename2.new_XYZKlass()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_XYZKlass
    __del__ = lambda self : None;
XYZKlass_swigregister = _rename2.XYZKlass_swigregister
XYZKlass_swigregister(XYZKlass)

class XYZEnu(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, XYZEnu, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, XYZEnu, name)
    __repr__ = _swig_repr
    def opIntPtrA(self): return _rename2.XYZEnu_opIntPtrA(self)
    def opIntPtrB(self): return _rename2.XYZEnu_opIntPtrB(self)
    def opAnother4(self): return _rename2.XYZEnu_opAnother4(self)
    def tMethod4(self, *args): return _rename2.XYZEnu_tMethod4(self, *args)
    def tMethodNotXYZ4(self, *args): return _rename2.XYZEnu_tMethodNotXYZ4(self, *args)
    def tMethodXYZ4(self, *args): return _rename2.XYZEnu_tMethodXYZ4(self, *args)
    def opT4(self): return _rename2.XYZEnu_opT4(self)
    def opNotXYZ4(self): return _rename2.XYZEnu_opNotXYZ4(self)
    def opXYZ4(self): return _rename2.XYZEnu_opXYZ4(self)
    def __init__(self): 
        this = _rename2.new_XYZEnu()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_XYZEnu
    __del__ = lambda self : None;
XYZEnu_swigregister = _rename2.XYZEnu_swigregister
XYZEnu_swigregister(XYZEnu)

class NotXYZInt(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, NotXYZInt, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, NotXYZInt, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rename2.new_NotXYZInt()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_NotXYZInt
    __del__ = lambda self : None;
NotXYZInt_swigregister = _rename2.NotXYZInt_swigregister
NotXYZInt_swigregister(NotXYZInt)

class NotXYZDouble(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, NotXYZDouble, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, NotXYZDouble, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rename2.new_NotXYZDouble()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_NotXYZDouble
    __del__ = lambda self : None;
NotXYZDouble_swigregister = _rename2.NotXYZDouble_swigregister
NotXYZDouble_swigregister(NotXYZDouble)

class NotXYZKlass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, NotXYZKlass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, NotXYZKlass, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rename2.new_NotXYZKlass()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_NotXYZKlass
    __del__ = lambda self : None;
NotXYZKlass_swigregister = _rename2.NotXYZKlass_swigregister
NotXYZKlass_swigregister(NotXYZKlass)

class NotXYZEnu(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, NotXYZEnu, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, NotXYZEnu, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rename2.new_NotXYZEnu()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rename2.delete_NotXYZEnu
    __del__ = lambda self : None;
NotXYZEnu_swigregister = _rename2.NotXYZEnu_swigregister
NotXYZEnu_swigregister(NotXYZEnu)

# This file is compatible with both classic and new-style classes.

