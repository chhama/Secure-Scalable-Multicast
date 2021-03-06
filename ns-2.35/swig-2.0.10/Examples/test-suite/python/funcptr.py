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
            fp, pathname, description = imp.find_module('_funcptr', [dirname(__file__)])
        except ImportError:
            import _funcptr
            return _funcptr
        if fp is not None:
            try:
                _mod = imp.load_module('_funcptr', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _funcptr = swig_import_helper()
    del swig_import_helper
else:
    import _funcptr
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



def distance(*args):
  return _funcptr.distance(*args)
distance = _funcptr.distance

def do_op(*args):
  return _funcptr.do_op(*args)
do_op = _funcptr.do_op

def add(*args):
  return _funcptr.add(*args)
add = _funcptr.add

def subtract(*args):
  return _funcptr.subtract(*args)
subtract = _funcptr.subtract

def multiply(*args):
  return _funcptr.multiply(*args)
multiply = _funcptr.multiply

def nowt():
  return _funcptr.nowt()
nowt = _funcptr.nowt

def nowt2():
  return _funcptr.nowt2()
nowt2 = _funcptr.nowt2
class MyStruct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MyStruct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MyStruct, name)
    __repr__ = _swig_repr
    __swig_setmethods__["i"] = _funcptr.MyStruct_i_set
    __swig_getmethods__["i"] = _funcptr.MyStruct_i_get
    if _newclass:i = _swig_property(_funcptr.MyStruct_i_get, _funcptr.MyStruct_i_set)
    def __init__(self): 
        this = _funcptr.new_MyStruct()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _funcptr.delete_MyStruct
    __del__ = lambda self : None;
MyStruct_swigregister = _funcptr.MyStruct_swigregister
MyStruct_swigregister(MyStruct)


def mystructptr():
  return _funcptr.mystructptr()
mystructptr = _funcptr.mystructptr
# This file is compatible with both classic and new-style classes.

cvar = _funcptr.cvar

