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
            fp, pathname, description = imp.find_module('_rname', [dirname(__file__)])
        except ImportError:
            import _rname
            return _rname
        if fp is not None:
            try:
                _mod = imp.load_module('_rname', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _rname = swig_import_helper()
    del swig_import_helper
else:
    import _rname
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
    def foo_i(self, *args): return _rname.Bar_foo_i(self, *args)
    def foo_d(self, *args): return _rname.Bar_foo_d(self, *args)
    def foo(self, *args): return _rname.Bar_foo(self, *args)
    def foo_u(self, *args): return _rname.Bar_foo_u(self, *args)
    def __init__(self): 
        this = _rname.new_Bar()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rname.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _rname.Bar_swigregister
Bar_swigregister(Bar)


def foo_i(*args):
  return _rname.foo_i(*args)
foo_i = _rname.foo_i

def foo_d(*args):
  return _rname.foo_d(*args)
foo_d = _rname.foo_d

def foo_s(*args):
  return _rname.foo_s(*args)
foo_s = _rname.foo_s

def foo(*args):
  return _rname.foo(*args)
foo = _rname.foo
class RenamedBase(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, RenamedBase, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, RenamedBase, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rname.new_RenamedBase()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rname.delete_RenamedBase
    __del__ = lambda self : None;
    def fn(self, *args): return _rname.RenamedBase_fn(self, *args)
    def newname(self, *args): return _rname.RenamedBase_newname(self, *args)
RenamedBase_swigregister = _rname.RenamedBase_swigregister
RenamedBase_swigregister(RenamedBase)

class RenamedDerived(RenamedBase):
    __swig_setmethods__ = {}
    for _s in [RenamedBase]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, RenamedDerived, name, value)
    __swig_getmethods__ = {}
    for _s in [RenamedBase]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, RenamedDerived, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _rname.new_RenamedDerived()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _rname.delete_RenamedDerived
    __del__ = lambda self : None;
    def Xfunc(self, *args): return _rname.RenamedDerived_Xfunc(self, *args)
    def newname(self, *args): return _rname.RenamedDerived_newname(self, *args)
RenamedDerived_swigregister = _rname.RenamedDerived_swigregister
RenamedDerived_swigregister(RenamedDerived)

# This file is compatible with both classic and new-style classes.


