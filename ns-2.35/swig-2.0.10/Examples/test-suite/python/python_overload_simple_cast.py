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
            fp, pathname, description = imp.find_module('_python_overload_simple_cast', [dirname(__file__)])
        except ImportError:
            import _python_overload_simple_cast
            return _python_overload_simple_cast
        if fp is not None:
            try:
                _mod = imp.load_module('_python_overload_simple_cast', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _python_overload_simple_cast = swig_import_helper()
    del swig_import_helper
else:
    import _python_overload_simple_cast
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
    __repr__ = _swig_repr
    def __init__(self): 
        this = _python_overload_simple_cast.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _python_overload_simple_cast.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _python_overload_simple_cast.Foo_swigregister
Foo_swigregister(Foo)

class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def __init__(self, i=0): 
        this = _python_overload_simple_cast.new_Bar(i)
        try: self.this.append(this)
        except: self.this = this
    __swig_getmethods__["foo"] = lambda x: _python_overload_simple_cast.Bar_foo
    if _newclass:foo = staticmethod(_python_overload_simple_cast.Bar_foo)
    __swig_setmethods__["num"] = _python_overload_simple_cast.Bar_num_set
    __swig_getmethods__["num"] = _python_overload_simple_cast.Bar_num_get
    if _newclass:num = _swig_property(_python_overload_simple_cast.Bar_num_get, _python_overload_simple_cast.Bar_num_set)
    __swig_destroy__ = _python_overload_simple_cast.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _python_overload_simple_cast.Bar_swigregister
Bar_swigregister(Bar)

def Bar_foo(a=0, b=0):
  return _python_overload_simple_cast.Bar_foo(a, b)
Bar_foo = _python_overload_simple_cast.Bar_foo


def foo(*args):
  return _python_overload_simple_cast.foo(*args)
foo = _python_overload_simple_cast.foo

def blah(*args):
  return _python_overload_simple_cast.blah(*args)
blah = _python_overload_simple_cast.blah
class Spam(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Spam, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Spam, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _python_overload_simple_cast.new_Spam(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_getmethods__["type"] = _python_overload_simple_cast.Spam_type_get
    if _newclass:type = _swig_property(_python_overload_simple_cast.Spam_type_get)
    def foo(self, *args): return _python_overload_simple_cast.Spam_foo(self, *args)
    __swig_getmethods__["bar"] = lambda x: _python_overload_simple_cast.Spam_bar
    if _newclass:bar = staticmethod(_python_overload_simple_cast.Spam_bar)
    __swig_destroy__ = _python_overload_simple_cast.delete_Spam
    __del__ = lambda self : None;
Spam_swigregister = _python_overload_simple_cast.Spam_swigregister
Spam_swigregister(Spam)

def Spam_bar(*args):
  return _python_overload_simple_cast.Spam_bar(*args)
Spam_bar = _python_overload_simple_cast.Spam_bar


def fbool(*args):
  return _python_overload_simple_cast.fbool(*args)
fbool = _python_overload_simple_cast.fbool

def fint(*args):
  return _python_overload_simple_cast.fint(*args)
fint = _python_overload_simple_cast.fint

def fdouble(*args):
  return _python_overload_simple_cast.fdouble(*args)
fdouble = _python_overload_simple_cast.fdouble

def num(*args):
  return _python_overload_simple_cast.num(*args)
num = _python_overload_simple_cast.num

def fid(*args):
  return _python_overload_simple_cast.fid(*args)
fid = _python_overload_simple_cast.fid

def ull(*args):
  return _python_overload_simple_cast.ull(*args)
ull = _python_overload_simple_cast.ull

def ll(*args):
  return _python_overload_simple_cast.ll(*args)
ll = _python_overload_simple_cast.ll

def malloc_void(*args):
  return _python_overload_simple_cast.malloc_void(*args)
malloc_void = _python_overload_simple_cast.malloc_void

def free_void(*args):
  return _python_overload_simple_cast.free_void(*args)
free_void = _python_overload_simple_cast.free_void
class ClassA(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ClassA, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ClassA, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _python_overload_simple_cast.new_ClassA()
        try: self.this.append(this)
        except: self.this = this
    def method1(self, *args): return _python_overload_simple_cast.ClassA_method1(self, *args)
    __swig_destroy__ = _python_overload_simple_cast.delete_ClassA
    __del__ = lambda self : None;
ClassA_swigregister = _python_overload_simple_cast.ClassA_swigregister
ClassA_swigregister(ClassA)

class Graph(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Graph, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Graph, name)
    __repr__ = _swig_repr
    __swig_setmethods__["val"] = _python_overload_simple_cast.Graph_val_set
    __swig_getmethods__["val"] = _python_overload_simple_cast.Graph_val_get
    if _newclass:val = _swig_property(_python_overload_simple_cast.Graph_val_get, _python_overload_simple_cast.Graph_val_set)
    def __init__(self, *args): 
        this = _python_overload_simple_cast.new_Graph(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _python_overload_simple_cast.delete_Graph
    __del__ = lambda self : None;
Graph_swigregister = _python_overload_simple_cast.Graph_swigregister
Graph_swigregister(Graph)


def int_object(*args):
  return _python_overload_simple_cast.int_object(*args)
int_object = _python_overload_simple_cast.int_object
# This file is compatible with both classic and new-style classes.

