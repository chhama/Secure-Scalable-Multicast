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
            fp, pathname, description = imp.find_module('_minherit2', [dirname(__file__)])
        except ImportError:
            import _minherit2
            return _minherit2
        if fp is not None:
            try:
                _mod = imp.load_module('_minherit2', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _minherit2 = swig_import_helper()
    del swig_import_helper
else:
    import _minherit2
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


class IRemoteSyncIO(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IRemoteSyncIO, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IRemoteSyncIO, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _minherit2.delete_IRemoteSyncIO
    __del__ = lambda self : None;
    def syncmethod(self): return _minherit2.IRemoteSyncIO_syncmethod(self)
IRemoteSyncIO_swigregister = _minherit2.IRemoteSyncIO_swigregister
IRemoteSyncIO_swigregister(IRemoteSyncIO)

class IRemoteAsyncIO(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IRemoteAsyncIO, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IRemoteAsyncIO, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _minherit2.delete_IRemoteAsyncIO
    __del__ = lambda self : None;
    def asyncmethod(self): return _minherit2.IRemoteAsyncIO_asyncmethod(self)
IRemoteAsyncIO_swigregister = _minherit2.IRemoteAsyncIO_swigregister
IRemoteAsyncIO_swigregister(IRemoteAsyncIO)

class RemoteMpe(IRemoteSyncIO,IRemoteAsyncIO):
    __swig_setmethods__ = {}
    for _s in [IRemoteSyncIO,IRemoteAsyncIO]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, RemoteMpe, name, value)
    __swig_getmethods__ = {}
    for _s in [IRemoteSyncIO,IRemoteAsyncIO]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, RemoteMpe, name)
    __repr__ = _swig_repr
    def syncmethod(self): return _minherit2.RemoteMpe_syncmethod(self)
    def asyncmethod(self): return _minherit2.RemoteMpe_asyncmethod(self)
    def __init__(self): 
        this = _minherit2.new_RemoteMpe()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _minherit2.delete_RemoteMpe
    __del__ = lambda self : None;
RemoteMpe_swigregister = _minherit2.RemoteMpe_swigregister
RemoteMpe_swigregister(RemoteMpe)

# This file is compatible with both classic and new-style classes.


