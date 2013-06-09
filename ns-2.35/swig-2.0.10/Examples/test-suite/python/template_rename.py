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
            fp, pathname, description = imp.find_module('_template_rename', [dirname(__file__)])
        except ImportError:
            import _template_rename
            return _template_rename
        if fp is not None:
            try:
                _mod = imp.load_module('_template_rename', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_rename = swig_import_helper()
    del swig_import_helper
else:
    import _template_rename
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


class iFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, iFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, iFoo, name)
    __repr__ = _swig_repr
    def blah_test(self, *args): return _template_rename.iFoo_blah_test(self, *args)
    def spam_test(self, *args): return _template_rename.iFoo_spam_test(self, *args)
    def groki_test(self, *args): return _template_rename.iFoo_groki_test(self, *args)
    def __init__(self): 
        this = _template_rename.new_iFoo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_rename.delete_iFoo
    __del__ = lambda self : None;
iFoo_swigregister = _template_rename.iFoo_swigregister
iFoo_swigregister(iFoo)

class dFoo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, dFoo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, dFoo, name)
    __repr__ = _swig_repr
    def blah_test(self, *args): return _template_rename.dFoo_blah_test(self, *args)
    def spam(self, *args): return _template_rename.dFoo_spam(self, *args)
    def grok_test(self, *args): return _template_rename.dFoo_grok_test(self, *args)
    def __init__(self): 
        this = _template_rename.new_dFoo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_rename.delete_dFoo
    __del__ = lambda self : None;
dFoo_swigregister = _template_rename.dFoo_swigregister
dFoo_swigregister(dFoo)

class Flow(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Flow, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Flow, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _template_rename.new_Flow(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_rename.delete_Flow
    __del__ = lambda self : None;
Flow_swigregister = _template_rename.Flow_swigregister
Flow_swigregister(Flow)

class VectFlow(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, VectFlow, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, VectFlow, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_rename.new_VectFlow()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_rename.delete_VectFlow
    __del__ = lambda self : None;
VectFlow_swigregister = _template_rename.VectFlow_swigregister
VectFlow_swigregister(VectFlow)

# This file is compatible with both classic and new-style classes.

