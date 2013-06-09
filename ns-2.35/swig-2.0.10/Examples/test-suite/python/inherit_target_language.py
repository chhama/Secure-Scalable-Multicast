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
            fp, pathname, description = imp.find_module('_inherit_target_language', [dirname(__file__)])
        except ImportError:
            import _inherit_target_language
            return _inherit_target_language
        if fp is not None:
            try:
                _mod = imp.load_module('_inherit_target_language', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _inherit_target_language = swig_import_helper()
    del swig_import_helper
else:
    import _inherit_target_language
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


class Base2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Base2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Base2, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _inherit_target_language.delete_Base2
    __del__ = lambda self : None;
    def __init__(self): 
        this = _inherit_target_language.new_Base2()
        try: self.this.append(this)
        except: self.this = this
Base2_swigregister = _inherit_target_language.Base2_swigregister
Base2_swigregister(Base2)

class Derived1(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Derived1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Derived1, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit_target_language.new_Derived1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_Derived1
    __del__ = lambda self : None;
Derived1_swigregister = _inherit_target_language.Derived1_swigregister
Derived1_swigregister(Derived1)

class Derived2(Base2):
    __swig_setmethods__ = {}
    for _s in [Base2]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Derived2, name, value)
    __swig_getmethods__ = {}
    for _s in [Base2]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Derived2, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit_target_language.new_Derived2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_Derived2
    __del__ = lambda self : None;
Derived2_swigregister = _inherit_target_language.Derived2_swigregister
Derived2_swigregister(Derived2)

class MBase2a(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MBase2a, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MBase2a, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _inherit_target_language.delete_MBase2a
    __del__ = lambda self : None;
    def c(self): return _inherit_target_language.MBase2a_c(self)
    def __init__(self): 
        this = _inherit_target_language.new_MBase2a()
        try: self.this.append(this)
        except: self.this = this
MBase2a_swigregister = _inherit_target_language.MBase2a_swigregister
MBase2a_swigregister(MBase2a)

class MBase2b(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MBase2b, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MBase2b, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _inherit_target_language.delete_MBase2b
    __del__ = lambda self : None;
    def d(self): return _inherit_target_language.MBase2b_d(self)
    def __init__(self): 
        this = _inherit_target_language.new_MBase2b()
        try: self.this.append(this)
        except: self.this = this
MBase2b_swigregister = _inherit_target_language.MBase2b_swigregister
MBase2b_swigregister(MBase2b)

class MultipleDerived1(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MultipleDerived1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MultipleDerived1, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit_target_language.new_MultipleDerived1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_MultipleDerived1
    __del__ = lambda self : None;
MultipleDerived1_swigregister = _inherit_target_language.MultipleDerived1_swigregister
MultipleDerived1_swigregister(MultipleDerived1)

class MultipleDerived2(MBase2b):
    __swig_setmethods__ = {}
    for _s in [MBase2b]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, MultipleDerived2, name, value)
    __swig_getmethods__ = {}
    for _s in [MBase2b]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, MultipleDerived2, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit_target_language.new_MultipleDerived2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_MultipleDerived2
    __del__ = lambda self : None;
MultipleDerived2_swigregister = _inherit_target_language.MultipleDerived2_swigregister
MultipleDerived2_swigregister(MultipleDerived2)

class MBase3b(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MBase3b, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MBase3b, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _inherit_target_language.delete_MBase3b
    __del__ = lambda self : None;
    def f(self): return _inherit_target_language.MBase3b_f(self)
    def __init__(self): 
        this = _inherit_target_language.new_MBase3b()
        try: self.this.append(this)
        except: self.this = this
MBase3b_swigregister = _inherit_target_language.MBase3b_swigregister
MBase3b_swigregister(MBase3b)

class MBase4a(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MBase4a, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MBase4a, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _inherit_target_language.delete_MBase4a
    __del__ = lambda self : None;
    def g(self): return _inherit_target_language.MBase4a_g(self)
    def __init__(self): 
        this = _inherit_target_language.new_MBase4a()
        try: self.this.append(this)
        except: self.this = this
MBase4a_swigregister = _inherit_target_language.MBase4a_swigregister
MBase4a_swigregister(MBase4a)

class MultipleDerived3(MBase3b):
    __swig_setmethods__ = {}
    for _s in [MBase3b]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, MultipleDerived3, name, value)
    __swig_getmethods__ = {}
    for _s in [MBase3b]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, MultipleDerived3, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit_target_language.new_MultipleDerived3()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_MultipleDerived3
    __del__ = lambda self : None;
MultipleDerived3_swigregister = _inherit_target_language.MultipleDerived3_swigregister
MultipleDerived3_swigregister(MultipleDerived3)

class MultipleDerived4(MBase4a,):
    __swig_setmethods__ = {}
    for _s in [MBase4a,]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, MultipleDerived4, name, value)
    __swig_getmethods__ = {}
    for _s in [MBase4a,]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, MultipleDerived4, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit_target_language.new_MultipleDerived4()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_MultipleDerived4
    __del__ = lambda self : None;
MultipleDerived4_swigregister = _inherit_target_language.MultipleDerived4_swigregister
MultipleDerived4_swigregister(MultipleDerived4)

class BaseX(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BaseX, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BaseX, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _inherit_target_language.delete_BaseX
    __del__ = lambda self : None;
    def basex(self): return _inherit_target_language.BaseX_basex(self)
    def __init__(self): 
        this = _inherit_target_language.new_BaseX()
        try: self.this.append(this)
        except: self.this = this
BaseX_swigregister = _inherit_target_language.BaseX_swigregister
BaseX_swigregister(BaseX)

class DerivedX(BaseX):
    __swig_setmethods__ = {}
    for _s in [BaseX]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, DerivedX, name, value)
    __swig_getmethods__ = {}
    for _s in [BaseX]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, DerivedX, name)
    __repr__ = _swig_repr
    def derivedx(self): return _inherit_target_language.DerivedX_derivedx(self)
    def __init__(self): 
        this = _inherit_target_language.new_DerivedX()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit_target_language.delete_DerivedX
    __del__ = lambda self : None;
DerivedX_swigregister = _inherit_target_language.DerivedX_swigregister
DerivedX_swigregister(DerivedX)

# This file is compatible with both classic and new-style classes.


