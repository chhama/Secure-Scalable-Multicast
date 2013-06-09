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
            fp, pathname, description = imp.find_module('_extend_template_ns', [dirname(__file__)])
        except ImportError:
            import _extend_template_ns
            return _extend_template_ns
        if fp is not None:
            try:
                _mod = imp.load_module('_extend_template_ns', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _extend_template_ns = swig_import_helper()
    del swig_import_helper
else:
    import _extend_template_ns
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


One = _extend_template_ns.One
Two = _extend_template_ns.Two
class Foo_One(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo_One, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo_One, name)
    __repr__ = _swig_repr
    def test1(self, *args): return _extend_template_ns.Foo_One_test1(self, *args)
    def test2(self, *args): return _extend_template_ns.Foo_One_test2(self, *args)
    def __init__(self): 
        this = _extend_template_ns.new_Foo_One()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _extend_template_ns.delete_Foo_One
    __del__ = lambda self : None;
Foo_One_swigregister = _extend_template_ns.Foo_One_swigregister
Foo_One_swigregister(Foo_One)

# This file is compatible with both classic and new-style classes.


