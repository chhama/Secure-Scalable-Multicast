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
            fp, pathname, description = imp.find_module('_template_typedef', [dirname(__file__)])
        except ImportError:
            import _template_typedef
            return _template_typedef
        if fp is not None:
            try:
                _mod = imp.load_module('_template_typedef', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_typedef = swig_import_helper()
    del swig_import_helper
else:
    import _template_typedef
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
    def __init__(self): 
        this = _template_typedef.new_UnaryFunctionBase()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_UnaryFunctionBase
    __del__ = lambda self : None;
UnaryFunctionBase_swigregister = _template_typedef.UnaryFunctionBase_swigregister
UnaryFunctionBase_swigregister(UnaryFunctionBase)

class UnaryFunction_float_float(UnaryFunctionBase):
    __swig_setmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunction_float_float, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunction_float_float, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef.new_UnaryFunction_float_float()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_UnaryFunction_float_float
    __del__ = lambda self : None;
UnaryFunction_float_float_swigregister = _template_typedef.UnaryFunction_float_float_swigregister
UnaryFunction_float_float_swigregister(UnaryFunction_float_float)

class ArithUnaryFunction_float_float(UnaryFunction_float_float):
    __swig_setmethods__ = {}
    for _s in [UnaryFunction_float_float]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArithUnaryFunction_float_float, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunction_float_float]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, ArithUnaryFunction_float_float, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef.new_ArithUnaryFunction_float_float()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_ArithUnaryFunction_float_float
    __del__ = lambda self : None;
ArithUnaryFunction_float_float_swigregister = _template_typedef.ArithUnaryFunction_float_float_swigregister
ArithUnaryFunction_float_float_swigregister(ArithUnaryFunction_float_float)


def make_Identity_float():
  return _template_typedef.make_Identity_float()
make_Identity_float = _template_typedef.make_Identity_float
class UnaryFunction_reald_reald(UnaryFunctionBase):
    __swig_setmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunction_reald_reald, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunction_reald_reald, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef.new_UnaryFunction_reald_reald()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_UnaryFunction_reald_reald
    __del__ = lambda self : None;
UnaryFunction_reald_reald_swigregister = _template_typedef.UnaryFunction_reald_reald_swigregister
UnaryFunction_reald_reald_swigregister(UnaryFunction_reald_reald)

class ArithUnaryFunction_reald_reald(UnaryFunction_reald_reald):
    __swig_setmethods__ = {}
    for _s in [UnaryFunction_reald_reald]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArithUnaryFunction_reald_reald, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunction_reald_reald]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, ArithUnaryFunction_reald_reald, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef.new_ArithUnaryFunction_reald_reald()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_ArithUnaryFunction_reald_reald
    __del__ = lambda self : None;
ArithUnaryFunction_reald_reald_swigregister = _template_typedef.ArithUnaryFunction_reald_reald_swigregister
ArithUnaryFunction_reald_reald_swigregister(ArithUnaryFunction_reald_reald)


def make_Identity_reald():
  return _template_typedef.make_Identity_reald()
make_Identity_reald = _template_typedef.make_Identity_reald
class UnaryFunction_float_reald(UnaryFunctionBase):
    __swig_setmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, UnaryFunction_float_reald, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunctionBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, UnaryFunction_float_reald, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef.new_UnaryFunction_float_reald()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_UnaryFunction_float_reald
    __del__ = lambda self : None;
UnaryFunction_float_reald_swigregister = _template_typedef.UnaryFunction_float_reald_swigregister
UnaryFunction_float_reald_swigregister(UnaryFunction_float_reald)

class ArithUnaryFunction_float_reald(UnaryFunction_float_reald):
    __swig_setmethods__ = {}
    for _s in [UnaryFunction_float_reald]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, ArithUnaryFunction_float_reald, name, value)
    __swig_getmethods__ = {}
    for _s in [UnaryFunction_float_reald]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, ArithUnaryFunction_float_reald, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef.new_ArithUnaryFunction_float_reald()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef.delete_ArithUnaryFunction_float_reald
    __del__ = lambda self : None;
ArithUnaryFunction_float_reald_swigregister = _template_typedef.ArithUnaryFunction_float_reald_swigregister
ArithUnaryFunction_float_reald_swigregister(ArithUnaryFunction_float_reald)


def make_Multiplies_float_float_reald_reald(*args):
  return _template_typedef.make_Multiplies_float_float_reald_reald(*args)
make_Multiplies_float_float_reald_reald = _template_typedef.make_Multiplies_float_float_reald_reald

def make_Multiplies_float_float_float_float(*args):
  return _template_typedef.make_Multiplies_float_float_float_float(*args)
make_Multiplies_float_float_float_float = _template_typedef.make_Multiplies_float_float_float_float

def make_Multiplies_reald_reald_reald_reald(*args):
  return _template_typedef.make_Multiplies_reald_reald_reald_reald(*args)
make_Multiplies_reald_reald_reald_reald = _template_typedef.make_Multiplies_reald_reald_reald_reald

def SWIG_TypeQuery(*args):
  return _template_typedef.SWIG_TypeQuery(*args)
SWIG_TypeQuery = _template_typedef.SWIG_TypeQuery
# This file is compatible with both classic and new-style classes.


