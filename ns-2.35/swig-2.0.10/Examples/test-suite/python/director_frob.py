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
            fp, pathname, description = imp.find_module('_director_frob', [dirname(__file__)])
        except ImportError:
            import _director_frob
            return _director_frob
        if fp is not None:
            try:
                _mod = imp.load_module('_director_frob', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _director_frob = swig_import_helper()
    del swig_import_helper
else:
    import _director_frob
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


try:
    import weakref
    weakref_proxy = weakref.proxy
except:
    weakref_proxy = lambda x: x


class Alpha(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Alpha, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Alpha, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_frob.delete_Alpha
    __del__ = lambda self : None;
    def abs_method(self): return _director_frob.Alpha_abs_method(self)
    def __init__(self): 
        if self.__class__ == Alpha:
            _self = None
        else:
            _self = self
        this = _director_frob.new_Alpha(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_Alpha(self)
        return weakref_proxy(self)
Alpha_swigregister = _director_frob.Alpha_swigregister
Alpha_swigregister(Alpha)

class Bravo(Alpha):
    __swig_setmethods__ = {}
    for _s in [Alpha]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Bravo, name, value)
    __swig_getmethods__ = {}
    for _s in [Alpha]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Bravo, name)
    __repr__ = _swig_repr
    def abs_method(self): return _director_frob.Bravo_abs_method(self)
    def __init__(self): 
        if self.__class__ == Bravo:
            _self = None
        else:
            _self = self
        this = _director_frob.new_Bravo(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_Bravo
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_Bravo(self)
        return weakref_proxy(self)
Bravo_swigregister = _director_frob.Bravo_swigregister
Bravo_swigregister(Bravo)

class Charlie(Bravo):
    __swig_setmethods__ = {}
    for _s in [Bravo]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Charlie, name, value)
    __swig_getmethods__ = {}
    for _s in [Bravo]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Charlie, name)
    __repr__ = _swig_repr
    def abs_method(self): return _director_frob.Charlie_abs_method(self)
    def __init__(self): 
        if self.__class__ == Charlie:
            _self = None
        else:
            _self = self
        this = _director_frob.new_Charlie(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_Charlie
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_Charlie(self)
        return weakref_proxy(self)
Charlie_swigregister = _director_frob.Charlie_swigregister
Charlie_swigregister(Charlie)

class Delta(Charlie):
    __swig_setmethods__ = {}
    for _s in [Charlie]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Delta, name, value)
    __swig_getmethods__ = {}
    for _s in [Charlie]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Delta, name)
    __repr__ = _swig_repr
    def __init__(self): 
        if self.__class__ == Delta:
            _self = None
        else:
            _self = self
        this = _director_frob.new_Delta(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_Delta
    __del__ = lambda self : None;
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_Delta(self)
        return weakref_proxy(self)
Delta_swigregister = _director_frob.Delta_swigregister
Delta_swigregister(Delta)

class Ops(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Ops, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Ops, name)
    __repr__ = _swig_repr
    def __init__(self): 
        if self.__class__ == Ops:
            _self = None
        else:
            _self = self
        this = _director_frob.new_Ops(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_Ops
    __del__ = lambda self : None;
    def OpInt(self): return _director_frob.Ops_OpInt(self)
    def OpIntStarStarConst(self): return _director_frob.Ops_OpIntStarStarConst(self)
    def OpIntAmp(self): return _director_frob.Ops_OpIntAmp(self)
    def OpIntStar(self): return _director_frob.Ops_OpIntStar(self)
    def OpConstIntIntStar(self): return _director_frob.Ops_OpConstIntIntStar(self)
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_Ops(self)
        return weakref_proxy(self)
Ops_swigregister = _director_frob.Ops_swigregister
Ops_swigregister(Ops)

class Prims(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Prims, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Prims, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _director_frob.delete_Prims
    __del__ = lambda self : None;
    def ull(self, *args): return _director_frob.Prims_ull(self, *args)
    def callull(self, *args): return _director_frob.Prims_callull(self, *args)
    def __init__(self): 
        if self.__class__ == Prims:
            _self = None
        else:
            _self = self
        this = _director_frob.new_Prims(_self, )
        try: self.this.append(this)
        except: self.this = this
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_Prims(self)
        return weakref_proxy(self)
Prims_swigregister = _director_frob.Prims_swigregister
Prims_swigregister(Prims)

class corePoint3d(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, corePoint3d, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, corePoint3d, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _director_frob.new_corePoint3d()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_corePoint3d
    __del__ = lambda self : None;
corePoint3d_swigregister = _director_frob.corePoint3d_swigregister
corePoint3d_swigregister(corePoint3d)

class coreCallbacks_On3dEngineRedrawnData(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, coreCallbacks_On3dEngineRedrawnData, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, coreCallbacks_On3dEngineRedrawnData, name)
    __repr__ = _swig_repr
    __swig_setmethods__["_eye"] = _director_frob.coreCallbacks_On3dEngineRedrawnData__eye_set
    __swig_getmethods__["_eye"] = _director_frob.coreCallbacks_On3dEngineRedrawnData__eye_get
    if _newclass:_eye = _swig_property(_director_frob.coreCallbacks_On3dEngineRedrawnData__eye_get, _director_frob.coreCallbacks_On3dEngineRedrawnData__eye_set)
    __swig_setmethods__["_at"] = _director_frob.coreCallbacks_On3dEngineRedrawnData__at_set
    __swig_getmethods__["_at"] = _director_frob.coreCallbacks_On3dEngineRedrawnData__at_get
    if _newclass:_at = _swig_property(_director_frob.coreCallbacks_On3dEngineRedrawnData__at_get, _director_frob.coreCallbacks_On3dEngineRedrawnData__at_set)
    def __init__(self): 
        this = _director_frob.new_coreCallbacks_On3dEngineRedrawnData()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_coreCallbacks_On3dEngineRedrawnData
    __del__ = lambda self : None;
coreCallbacks_On3dEngineRedrawnData_swigregister = _director_frob.coreCallbacks_On3dEngineRedrawnData_swigregister
coreCallbacks_On3dEngineRedrawnData_swigregister(coreCallbacks_On3dEngineRedrawnData)

class coreCallbacksOn3dEngineRedrawnData(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, coreCallbacksOn3dEngineRedrawnData, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, coreCallbacksOn3dEngineRedrawnData, name)
    __repr__ = _swig_repr
    __swig_setmethods__["_eye"] = _director_frob.coreCallbacksOn3dEngineRedrawnData__eye_set
    __swig_getmethods__["_eye"] = _director_frob.coreCallbacksOn3dEngineRedrawnData__eye_get
    if _newclass:_eye = _swig_property(_director_frob.coreCallbacksOn3dEngineRedrawnData__eye_get, _director_frob.coreCallbacksOn3dEngineRedrawnData__eye_set)
    __swig_setmethods__["_at"] = _director_frob.coreCallbacksOn3dEngineRedrawnData__at_set
    __swig_getmethods__["_at"] = _director_frob.coreCallbacksOn3dEngineRedrawnData__at_get
    if _newclass:_at = _swig_property(_director_frob.coreCallbacksOn3dEngineRedrawnData__at_get, _director_frob.coreCallbacksOn3dEngineRedrawnData__at_set)
    def __init__(self): 
        this = _director_frob.new_coreCallbacksOn3dEngineRedrawnData()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_coreCallbacksOn3dEngineRedrawnData
    __del__ = lambda self : None;
coreCallbacksOn3dEngineRedrawnData_swigregister = _director_frob.coreCallbacksOn3dEngineRedrawnData_swigregister
coreCallbacksOn3dEngineRedrawnData_swigregister(coreCallbacksOn3dEngineRedrawnData)

class coreCallbacks(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, coreCallbacks, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, coreCallbacks, name)
    __repr__ = _swig_repr
    def __init__(self): 
        if self.__class__ == coreCallbacks:
            _self = None
        else:
            _self = self
        this = _director_frob.new_coreCallbacks(_self, )
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _director_frob.delete_coreCallbacks
    __del__ = lambda self : None;
    def On3dEngineRedrawn(self, *args): return _director_frob.coreCallbacks_On3dEngineRedrawn(self, *args)
    def On3dEngineRedrawn2(self, *args): return _director_frob.coreCallbacks_On3dEngineRedrawn2(self, *args)
    def __disown__(self):
        self.this.disown()
        _director_frob.disown_coreCallbacks(self)
        return weakref_proxy(self)
coreCallbacks_swigregister = _director_frob.coreCallbacks_swigregister
coreCallbacks_swigregister(coreCallbacks)

# This file is compatible with both classic and new-style classes.


