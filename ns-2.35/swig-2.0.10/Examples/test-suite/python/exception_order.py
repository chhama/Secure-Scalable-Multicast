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
            fp, pathname, description = imp.find_module('_exception_order', [dirname(__file__)])
        except ImportError:
            import _exception_order
            return _exception_order
        if fp is not None:
            try:
                _mod = imp.load_module('_exception_order', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _exception_order = swig_import_helper()
    del swig_import_helper
else:
    import _exception_order
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


class E1(Exception):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, E1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, E1, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _exception_order.new_E1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _exception_order.delete_E1
    __del__ = lambda self : None;
E1_swigregister = _exception_order.E1_swigregister
E1_swigregister(E1)
cvar = _exception_order.cvar
cfoovar = cvar.cfoovar

class E2(Exception):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, E2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, E2, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _exception_order.new_E2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _exception_order.delete_E2
    __del__ = lambda self : None;
E2_swigregister = _exception_order.E2_swigregister
E2_swigregister(E2)

class E3(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, E3, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, E3, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _exception_order.new_E3()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _exception_order.delete_E3
    __del__ = lambda self : None;
E3_swigregister = _exception_order.E3_swigregister
E3_swigregister(E3)

class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    __swig_setmethods__["sfoovar"] = _exception_order.A_sfoovar_set
    __swig_getmethods__["sfoovar"] = _exception_order.A_sfoovar_get
    if _newclass:sfoovar = _swig_property(_exception_order.A_sfoovar_get, _exception_order.A_sfoovar_set)
    CSFOOVAR = _exception_order.A_CSFOOVAR
    __swig_setmethods__["foovar"] = _exception_order.A_foovar_set
    __swig_getmethods__["foovar"] = _exception_order.A_foovar_get
    if _newclass:foovar = _swig_property(_exception_order.A_foovar_get, _exception_order.A_foovar_set)
    __swig_setmethods__["efoovar"] = _exception_order.A_efoovar_set
    __swig_getmethods__["efoovar"] = _exception_order.A_efoovar_get
    if _newclass:efoovar = _swig_property(_exception_order.A_efoovar_get, _exception_order.A_efoovar_set)
    def foo(self): return _exception_order.A_foo(self)
    def bar(self): return _exception_order.A_bar(self)
    def foobar(self): return _exception_order.A_foobar(self)
    def barfoo(self, *args): return _exception_order.A_barfoo(self, *args)
    def __init__(self): 
        this = _exception_order.new_A()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _exception_order.delete_A
    __del__ = lambda self : None;
A_swigregister = _exception_order.A_swigregister
A_swigregister(A)

class ET_i(Exception):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ET_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ET_i, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _exception_order.new_ET_i()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _exception_order.delete_ET_i
    __del__ = lambda self : None;
ET_i_swigregister = _exception_order.ET_i_swigregister
ET_i_swigregister(ET_i)

class ET_d(Exception):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ET_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ET_d, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _exception_order.new_ET_d()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _exception_order.delete_ET_d
    __del__ = lambda self : None;
ET_d_swigregister = _exception_order.ET_d_swigregister
ET_d_swigregister(ET_d)

# This file is compatible with both classic and new-style classes.


