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
            fp, pathname, description = imp.find_module('_virtual_vs_nonvirtual_base', [dirname(__file__)])
        except ImportError:
            import _virtual_vs_nonvirtual_base
            return _virtual_vs_nonvirtual_base
        if fp is not None:
            try:
                _mod = imp.load_module('_virtual_vs_nonvirtual_base', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _virtual_vs_nonvirtual_base = swig_import_helper()
    del swig_import_helper
else:
    import _virtual_vs_nonvirtual_base
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


class SimpleVirtual(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimpleVirtual, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimpleVirtual, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    def implementMe(self): return _virtual_vs_nonvirtual_base.SimpleVirtual_implementMe(self)
    __swig_destroy__ = _virtual_vs_nonvirtual_base.delete_SimpleVirtual
    __del__ = lambda self : None;
SimpleVirtual_swigregister = _virtual_vs_nonvirtual_base.SimpleVirtual_swigregister
SimpleVirtual_swigregister(SimpleVirtual)

class SimpleNonVirtual(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimpleNonVirtual, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimpleNonVirtual, name)
    __repr__ = _swig_repr
    def dummy(self): return _virtual_vs_nonvirtual_base.SimpleNonVirtual_dummy(self)
    def __init__(self): 
        this = _virtual_vs_nonvirtual_base.new_SimpleNonVirtual()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _virtual_vs_nonvirtual_base.delete_SimpleNonVirtual
    __del__ = lambda self : None;
SimpleNonVirtual_swigregister = _virtual_vs_nonvirtual_base.SimpleNonVirtual_swigregister
SimpleNonVirtual_swigregister(SimpleNonVirtual)

class SimpleReturnClass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimpleReturnClass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SimpleReturnClass, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _virtual_vs_nonvirtual_base.new_SimpleReturnClass(*args)
        try: self.this.append(this)
        except: self.this = this
    def get(self): return _virtual_vs_nonvirtual_base.SimpleReturnClass_get(self)
    __swig_destroy__ = _virtual_vs_nonvirtual_base.delete_SimpleReturnClass
    __del__ = lambda self : None;
SimpleReturnClass_swigregister = _virtual_vs_nonvirtual_base.SimpleReturnClass_swigregister
SimpleReturnClass_swigregister(SimpleReturnClass)

class SimpleClassFail(SimpleVirtual):
    __swig_setmethods__ = {}
    for _s in [SimpleVirtual]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimpleClassFail, name, value)
    __swig_getmethods__ = {}
    for _s in [SimpleVirtual]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimpleClassFail, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _virtual_vs_nonvirtual_base.new_SimpleClassFail()
        try: self.this.append(this)
        except: self.this = this
    def getInner(self): return _virtual_vs_nonvirtual_base.SimpleClassFail_getInner(self)
    def implementMe(self): return _virtual_vs_nonvirtual_base.SimpleClassFail_implementMe(self)
    __swig_destroy__ = _virtual_vs_nonvirtual_base.delete_SimpleClassFail
    __del__ = lambda self : None;
SimpleClassFail_swigregister = _virtual_vs_nonvirtual_base.SimpleClassFail_swigregister
SimpleClassFail_swigregister(SimpleClassFail)

class SimpleClassWork(SimpleNonVirtual):
    __swig_setmethods__ = {}
    for _s in [SimpleNonVirtual]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SimpleClassWork, name, value)
    __swig_getmethods__ = {}
    for _s in [SimpleNonVirtual]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, SimpleClassWork, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _virtual_vs_nonvirtual_base.new_SimpleClassWork()
        try: self.this.append(this)
        except: self.this = this
    def getInner(self): return _virtual_vs_nonvirtual_base.SimpleClassWork_getInner(self)
    def implementMe(self): return _virtual_vs_nonvirtual_base.SimpleClassWork_implementMe(self)
    __swig_destroy__ = _virtual_vs_nonvirtual_base.delete_SimpleClassWork
    __del__ = lambda self : None;
SimpleClassWork_swigregister = _virtual_vs_nonvirtual_base.SimpleClassWork_swigregister
SimpleClassWork_swigregister(SimpleClassWork)

# This file is compatible with both classic and new-style classes.


