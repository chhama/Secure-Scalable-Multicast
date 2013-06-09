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
            fp, pathname, description = imp.find_module('_template_typedef_cplx4', [dirname(__file__)])
        except ImportError:
            import _template_typedef_cplx4
            return _template_typedef_cplx4
        if fp is not None:
            try:
                _mod = imp.load_module('_template_typedef_cplx4', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_typedef_cplx4 = swig_import_helper()
    del swig_import_helper
else:
    import _template_typedef_cplx4
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


class UnaryFunctionBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunctionBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunctionBase, name)
    __repr__ = _swig_repr
    def get_base_value(self): return _template_typedef_cplx4.UnaryFunctionBase_get_base_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_UnaryFunctionBase()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_UnaryFunctionBase
    __del__ = lambda self : None;
UnaryFunctionBase_swigregister = _template_typedef_cplx4.UnaryFunctionBase_swigregister
UnaryFunctionBase_swigregister(UnaryFunctionBase)

class UnaryFunction_double_double(UnaryFunctionBase):
    __swig_setmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunction_double_double, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunction_double_double, name)
    __repr__ = _swig_repr
    def get_value(self): return _template_typedef_cplx4.UnaryFunction_double_double_get_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_UnaryFunction_double_double()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_UnaryFunction_double_double
    __del__ = lambda self : None;
UnaryFunction_double_double_swigregister = _template_typedef_cplx4.UnaryFunction_double_double_swigregister
UnaryFunction_double_double_swigregister(UnaryFunction_double_double)

class ArithUnaryFunction_double_double(UnaryFunction_double_double):
    __swig_setmethods__ = {}
    for _s in [UnaryFunction_double_double]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArithUnaryFunction_double_double, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunction_double_double]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, ArithUnaryFunction_double_double, name)
    __repr__ = _swig_repr
    def get_arith_value(self): return _template_typedef_cplx4.ArithUnaryFunction_double_double_get_arith_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_ArithUnaryFunction_double_double()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_ArithUnaryFunction_double_double
    __del__ = lambda self : None;
ArithUnaryFunction_double_double_swigregister = _template_typedef_cplx4.ArithUnaryFunction_double_double_swigregister
ArithUnaryFunction_double_double_swigregister(ArithUnaryFunction_double_double)


def make_Identity_double():
  return _template_typedef_cplx4.make_Identity_double()
make_Identity_double = _template_typedef_cplx4.make_Identity_double
class UnaryFunction_complex_complex(UnaryFunctionBase):
    __swig_setmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunction_complex_complex, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunction_complex_complex, name)
    __repr__ = _swig_repr
    def get_value(self): return _template_typedef_cplx4.UnaryFunction_complex_complex_get_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_UnaryFunction_complex_complex()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_UnaryFunction_complex_complex
    __del__ = lambda self : None;
UnaryFunction_complex_complex_swigregister = _template_typedef_cplx4.UnaryFunction_complex_complex_swigregister
UnaryFunction_complex_complex_swigregister(UnaryFunction_complex_complex)

class ArithUnaryFunction_complex_complex(UnaryFunction_complex_complex):
    __swig_setmethods__ = {}
    for _s in [UnaryFunction_complex_complex]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArithUnaryFunction_complex_complex, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunction_complex_complex]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, ArithUnaryFunction_complex_complex, name)
    __repr__ = _swig_repr
    def get_arith_value(self): return _template_typedef_cplx4.ArithUnaryFunction_complex_complex_get_arith_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_ArithUnaryFunction_complex_complex()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_ArithUnaryFunction_complex_complex
    __del__ = lambda self : None;
ArithUnaryFunction_complex_complex_swigregister = _template_typedef_cplx4.ArithUnaryFunction_complex_complex_swigregister
ArithUnaryFunction_complex_complex_swigregister(ArithUnaryFunction_complex_complex)


def make_Identity_complex():
  return _template_typedef_cplx4.make_Identity_complex()
make_Identity_complex = _template_typedef_cplx4.make_Identity_complex
class UnaryFunction_double_complex(UnaryFunctionBase):
    __swig_setmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunction_double_complex, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunction_double_complex, name)
    __repr__ = _swig_repr
    def get_value(self): return _template_typedef_cplx4.UnaryFunction_double_complex_get_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_UnaryFunction_double_complex()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_UnaryFunction_double_complex
    __del__ = lambda self : None;
UnaryFunction_double_complex_swigregister = _template_typedef_cplx4.UnaryFunction_double_complex_swigregister
UnaryFunction_double_complex_swigregister(UnaryFunction_double_complex)

class ArithUnaryFunction_double_complex(UnaryFunction_double_complex):
    __swig_setmethods__ = {}
    for _s in [UnaryFunction_double_complex]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArithUnaryFunction_double_complex, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunction_double_complex]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, ArithUnaryFunction_double_complex, name)
    __repr__ = _swig_repr
    def get_arith_value(self): return _template_typedef_cplx4.ArithUnaryFunction_double_complex_get_arith_value(self)
    def __init__(self): 
        this = _template_typedef_cplx4.new_ArithUnaryFunction_double_complex()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_ArithUnaryFunction_double_complex
    __del__ = lambda self : None;
ArithUnaryFunction_double_complex_swigregister = _template_typedef_cplx4.ArithUnaryFunction_double_complex_swigregister
ArithUnaryFunction_double_complex_swigregister(ArithUnaryFunction_double_complex)


def make_Multiplies_double_double_complex_complex(*args):
  return _template_typedef_cplx4.make_Multiplies_double_double_complex_complex(*args)
make_Multiplies_double_double_complex_complex = _template_typedef_cplx4.make_Multiplies_double_double_complex_complex

def make_Multiplies_double_double_double_double(*args):
  return _template_typedef_cplx4.make_Multiplies_double_double_double_double(*args)
make_Multiplies_double_double_double_double = _template_typedef_cplx4.make_Multiplies_double_double_double_double

def make_Multiplies_complex_complex_complex_complex(*args):
  return _template_typedef_cplx4.make_Multiplies_complex_complex_complex_complex(*args)
make_Multiplies_complex_complex_complex_complex = _template_typedef_cplx4.make_Multiplies_complex_complex_complex_complex

def make_Multiplies_complex_complex_double_double(*args):
  return _template_typedef_cplx4.make_Multiplies_complex_complex_double_double(*args)
make_Multiplies_complex_complex_double_double = _template_typedef_cplx4.make_Multiplies_complex_complex_double_double

def my_func_r(*args):
  return _template_typedef_cplx4.my_func_r(*args)
my_func_r = _template_typedef_cplx4.my_func_r

def my_func_c(*args):
  return _template_typedef_cplx4.my_func_c(*args)
my_func_c = _template_typedef_cplx4.my_func_c
class Sin(ArithUnaryFunction_double_double):
    __swig_setmethods__ = {}
    for _s in [ArithUnaryFunction_double_double]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Sin, name, value)
    __swig_getmethods__ = {}
    for _s in [ArithUnaryFunction_double_double]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Sin, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef_cplx4.new_Sin()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_Sin
    __del__ = lambda self : None;
Sin_swigregister = _template_typedef_cplx4.Sin_swigregister
Sin_swigregister(Sin)

class CSin(ArithUnaryFunction_complex_complex):
    __swig_setmethods__ = {}
    for _s in [ArithUnaryFunction_complex_complex]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, CSin, name, value)
    __swig_getmethods__ = {}
    for _s in [ArithUnaryFunction_complex_complex]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, CSin, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef_cplx4.new_CSin()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_cplx4.delete_CSin
    __del__ = lambda self : None;
CSin_swigregister = _template_typedef_cplx4.CSin_swigregister
CSin_swigregister(CSin)

# This file is compatible with both classic and new-style classes.


