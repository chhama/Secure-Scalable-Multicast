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
            fp, pathname, description = imp.find_module('_template_typedef_funcptr', [dirname(__file__)])
        except ImportError:
            import _template_typedef_funcptr
            return _template_typedef_funcptr
        if fp is not None:
            try:
                _mod = imp.load_module('_template_typedef_funcptr', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _template_typedef_funcptr = swig_import_helper()
    del swig_import_helper
else:
    import _template_typedef_funcptr
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


class MCContract(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MCContract, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MCContract, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _template_typedef_funcptr.new_MCContract()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_funcptr.delete_MCContract
    __del__ = lambda self : None;
MCContract_swigregister = _template_typedef_funcptr.MCContract_swigregister
MCContract_swigregister(MCContract)

class MCContractFactory(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MCContractFactory, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MCContractFactory, name)
    __repr__ = _swig_repr
    __swig_getmethods__["getInstance"] = lambda x: _template_typedef_funcptr.MCContractFactory_getInstance
    if _newclass:getInstance = staticmethod(_template_typedef_funcptr.MCContractFactory_getInstance)
    def __init__(self): 
        this = _template_typedef_funcptr.new_MCContractFactory()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_funcptr.delete_MCContractFactory
    __del__ = lambda self : None;
MCContractFactory_swigregister = _template_typedef_funcptr.MCContractFactory_swigregister
MCContractFactory_swigregister(MCContractFactory)

def MCContractFactory_getInstance():
  return _template_typedef_funcptr.MCContractFactory_getInstance()
MCContractFactory_getInstance = _template_typedef_funcptr.MCContractFactory_getInstance

class MCContractFactory2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MCContractFactory2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MCContractFactory2, name)
    __repr__ = _swig_repr
    __swig_getmethods__["getInstance"] = lambda x: _template_typedef_funcptr.MCContractFactory2_getInstance
    if _newclass:getInstance = staticmethod(_template_typedef_funcptr.MCContractFactory2_getInstance)
    def __init__(self): 
        this = _template_typedef_funcptr.new_MCContractFactory2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _template_typedef_funcptr.delete_MCContractFactory2
    __del__ = lambda self : None;
MCContractFactory2_swigregister = _template_typedef_funcptr.MCContractFactory2_swigregister
MCContractFactory2_swigregister(MCContractFactory2)

def MCContractFactory2_getInstance():
  return _template_typedef_funcptr.MCContractFactory2_getInstance()
MCContractFactory2_getInstance = _template_typedef_funcptr.MCContractFactory2_getInstance

# This file is compatible with both classic and new-style classes.


