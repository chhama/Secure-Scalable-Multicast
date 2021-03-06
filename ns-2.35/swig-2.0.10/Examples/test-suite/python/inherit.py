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
            fp, pathname, description = imp.find_module('_inherit', [dirname(__file__)])
        except ImportError:
            import _inherit
            return _inherit
        if fp is not None:
            try:
                _mod = imp.load_module('_inherit', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _inherit = swig_import_helper()
    del swig_import_helper
else:
    import _inherit
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



def Foo():
  return _inherit.Foo()
Foo = _inherit.Foo
class CBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CBase, name)
    __repr__ = _swig_repr
    def Foo(self): return _inherit.CBase_Foo(self)
    def __init__(self): 
        this = _inherit.new_CBase()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit.delete_CBase
    __del__ = lambda self : None;
CBase_swigregister = _inherit.CBase_swigregister
CBase_swigregister(CBase)

class CDerived(CBase):
    __swig_setmethods__ = {}
    for _s in [CBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, CDerived, name, value)
    __swig_getmethods__ = {}
    for _s in [CBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, CDerived, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _inherit.new_CDerived()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inherit.delete_CDerived
    __del__ = lambda self : None;
CDerived_swigregister = _inherit.CDerived_swigregister
CDerived_swigregister(CDerived)

# This file is compatible with both classic and new-style classes.


