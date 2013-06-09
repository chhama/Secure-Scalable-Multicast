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
            fp, pathname, description = imp.find_module('_example', [dirname(__file__)])
        except ImportError:
            import _example
            return _example
        if fp is not None:
            try:
                _mod = imp.load_module('_example', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _example = swig_import_helper()
    del swig_import_helper
else:
    import _example
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


class Shape(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Shape, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Shape, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _example.delete_Shape
    __del__ = lambda self : None;
    __swig_setmethods__["x"] = _example.Shape_x_set
    __swig_getmethods__["x"] = _example.Shape_x_get
    if _newclass:x = _swig_property(_example.Shape_x_get, _example.Shape_x_set)
    __swig_setmethods__["y"] = _example.Shape_y_set
    __swig_getmethods__["y"] = _example.Shape_y_get
    if _newclass:y = _swig_property(_example.Shape_y_get, _example.Shape_y_set)
    def move(self, *args): return _example.Shape_move(self, *args)
    def area(self): return _example.Shape_area(self)
    def perimeter(self): return _example.Shape_perimeter(self)
    __swig_setmethods__["nshapes"] = _example.Shape_nshapes_set
    __swig_getmethods__["nshapes"] = _example.Shape_nshapes_get
    if _newclass:nshapes = _swig_property(_example.Shape_nshapes_get, _example.Shape_nshapes_set)
Shape_swigregister = _example.Shape_swigregister
Shape_swigregister(Shape)
cvar = _example.cvar

class Circle(Shape):
    __swig_setmethods__ = {}
    for _s in [Shape]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Circle, name, value)
    __swig_getmethods__ = {}
    for _s in [Shape]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Circle, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _example.new_Circle(*args)
        try: self.this.append(this)
        except: self.this = this
    def area(self): return _example.Circle_area(self)
    def perimeter(self): return _example.Circle_perimeter(self)
    __swig_destroy__ = _example.delete_Circle
    __del__ = lambda self : None;
Circle_swigregister = _example.Circle_swigregister
Circle_swigregister(Circle)

class Square(Shape):
    __swig_setmethods__ = {}
    for _s in [Shape]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Square, name, value)
    __swig_getmethods__ = {}
    for _s in [Shape]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Square, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _example.new_Square(*args)
        try: self.this.append(this)
        except: self.this = this
    def area(self): return _example.Square_area(self)
    def perimeter(self): return _example.Square_perimeter(self)
    __swig_destroy__ = _example.delete_Square
    __del__ = lambda self : None;
Square_swigregister = _example.Square_swigregister
Square_swigregister(Square)

class ShapePtr(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ShapePtr, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ShapePtr, name)
    __repr__ = _swig_repr
    def __init__(self, realPtr=None): 
        this = _example.new_ShapePtr(realPtr)
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _example.ShapePtr___deref__(self)
    def __ref__(self): return _example.ShapePtr___ref__(self)
    __swig_destroy__ = _example.delete_ShapePtr
    __del__ = lambda self : None;
    __swig_setmethods__["x"] = _example.ShapePtr_x_set
    __swig_getmethods__["x"] = _example.ShapePtr_x_get
    if _newclass:x = _swig_property(_example.ShapePtr_x_get, _example.ShapePtr_x_set)
    __swig_setmethods__["y"] = _example.ShapePtr_y_set
    __swig_getmethods__["y"] = _example.ShapePtr_y_get
    if _newclass:y = _swig_property(_example.ShapePtr_y_get, _example.ShapePtr_y_set)
    def move(self, *args): return _example.ShapePtr_move(self, *args)
    def area(self): return _example.ShapePtr_area(self)
    def perimeter(self): return _example.ShapePtr_perimeter(self)
    __swig_setmethods__["nshapes"] = _example.ShapePtr_nshapes_set
    __swig_getmethods__["nshapes"] = _example.ShapePtr_nshapes_get
    if _newclass:nshapes = _swig_property(_example.ShapePtr_nshapes_get, _example.ShapePtr_nshapes_set)
ShapePtr_swigregister = _example.ShapePtr_swigregister
ShapePtr_swigregister(ShapePtr)

# This file is compatible with both classic and new-style classes.


