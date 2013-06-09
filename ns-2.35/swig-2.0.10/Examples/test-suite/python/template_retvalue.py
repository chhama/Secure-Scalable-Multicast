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
            fp, pathname, description = imp.find_module('_template_retvalue', [dirname(__file__)])
        except ImportError:
            import _template_retvalue
            return _template_retvalue
        if fp is not None:
            try:
                _mod = imp.load_module('_template_retvalue', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_retvalue = swig_import_helper()
    del swig_import_helper
else:
    import _template_retvalue
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


Hi = _template_retvalue.Hi
Hola = _template_retvalue.Hola
class C(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, C, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, C, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _template_retvalue.new_C(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_retvalue.delete_C
    __del__ = lambda self : None;
C_swigregister = _template_retvalue.C_swigregister
C_swigregister(C)

class A_Hi(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A_Hi, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A_Hi, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _template_retvalue.new_A_Hi(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_retvalue.delete_A_Hi
    __del__ = lambda self : None;
A_Hi_swigregister = _template_retvalue.A_Hi_swigregister
A_Hi_swigregister(A_Hi)

class B_Hola(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, B_Hola, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, B_Hola, name)
    __repr__ = _swig_repr
    def get_c(self): return _template_retvalue.B_Hola_get_c(self)
    def get_a(self): return _template_retvalue.B_Hola_get_a(self)
    def __init__(self): 
        this = _template_retvalue.new_B_Hola()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_retvalue.delete_B_Hola
    __del__ = lambda self : None;
B_Hola_swigregister = _template_retvalue.B_Hola_swigregister
B_Hola_swigregister(B_Hola)

# This file is compatible with both classic and new-style classes.


