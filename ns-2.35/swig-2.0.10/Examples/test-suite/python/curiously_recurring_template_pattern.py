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
            fp, pathname, description = imp.find_module('_curiously_recurring_template_pattern', [dirname(__file__)])
        except ImportError:
            import _curiously_recurring_template_pattern
            return _curiously_recurring_template_pattern
        if fp is not None:
            try:
                _mod = imp.load_module('_curiously_recurring_template_pattern', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _curiously_recurring_template_pattern = swig_import_helper()
    del swig_import_helper
else:
    import _curiously_recurring_template_pattern
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


class basederived(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, basederived, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, basederived, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _curiously_recurring_template_pattern.new_basederived()
        try: self.this.append(this)
        except: self.this = this
    def getBase1Param(self): return _curiously_recurring_template_pattern.basederived_getBase1Param(self)
    def setBase1Param(self, *args): return _curiously_recurring_template_pattern.basederived_setBase1Param(self, *args)
    def getBase2Param(self): return _curiously_recurring_template_pattern.basederived_getBase2Param(self)
    def setBase2Param(self, *args): return _curiously_recurring_template_pattern.basederived_setBase2Param(self, *args)
    __swig_destroy__ = _curiously_recurring_template_pattern.delete_basederived
    __del__ = lambda self : None;
basederived_swigregister = _curiously_recurring_template_pattern.basederived_swigregister
basederived_swigregister(basederived)

class Derived(basederived):
    __swig_setmethods__ = {}
    for _s in [basederived]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Derived, name, value)
    __swig_getmethods__ = {}
    for _s in [basederived]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Derived, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _curiously_recurring_template_pattern.new_Derived()
        try: self.this.append(this)
        except: self.this = this
    def getDerived1Param(self): return _curiously_recurring_template_pattern.Derived_getDerived1Param(self)
    def setDerived1Param(self, *args): return _curiously_recurring_template_pattern.Derived_setDerived1Param(self, *args)
    def getDerived2Param(self): return _curiously_recurring_template_pattern.Derived_getDerived2Param(self)
    def setDerived2Param(self, *args): return _curiously_recurring_template_pattern.Derived_setDerived2Param(self, *args)
    __swig_destroy__ = _curiously_recurring_template_pattern.delete_Derived
    __del__ = lambda self : None;
Derived_swigregister = _curiously_recurring_template_pattern.Derived_swigregister
Derived_swigregister(Derived)

# This file is compatible with both classic and new-style classes.

