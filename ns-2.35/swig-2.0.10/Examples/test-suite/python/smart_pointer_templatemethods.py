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
            fp, pathname, description = imp.find_module('_smart_pointer_templatemethods', [dirname(__file__)])
        except ImportError:
            import _smart_pointer_templatemethods
            return _smart_pointer_templatemethods
        if fp is not None:
            try:
                _mod = imp.load_module('_smart_pointer_templatemethods', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _smart_pointer_templatemethods = swig_import_helper()
    del swig_import_helper
else:
    import _smart_pointer_templatemethods
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


class InterfaceId(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, InterfaceId, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, InterfaceId, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _smart_pointer_templatemethods.new_InterfaceId(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_templatemethods.delete_InterfaceId
    __del__ = lambda self : None;
InterfaceId_swigregister = _smart_pointer_templatemethods.InterfaceId_swigregister
InterfaceId_swigregister(InterfaceId)

class Objct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Objct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Objct, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _smart_pointer_templatemethods.new_Objct()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_templatemethods.delete_Objct
    __del__ = lambda self : None;
    def DisposeObjct(self): return _smart_pointer_templatemethods.Objct_DisposeObjct(self)
    def QueryInterfaceObjct(self, *args): return _smart_pointer_templatemethods.Objct_QueryInterfaceObjct(self, *args)
Objct_swigregister = _smart_pointer_templatemethods.Objct_swigregister
Objct_swigregister(Objct)

class PtrObjct(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, PtrObjct, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, PtrObjct, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _smart_pointer_templatemethods.new_PtrObjct()
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_templatemethods.PtrObjct___deref__(self)
    __swig_destroy__ = _smart_pointer_templatemethods.delete_PtrObjct
    __del__ = lambda self : None;
    def DisposeObjct(self): return _smart_pointer_templatemethods.PtrObjct_DisposeObjct(self)
    def QueryInterfaceObjct(self, *args): return _smart_pointer_templatemethods.PtrObjct_QueryInterfaceObjct(self, *args)
PtrObjct_swigregister = _smart_pointer_templatemethods.PtrObjct_swigregister
PtrObjct_swigregister(PtrObjct)

class PtrInt(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, PtrInt, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, PtrInt, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _smart_pointer_templatemethods.new_PtrInt()
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_templatemethods.PtrInt___deref__(self)
    __swig_destroy__ = _smart_pointer_templatemethods.delete_PtrInt
    __del__ = lambda self : None;
PtrInt_swigregister = _smart_pointer_templatemethods.PtrInt_swigregister
PtrInt_swigregister(PtrInt)

class ObjektInt(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ObjektInt, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ObjektInt, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _smart_pointer_templatemethods.new_ObjektInt()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _smart_pointer_templatemethods.delete_ObjektInt
    __del__ = lambda self : None;
    def QueryInterface(self, *args): return _smart_pointer_templatemethods.ObjektInt_QueryInterface(self, *args)
    def DisposeObjekt(self): return _smart_pointer_templatemethods.ObjektInt_DisposeObjekt(self)
ObjektInt_swigregister = _smart_pointer_templatemethods.ObjektInt_swigregister
ObjektInt_swigregister(ObjektInt)

class PtrObjektInt(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, PtrObjektInt, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, PtrObjektInt, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _smart_pointer_templatemethods.new_PtrObjektInt()
        try: self.this.append(this)
        except: self.this = this
    def __deref__(self): return _smart_pointer_templatemethods.PtrObjektInt___deref__(self)
    __swig_destroy__ = _smart_pointer_templatemethods.delete_PtrObjektInt
    __del__ = lambda self : None;
    def QueryInterface(self, *args): return _smart_pointer_templatemethods.PtrObjektInt_QueryInterface(self, *args)
    def DisposeObjekt(self): return _smart_pointer_templatemethods.PtrObjektInt_DisposeObjekt(self)
PtrObjektInt_swigregister = _smart_pointer_templatemethods.PtrObjektInt_swigregister
PtrObjektInt_swigregister(PtrObjektInt)

# This file is compatible with both classic and new-style classes.


