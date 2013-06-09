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
            fp, pathname, description = imp.find_module('_smart_pointer_multi_typedef', [dirname(__file__)])
        except ImportError:
            import _smart_pointer_multi_typedef
            return _smart_pointer_multi_typedef
        if fp is not None:
            try:
                _mod = imp.load_module('_smart_pointer_multi_typedef', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _smart_pointer_multi_typedef = swig_import_helper()
    del swig_import_helper
else:
    import _smart_pointer_multi_typedef
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
    __swig_setmethods__["x"] = _smart_pointer_multi_typedef.Foo_x_set
    __swig_getmethods__["x"] = _smart_pointer_multi_typedef.Foo_x_get
    if _newclass:x = _swig_property(_smart_pointer_multi_typedef.Foo_x_get, _smart_pointer_multi_typedef.Foo_x_set)
    def getx(self): return _smart_pointer_multi_typedef.Foo_getx(self)
    def __init__(self): 
        this = _smart_pointer_multi_typedef.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_multi_typedef.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _smart_pointer_multi_typedef.Foo_swigregister
Foo_swigregister(Foo)

class Bar(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_multi_typedef.new_Bar(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_multi_typedef.Bar___deref__(self)
    __swig_destroy__ = _smart_pointer_multi_typedef.delete_Bar
    __del__ = lambda self : None;
    __swig_setmethods__["x"] = _smart_pointer_multi_typedef.Bar_x_set
    __swig_getmethods__["x"] = _smart_pointer_multi_typedef.Bar_x_get
    if _newclass:x = _swig_property(_smart_pointer_multi_typedef.Bar_x_get, _smart_pointer_multi_typedef.Bar_x_set)
    def getx(self): return _smart_pointer_multi_typedef.Bar_getx(self)
Bar_swigregister = _smart_pointer_multi_typedef.Bar_swigregister
Bar_swigregister(Bar)

class Spam(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Spam, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Spam, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_multi_typedef.new_Spam(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_multi_typedef.Spam___deref__(self)
    __swig_destroy__ = _smart_pointer_multi_typedef.delete_Spam
    __del__ = lambda self : None;
    __swig_setmethods__["x"] = _smart_pointer_multi_typedef.Spam_x_set
    __swig_getmethods__["x"] = _smart_pointer_multi_typedef.Spam_x_get
    if _newclass:x = _swig_property(_smart_pointer_multi_typedef.Spam_x_get, _smart_pointer_multi_typedef.Spam_x_set)
    def getx(self): return _smart_pointer_multi_typedef.Spam_getx(self)
Spam_swigregister = _smart_pointer_multi_typedef.Spam_swigregister
Spam_swigregister(Spam)

class Grok(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Grok, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Grok, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_multi_typedef.new_Grok(*args)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_multi_typedef.Grok___deref__(self)
    __swig_destroy__ = _smart_pointer_multi_typedef.delete_Grok
    __del__ = lambda self : None;
    __swig_setmethods__["x"] = _smart_pointer_multi_typedef.Grok_x_set
    __swig_getmethods__["x"] = _smart_pointer_multi_typedef.Grok_x_get
    if _newclass:x = _swig_property(_smart_pointer_multi_typedef.Grok_x_get, _smart_pointer_multi_typedef.Grok_x_set)
    def getx(self): return _smart_pointer_multi_typedef.Grok_getx(self)
Grok_swigregister = _smart_pointer_multi_typedef.Grok_swigregister
Grok_swigregister(Grok)

# This file is compatible with both classic and new-style classes.

