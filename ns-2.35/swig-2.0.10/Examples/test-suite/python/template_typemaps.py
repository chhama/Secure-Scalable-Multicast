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
            fp, pathname, description = imp.find_module('_template_typemaps', [dirname(__file__)])
        except ImportError:
            import _template_typemaps
            return _template_typemaps
        if fp is not None:
            try:
                _mod = imp.load_module('_template_typemaps', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_typemaps = swig_import_helper()
    del swig_import_helper
else:
    import _template_typemaps
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


class Foo_I1(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo_I1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo_I1, name)
    __repr__ = _swig_repr
    __swig_setmethods__["val"] = _template_typemaps.Foo_I1_val_set
    __swig_getmethods__["val"] = _template_typemaps.Foo_I1_val_get
    if _newclass:val = _swig_property(_template_typemaps.Foo_I1_val_get, _template_typemaps.Foo_I1_val_set)
    def get_value(self): return _template_typemaps.Foo_I1_get_value(self)
    def set_value(self, *args): return _template_typemaps.Foo_I1_set_value(self, *args)
    def __init__(self): 
        this = _template_typemaps.new_Foo_I1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typemaps.delete_Foo_I1
    __del__ = lambda self : None;
Foo_I1_swigregister = _template_typemaps.Foo_I1_swigregister
Foo_I1_swigregister(Foo_I1)

class Foo_I2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo_I2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo_I2, name)
    __repr__ = _swig_repr
    __swig_setmethods__["val"] = _template_typemaps.Foo_I2_val_set
    __swig_getmethods__["val"] = _template_typemaps.Foo_I2_val_get
    if _newclass:val = _swig_property(_template_typemaps.Foo_I2_val_get, _template_typemaps.Foo_I2_val_set)
    def get_value(self): return _template_typemaps.Foo_I2_get_value(self)
    def set_value(self, *args): return _template_typemaps.Foo_I2_set_value(self, *args)
    def __init__(self): 
        this = _template_typemaps.new_Foo_I2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typemaps.delete_Foo_I2
    __del__ = lambda self : None;
Foo_I2_swigregister = _template_typemaps.Foo_I2_swigregister
Foo_I2_swigregister(Foo_I2)


def bar(*args):
  return _template_typemaps.bar(*args)
bar = _template_typemaps.bar
# This file is compatible with both classic and new-style classes.


