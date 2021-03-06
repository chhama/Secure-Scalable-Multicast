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
            fp, pathname, description = imp.find_module('_template_enum', [dirname(__file__)])
        except ImportError:
            import _template_enum
            return _template_enum
        if fp is not None:
            try:
                _mod = imp.load_module('_template_enum', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_enum = swig_import_helper()
    del swig_import_helper
else:
    import _template_enum
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


class foo_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, foo_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, foo_i, name)
    __repr__ = _swig_repr
    FOO = _template_enum.foo_i_FOO
    BAR = _template_enum.foo_i_BAR
    def __init__(self): 
        this = _template_enum.new_foo_i()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_enum.delete_foo_i
    __del__ = lambda self : None;
foo_i_swigregister = _template_enum.foo_i_swigregister
foo_i_swigregister(foo_i)

class foo_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, foo_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, foo_d, name)
    __repr__ = _swig_repr
    FOO = _template_enum.foo_d_FOO
    BAR = _template_enum.foo_d_BAR
    def __init__(self): 
        this = _template_enum.new_foo_d()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_enum.delete_foo_d
    __del__ = lambda self : None;
foo_d_swigregister = _template_enum.foo_d_swigregister
foo_d_swigregister(foo_d)

class RGBTraits(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, RGBTraits, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, RGBTraits, name)
    __repr__ = _swig_repr
    NumComponents = _template_enum.RGBTraits_NumComponents
    def __init__(self): 
        this = _template_enum.new_RGBTraits()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_enum.delete_RGBTraits
    __del__ = lambda self : None;
RGBTraits_swigregister = _template_enum.RGBTraits_swigregister
RGBTraits_swigregister(RGBTraits)

class Color(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Color, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Color, name)
    __repr__ = _swig_repr
    NumComponents = _template_enum.Color_NumComponents
    __swig_setmethods__["data"] = _template_enum.Color_data_set
    __swig_getmethods__["data"] = _template_enum.Color_data_get
    if _newclass:data = _swig_property(_template_enum.Color_data_get, _template_enum.Color_data_set)
    def __init__(self): 
        this = _template_enum.new_Color()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_enum.delete_Color
    __del__ = lambda self : None;
Color_swigregister = _template_enum.Color_swigregister
Color_swigregister(Color)

# This file is compatible with both classic and new-style classes.


