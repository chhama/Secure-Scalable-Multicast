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
            fp, pathname, description = imp.find_module('_template_const_ref', [dirname(__file__)])
        except ImportError:
            import _template_const_ref
            return _template_const_ref
        if fp is not None:
            try:
                _mod = imp.load_module('_template_const_ref', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_const_ref = swig_import_helper()
    del swig_import_helper
else:
    import _template_const_ref
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


class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_const_ref.new_Bar()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_const_ref.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _template_const_ref.Bar_swigregister
Bar_swigregister(Bar)

class Foob(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foob, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foob, name)
    __repr__ = _swig_repr
    def bar(self, *args): return _template_const_ref.Foob_bar(self, *args)
    def __init__(self): 
        this = _template_const_ref.new_Foob()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_const_ref.delete_Foob
    __del__ = lambda self : None;
Foob_swigregister = _template_const_ref.Foob_swigregister
Foob_swigregister(Foob)

class Fooi(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Fooi, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Fooi, name)
    __repr__ = _swig_repr
    def bar(self, *args): return _template_const_ref.Fooi_bar(self, *args)
    def __init__(self): 
        this = _template_const_ref.new_Fooi()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_const_ref.delete_Fooi
    __del__ = lambda self : None;
Fooi_swigregister = _template_const_ref.Fooi_swigregister
Fooi_swigregister(Fooi)

# This file is compatible with both classic and new-style classes.


