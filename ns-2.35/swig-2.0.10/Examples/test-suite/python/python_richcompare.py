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
            fp, pathname, description = imp.find_module('_python_richcompare', [dirname(__file__)])
        except ImportError:
            import _python_richcompare
            return _python_richcompare
        if fp is not None:
            try:
                _mod = imp.load_module('_python_richcompare', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _python_richcompare = swig_import_helper()
    del swig_import_helper
else:
    import _python_richcompare
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


class BaseClass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BaseClass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BaseClass, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _python_richcompare.new_BaseClass(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _python_richcompare.delete_BaseClass
    __del__ = lambda self : None;
    def getValue(self): return _python_richcompare.BaseClass_getValue(self)
    def __lt__(self, *args): return _python_richcompare.BaseClass___lt__(self, *args)
    def __gt__(self, *args): return _python_richcompare.BaseClass___gt__(self, *args)
    def __le__(self, *args): return _python_richcompare.BaseClass___le__(self, *args)
    def __ge__(self, *args): return _python_richcompare.BaseClass___ge__(self, *args)
    def __eq__(self, *args): return _python_richcompare.BaseClass___eq__(self, *args)
    def __ne__(self, *args): return _python_richcompare.BaseClass___ne__(self, *args)
    __swig_setmethods__["i"] = _python_richcompare.BaseClass_i_set
    __swig_getmethods__["i"] = _python_richcompare.BaseClass_i_get
    if _newclass:i = _swig_property(_python_richcompare.BaseClass_i_get, _python_richcompare.BaseClass_i_set)
BaseClass_swigregister = _python_richcompare.BaseClass_swigregister
BaseClass_swigregister(BaseClass)

class SubClassA(BaseClass):
    __swig_setmethods__ = {}
    for _s in [BaseClass]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SubClassA, name, value)
    __swig_getmethods__ = {}
    for _s in [BaseClass]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, SubClassA, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _python_richcompare.new_SubClassA(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _python_richcompare.delete_SubClassA
    __del__ = lambda self : None;
    def __eq__(self, *args): return _python_richcompare.SubClassA___eq__(self, *args)
SubClassA_swigregister = _python_richcompare.SubClassA_swigregister
SubClassA_swigregister(SubClassA)

class SubClassB(BaseClass):
    __swig_setmethods__ = {}
    for _s in [BaseClass]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, SubClassB, name, value)
    __swig_getmethods__ = {}
    for _s in [BaseClass]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, SubClassB, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _python_richcompare.new_SubClassB(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _python_richcompare.delete_SubClassB
    __del__ = lambda self : None;
    def __eq__(self, *args): return _python_richcompare.SubClassB___eq__(self, *args)
SubClassB_swigregister = _python_richcompare.SubClassB_swigregister
SubClassB_swigregister(SubClassB)

# This file is compatible with both classic and new-style classes.


