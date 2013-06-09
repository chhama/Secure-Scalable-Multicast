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
            fp, pathname, description = imp.find_module('_abstract_inherit_ok', [dirname(__file__)])
        except ImportError:
            import _abstract_inherit_ok
            return _abstract_inherit_ok
        if fp is not None:
            try:
                _mod = imp.load_module('_abstract_inherit_ok', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _abstract_inherit_ok = swig_import_helper()
    del swig_import_helper
else:
    import _abstract_inherit_ok
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


class Foo(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _abstract_inherit_ok.delete_Foo
    __del__ = lambda self : None;
    def blah(self): return _abstract_inherit_ok.Foo_blah(self)
Foo_swigregister = _abstract_inherit_ok.Foo_swigregister
Foo_swigregister(Foo)

class Spam(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Spam, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Spam, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _abstract_inherit_ok.new_Spam()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _abstract_inherit_ok.delete_Spam
    __del__ = lambda self : None;
Spam_swigregister = _abstract_inherit_ok.Spam_swigregister
Spam_swigregister(Spam)

# This file is compatible with both classic and new-style classes.

