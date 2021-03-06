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
            fp, pathname, description = imp.find_module('_template_specialization_defarg', [dirname(__file__)])
        except ImportError:
            import _template_specialization_defarg
            return _template_specialization_defarg
        if fp is not None:
            try:
                _mod = imp.load_module('_template_specialization_defarg', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_specialization_defarg = swig_import_helper()
    del swig_import_helper
else:
    import _template_specialization_defarg
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


class C_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, C_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, C_i, name)
    __repr__ = _swig_repr
    def hi(self): return _template_specialization_defarg.C_i_hi(self)
    def __init__(self, *args): 
        this = _template_specialization_defarg.new_C_i(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_specialization_defarg.delete_C_i
    __del__ = lambda self : None;
C_i_swigregister = _template_specialization_defarg.C_i_swigregister
C_i_swigregister(C_i)

class C_dd(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, C_dd, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, C_dd, name)
    __repr__ = _swig_repr
    def hello(self): return _template_specialization_defarg.C_dd_hello(self)
    def __init__(self, *args): 
        this = _template_specialization_defarg.new_C_dd(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_specialization_defarg.delete_C_dd
    __del__ = lambda self : None;
C_dd_swigregister = _template_specialization_defarg.C_dd_swigregister
C_dd_swigregister(C_dd)

class C_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, C_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, C_d, name)
    __repr__ = _swig_repr
    def hello(self): return _template_specialization_defarg.C_d_hello(self)
    def __init__(self, *args): 
        this = _template_specialization_defarg.new_C_d(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_specialization_defarg.delete_C_d
    __del__ = lambda self : None;
C_d_swigregister = _template_specialization_defarg.C_d_swigregister
C_d_swigregister(C_d)

class D_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, D_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, D_i, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _template_specialization_defarg.new_D_i(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_specialization_defarg.delete_D_i
    __del__ = lambda self : None;
D_i_swigregister = _template_specialization_defarg.D_i_swigregister
D_i_swigregister(D_i)

class D_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, D_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, D_d, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_specialization_defarg.new_D_d()
        try: self.this.append(this)
        except: self.this = this
    def foo(self): return _template_specialization_defarg.D_d_foo(self)
    __swig_destroy__ = _template_specialization_defarg.delete_D_d
    __del__ = lambda self : None;
D_d_swigregister = _template_specialization_defarg.D_d_swigregister
D_d_swigregister(D_d)

class Vector_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Vector_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Vector_i, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _template_specialization_defarg.new_Vector_i(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_specialization_defarg.delete_Vector_i
    __del__ = lambda self : None;
Vector_i_swigregister = _template_specialization_defarg.Vector_i_swigregister
Vector_i_swigregister(Vector_i)

class Vector_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Vector_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Vector_d, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_specialization_defarg.new_Vector_d()
        try: self.this.append(this)
        except: self.this = this
    def foo(self): return _template_specialization_defarg.Vector_d_foo(self)
    __swig_destroy__ = _template_specialization_defarg.delete_Vector_d
    __del__ = lambda self : None;
Vector_d_swigregister = _template_specialization_defarg.Vector_d_swigregister
Vector_d_swigregister(Vector_d)

# This file is compatible with both classic and new-style classes.


