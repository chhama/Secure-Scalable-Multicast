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
            fp, pathname, description = imp.find_module('_template_forward', [dirname(__file__)])
        except ImportError:
            import _template_forward
            return _template_forward
        if fp is not None:
            try:
                _mod = imp.load_module('_template_forward', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_forward = swig_import_helper()
    del swig_import_helper
else:
    import _template_forward
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



def test1(*args):
  return _template_forward.test1(*args)
test1 = _template_forward.test1

def test2():
  return _template_forward.test2()
test2 = _template_forward.test2
class Describable(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Describable, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Describable, name)
    __repr__ = _swig_repr
    def describe(self): return _template_forward.Describable_describe(self)
    def __init__(self): 
        this = _template_forward.new_Describable()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_forward.delete_Describable
    __del__ = lambda self : None;
Describable_swigregister = _template_forward.Describable_swigregister
Describable_swigregister(Describable)

class LinearOpBase_double(Describable):
    __swig_setmethods__ = {}
    for _s in [Describable]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, LinearOpBase_double, name, value)
    __swig_getmethods__ = {}
    for _s in [Describable]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, LinearOpBase_double, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_forward.new_LinearOpBase_double()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_forward.delete_LinearOpBase_double
    __del__ = lambda self : None;
LinearOpBase_double_swigregister = _template_forward.LinearOpBase_double_swigregister
LinearOpBase_double_swigregister(LinearOpBase_double)

class VectorBase_double(LinearOpBase_double):
    __swig_setmethods__ = {}
    for _s in [LinearOpBase_double]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, VectorBase_double, name, value)
    __swig_getmethods__ = {}
    for _s in [LinearOpBase_double]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, VectorBase_double, name)
    __repr__ = _swig_repr
    def describe(self): return _template_forward.VectorBase_double_describe(self)
    def __init__(self): 
        this = _template_forward.new_VectorBase_double()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_forward.delete_VectorBase_double
    __del__ = lambda self : None;
VectorBase_double_swigregister = _template_forward.VectorBase_double_swigregister
VectorBase_double_swigregister(VectorBase_double)

class LinearOpBase_int(Describable):
    __swig_setmethods__ = {}
    for _s in [Describable]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, LinearOpBase_int, name, value)
    __swig_getmethods__ = {}
    for _s in [Describable]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, LinearOpBase_int, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_forward.new_LinearOpBase_int()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_forward.delete_LinearOpBase_int
    __del__ = lambda self : None;
LinearOpBase_int_swigregister = _template_forward.LinearOpBase_int_swigregister
LinearOpBase_int_swigregister(LinearOpBase_int)

class VectorBase_int(LinearOpBase_int):
    __swig_setmethods__ = {}
    for _s in [LinearOpBase_int]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, VectorBase_int, name, value)
    __swig_getmethods__ = {}
    for _s in [LinearOpBase_int]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, VectorBase_int, name)
    __repr__ = _swig_repr
    def describe(self): return _template_forward.VectorBase_int_describe(self)
    def __init__(self): 
        this = _template_forward.new_VectorBase_int()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_forward.delete_VectorBase_int
    __del__ = lambda self : None;
VectorBase_int_swigregister = _template_forward.VectorBase_int_swigregister
VectorBase_int_swigregister(VectorBase_int)

# This file is compatible with both classic and new-style classes.

