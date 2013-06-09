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
            fp, pathname, description = imp.find_module('_nested_comment', [dirname(__file__)])
        except ImportError:
            import _nested_comment
            return _nested_comment
        if fp is not None:
            try:
                _mod = imp.load_module('_nested_comment', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _nested_comment = swig_import_helper()
    del swig_import_helper
else:
    import _nested_comment
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


class s2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, s2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, s2, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _nested_comment.new_s2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _nested_comment.delete_s2
    __del__ = lambda self : None;
s2_swigregister = _nested_comment.s2_swigregister
s2_swigregister(s2)

class a(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, a, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, a, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _nested_comment.new_a()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _nested_comment.delete_a
    __del__ = lambda self : None;
a_swigregister = _nested_comment.a_swigregister
a_swigregister(a)

# This file is compatible with both classic and new-style classes.


