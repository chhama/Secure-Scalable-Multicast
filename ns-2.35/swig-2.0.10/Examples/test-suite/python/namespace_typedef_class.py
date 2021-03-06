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
            fp, pathname, description = imp.find_module('_namespace_typedef_class', [dirname(__file__)])
        except ImportError:
            import _namespace_typedef_class
            return _namespace_typedef_class
        if fp is not None:
            try:
                _mod = imp.load_module('_namespace_typedef_class', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _namespace_typedef_class = swig_import_helper()
    del swig_import_helper
else:
    import _namespace_typedef_class
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


class S1(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, S1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, S1, name)
    __repr__ = _swig_repr
    __swig_setmethods__["n"] = _namespace_typedef_class.S1_n_set
    __swig_getmethods__["n"] = _namespace_typedef_class.S1_n_get
    if _newclass:n = _swig_property(_namespace_typedef_class.S1_n_get, _namespace_typedef_class.S1_n_set)
    def __init__(self): 
        this = _namespace_typedef_class.new_S1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _namespace_typedef_class.delete_S1
    __del__ = lambda self : None;
S1_swigregister = _namespace_typedef_class.S1_swigregister
S1_swigregister(S1)

class S2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, S2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, S2, name)
    __repr__ = _swig_repr
    __swig_setmethods__["n"] = _namespace_typedef_class.S2_n_set
    __swig_getmethods__["n"] = _namespace_typedef_class.S2_n_get
    if _newclass:n = _swig_property(_namespace_typedef_class.S2_n_get, _namespace_typedef_class.S2_n_set)
    def __init__(self): 
        this = _namespace_typedef_class.new_S2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _namespace_typedef_class.delete_S2
    __del__ = lambda self : None;
S2_swigregister = _namespace_typedef_class.S2_swigregister
S2_swigregister(S2)

# This file is compatible with both classic and new-style classes.


