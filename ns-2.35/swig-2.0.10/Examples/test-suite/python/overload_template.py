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
            fp, pathname, description = imp.find_module('_overload_template', [dirname(__file__)])
        except ImportError:
            import _overload_template
            return _overload_template
        if fp is not None:
            try:
                _mod = imp.load_module('_overload_template', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _overload_template = swig_import_helper()
    del swig_import_helper
else:
    import _overload_template
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



def foo(*args):
  return _overload_template.foo(*args)
foo = _overload_template.foo

def maximum(*args):
  return _overload_template.maximum(*args)
maximum = _overload_template.maximum

def mix1(*args):
  return _overload_template.mix1(*args)
mix1 = _overload_template.mix1

def mix2(*args):
  return _overload_template.mix2(*args)
mix2 = _overload_template.mix2

def mix3(*args):
  return _overload_template.mix3(*args)
mix3 = _overload_template.mix3

def overtparams1(*args):
  return _overload_template.overtparams1(*args)
overtparams1 = _overload_template.overtparams1

def overtparams2(*args):
  return _overload_template.overtparams2(*args)
overtparams2 = _overload_template.overtparams2

def overloaded(*args):
  return _overload_template.overloaded(*args)
overloaded = _overload_template.overloaded

def overloadedagain(*args):
  return _overload_template.overloadedagain(*args)
overloadedagain = _overload_template.overloadedagain

def xyz():
  return _overload_template.xyz()
xyz = _overload_template.xyz

def xyz_double():
  return _overload_template.xyz_double()
xyz_double = _overload_template.xyz_double

def xyz_int():
  return _overload_template.xyz_int()
xyz_int = _overload_template.xyz_int

def specialization(*args):
  return _overload_template.specialization(*args)
specialization = _overload_template.specialization
class Klass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Klass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Klass, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _overload_template.new_Klass()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _overload_template.delete_Klass
    __del__ = lambda self : None;
Klass_swigregister = _overload_template.Klass_swigregister
Klass_swigregister(Klass)


def overload(*args):
  return _overload_template.overload(*args)
overload = _overload_template.overload

def nsoverload(*args):
  return _overload_template.nsoverload(*args)
nsoverload = _overload_template.nsoverload
class A(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    __repr__ = _swig_repr
    __swig_getmethods__["foo"] = lambda x: _overload_template.A_foo
    if _newclass:foo = staticmethod(_overload_template.A_foo)
    def __init__(self): 
        this = _overload_template.new_A()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _overload_template.delete_A
    __del__ = lambda self : None;
A_swigregister = _overload_template.A_swigregister
A_swigregister(A)

def A_foo(*args):
  return _overload_template.A_foo(*args)
A_foo = _overload_template.A_foo

class B(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, B, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, B, name)
    __repr__ = _swig_repr
    def foo(self, *args): return _overload_template.B_foo(self, *args)
    def __init__(self): 
        this = _overload_template.new_B()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _overload_template.delete_B
    __del__ = lambda self : None;
B_swigregister = _overload_template.B_swigregister
B_swigregister(B)

class Bar_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar_d, name)
    __repr__ = _swig_repr
    def foo(self, *args): return _overload_template.Bar_d_foo(self, *args)
    def __init__(self): 
        this = _overload_template.new_Bar_d()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _overload_template.delete_Bar_d
    __del__ = lambda self : None;
Bar_d_swigregister = _overload_template.Bar_d_swigregister
Bar_d_swigregister(Bar_d)

class Foo_d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Foo_d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Foo_d, name)
    __repr__ = _swig_repr
    def bar(self, *args): return _overload_template.Foo_d_bar(self, *args)
    def __init__(self): 
        this = _overload_template.new_Foo_d()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _overload_template.delete_Foo_d
    __del__ = lambda self : None;
Foo_d_swigregister = _overload_template.Foo_d_swigregister
Foo_d_swigregister(Foo_d)

# This file is compatible with both classic and new-style classes.


