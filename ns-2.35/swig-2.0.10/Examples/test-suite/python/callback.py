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
            fp, pathname, description = imp.find_module('_callback', [dirname(__file__)])
        except ImportError:
            import _callback
            return _callback
        if fp is not None:
            try:
                _mod = imp.load_module('_callback', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _callback = swig_import_helper()
    del swig_import_helper
else:
    import _callback
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


foo_cb_ptr = _callback.foo_cb_ptr

def foo(*args):
  return _callback.foo(*args)
foo = _callback.foo
foof_cb_ptr = _callback.foof_cb_ptr

def foof(*args):
  return _callback.foof(*args)
foof = _callback.foof
class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    __swig_getmethods__["bar"] = lambda x: _callback.A_bar
    if _newclass:bar = staticmethod(_callback.A_bar)
    foom_cb_ptr = _callback.A_foom_cb_ptr
    def foom(self, *args): return _callback.A_foom(self, *args)
    def __init__(self): 
        this = _callback.new_A()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _callback.delete_A
    __del__ = lambda self : None;
A_swigregister = _callback.A_swigregister
A_swigregister(A)

def A_bar(*args):
  return _callback.A_bar(*args)
A_bar = _callback.A_bar


def foobar(*args):
  return _callback.foobar(*args)
foobar = _callback.foobar

def foobarm(*args):
  return _callback.foobarm(*args)
foobarm = _callback.foobarm
foo_i_Cb_Ptr = _callback.foo_i_Cb_Ptr

def foo_i(*args):
  return _callback.foo_i(*args)
foo_i = _callback.foo_i

def foobar_i(*args):
  return _callback.foobar_i(*args)
foobar_i = _callback.foobar_i
foo_d_Cb_Ptr = _callback.foo_d_Cb_Ptr

def foo_d(*args):
  return _callback.foo_d(*args)
foo_d = _callback.foo_d

def foobar_d(*args):
  return _callback.foobar_d(*args)
foobar_d = _callback.foobar_d

def ident_d(*args):
  return _callback.ident_d(*args)
ident_d = _callback.ident_d
# This file is compatible with both classic and new-style classes.


