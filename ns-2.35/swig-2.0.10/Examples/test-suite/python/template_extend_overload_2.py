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
            fp, pathname, description = imp.find_module('_template_extend_overload_2', [dirname(__file__)])
        except ImportError:
            import _template_extend_overload_2
            return _template_extend_overload_2
        if fp is not None:
            try:
                _mod = imp.load_module('_template_extend_overload_2', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_extend_overload_2 = swig_import_helper()
    del swig_import_helper
else:
    import _template_extend_overload_2
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


class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    def hi(self, *args): return _template_extend_overload_2.A_hi(self, *args)
    def __init__(self, *args): 
        this = _template_extend_overload_2.new_A(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_extend_overload_2.delete_A
    __del__ = lambda self : None;
A_swigregister = _template_extend_overload_2.A_swigregister
A_swigregister(A)

class AT_double(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, AT_double, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, AT_double, name)
    __repr__ = _swig_repr
    def hi(self, *args): return _template_extend_overload_2.AT_double_hi(self, *args)
    def __init__(self, *args): 
        this = _template_extend_overload_2.new_AT_double(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_extend_overload_2.delete_AT_double
    __del__ = lambda self : None;
AT_double_swigregister = _template_extend_overload_2.AT_double_swigregister
AT_double_swigregister(AT_double)

class BT_double(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BT_double, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BT_double, name)
    __repr__ = _swig_repr
    def hi(self, *args): return _template_extend_overload_2.BT_double_hi(self, *args)
    def __init__(self, *args): 
        this = _template_extend_overload_2.new_BT_double(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_extend_overload_2.delete_BT_double
    __del__ = lambda self : None;
BT_double_swigregister = _template_extend_overload_2.BT_double_swigregister
BT_double_swigregister(BT_double)

# This file is compatible with both classic and new-style classes.


