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
            fp, pathname, description = imp.find_module('_using_inherit', [dirname(__file__)])
        except ImportError:
            import _using_inherit
            return _using_inherit
        if fp is not None:
            try:
                _mod = imp.load_module('_using_inherit', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _using_inherit = swig_import_helper()
    del swig_import_helper
else:
    import _using_inherit
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
    def test(self, *args): return _using_inherit.Foo_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Foo()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Foo
    __del__ = lambda self : None;
Foo_swigregister = _using_inherit.Foo_swigregister
Foo_swigregister(Foo)

class Bar(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bar, name)
    __repr__ = _swig_repr
    def test(self, *args): return _using_inherit.Bar_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Bar()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Bar
    __del__ = lambda self : None;
Bar_swigregister = _using_inherit.Bar_swigregister
Bar_swigregister(Bar)

class Bar2(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar2, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bar2, name)
    __repr__ = _swig_repr
    def test(self, *args): return _using_inherit.Bar2_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Bar2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Bar2
    __del__ = lambda self : None;
Bar2_swigregister = _using_inherit.Bar2_swigregister
Bar2_swigregister(Bar2)

class Bar3(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar3, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bar3, name)
    __repr__ = _swig_repr
    def test(self, *args): return _using_inherit.Bar3_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Bar3()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Bar3
    __del__ = lambda self : None;
Bar3_swigregister = _using_inherit.Bar3_swigregister
Bar3_swigregister(Bar3)

class Bar4(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bar4, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bar4, name)
    __repr__ = _swig_repr
    def test(self, *args): return _using_inherit.Bar4_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Bar4()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Bar4
    __del__ = lambda self : None;
Bar4_swigregister = _using_inherit.Bar4_swigregister
Bar4_swigregister(Bar4)

class Fred1(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Fred1, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Fred1, name)
    __repr__ = _swig_repr
    def test(self, *args): return _using_inherit.Fred1_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Fred1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Fred1
    __del__ = lambda self : None;
Fred1_swigregister = _using_inherit.Fred1_swigregister
Fred1_swigregister(Fred1)

class Fred2(Foo):
    __swig_setmethods__ = {}
    for _s in [Foo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Fred2, name, value)
    __swig_getmethods__ = {}
    for _s in [Foo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Fred2, name)
    __repr__ = _swig_repr
    def test(self, *args): return _using_inherit.Fred2_test(self, *args)
    def __init__(self): 
        this = _using_inherit.new_Fred2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _using_inherit.delete_Fred2
    __del__ = lambda self : None;
Fred2_swigregister = _using_inherit.Fred2_swigregister
Fred2_swigregister(Fred2)

# This file is compatible with both classic and new-style classes.


