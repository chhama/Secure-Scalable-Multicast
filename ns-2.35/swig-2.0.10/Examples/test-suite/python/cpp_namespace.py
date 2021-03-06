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
            fp, pathname, description = imp.find_module('_cpp_namespace', [dirname(__file__)])
        except ImportError:
            import _cpp_namespace
            return _cpp_namespace
        if fp is not None:
            try:
                _mod = imp.load_module('_cpp_namespace', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _cpp_namespace = swig_import_helper()
    del swig_import_helper
else:
    import _cpp_namespace
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



def fact(*args):
  return _cpp_namespace.fact(*args)
fact = _cpp_namespace.fact
class Test(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _cpp_namespace.new_Test()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _cpp_namespace.delete_Test
    __del__ = lambda self : None;
    def method(self): return _cpp_namespace.Test_method(self)
Test_swigregister = _cpp_namespace.Test_swigregister
Test_swigregister(Test)
cvar = _cpp_namespace.cvar


def weird(*args):
  return _cpp_namespace.weird(*args)
weird = _cpp_namespace.weird

def do_method(*args):
  return _cpp_namespace.do_method(*args)
do_method = _cpp_namespace.do_method

def do_method2(*args):
  return _cpp_namespace.do_method2(*args)
do_method2 = _cpp_namespace.do_method2
class Test2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test2, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _cpp_namespace.delete_Test2
    __del__ = lambda self : None;
    def method(self): return _cpp_namespace.Test2_method(self)
    def __init__(self): 
        this = _cpp_namespace.new_Test2()
        try: self.this.append(this)
        except: self.this = this
Test2_swigregister = _cpp_namespace.Test2_swigregister
Test2_swigregister(Test2)

class Test3(Test2):
    __swig_setmethods__ = {}
    for _s in [Test2]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test3, name, value)
    __swig_getmethods__ = {}
    for _s in [Test2]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Test3, name)
    __repr__ = _swig_repr
    def method(self): return _cpp_namespace.Test3_method(self)
    def __init__(self): 
        this = _cpp_namespace.new_Test3()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _cpp_namespace.delete_Test3
    __del__ = lambda self : None;
Test3_swigregister = _cpp_namespace.Test3_swigregister
Test3_swigregister(Test3)

class Test4(Test3):
    __swig_setmethods__ = {}
    for _s in [Test3]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test4, name, value)
    __swig_getmethods__ = {}
    for _s in [Test3]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Test4, name)
    __repr__ = _swig_repr
    def method(self): return _cpp_namespace.Test4_method(self)
    def __init__(self): 
        this = _cpp_namespace.new_Test4()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _cpp_namespace.delete_Test4
    __del__ = lambda self : None;
Test4_swigregister = _cpp_namespace.Test4_swigregister
Test4_swigregister(Test4)


def foo3(*args):
  return _cpp_namespace.foo3(*args)
foo3 = _cpp_namespace.foo3
class Test5(Test3):
    __swig_setmethods__ = {}
    for _s in [Test3]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test5, name, value)
    __swig_getmethods__ = {}
    for _s in [Test3]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Test5, name)
    __repr__ = _swig_repr
    def method(self): return _cpp_namespace.Test5_method(self)
    def __init__(self): 
        this = _cpp_namespace.new_Test5()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _cpp_namespace.delete_Test5
    __del__ = lambda self : None;
Test5_swigregister = _cpp_namespace.Test5_swigregister
Test5_swigregister(Test5)


def do_method3(*args):
  return _cpp_namespace.do_method3(*args)
do_method3 = _cpp_namespace.do_method3
# This file is compatible with both classic and new-style classes.


