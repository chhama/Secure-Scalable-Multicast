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
            fp, pathname, description = imp.find_module('_li_std_deque', [dirname(__file__)])
        except ImportError:
            import _li_std_deque
            return _li_std_deque
        if fp is not None:
            try:
                _mod = imp.load_module('_li_std_deque', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_std_deque = swig_import_helper()
    del swig_import_helper
else:
    import _li_std_deque
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


class SwigPyIterator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SwigPyIterator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SwigPyIterator, name)
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _li_std_deque.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _li_std_deque.SwigPyIterator_value(self)
    def incr(self, n=1): return _li_std_deque.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _li_std_deque.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _li_std_deque.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _li_std_deque.SwigPyIterator_equal(self, *args)
    def copy(self): return _li_std_deque.SwigPyIterator_copy(self)
    def next(self): return _li_std_deque.SwigPyIterator_next(self)
    def __next__(self): return _li_std_deque.SwigPyIterator___next__(self)
    def previous(self): return _li_std_deque.SwigPyIterator_previous(self)
    def advance(self, *args): return _li_std_deque.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _li_std_deque.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _li_std_deque.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _li_std_deque.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _li_std_deque.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _li_std_deque.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _li_std_deque.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _li_std_deque.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class IntDeque(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IntDeque, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IntDeque, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_deque.IntDeque_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_deque.IntDeque___nonzero__(self)
    def __bool__(self): return _li_std_deque.IntDeque___bool__(self)
    def __len__(self): return _li_std_deque.IntDeque___len__(self)
    def pop(self): return _li_std_deque.IntDeque_pop(self)
    def __getslice__(self, *args): return _li_std_deque.IntDeque___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_deque.IntDeque___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_deque.IntDeque___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_deque.IntDeque___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_deque.IntDeque___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_deque.IntDeque___setitem__(self, *args)
    def append(self, *args): return _li_std_deque.IntDeque_append(self, *args)
    def empty(self): return _li_std_deque.IntDeque_empty(self)
    def size(self): return _li_std_deque.IntDeque_size(self)
    def clear(self): return _li_std_deque.IntDeque_clear(self)
    def swap(self, *args): return _li_std_deque.IntDeque_swap(self, *args)
    def get_allocator(self): return _li_std_deque.IntDeque_get_allocator(self)
    def begin(self): return _li_std_deque.IntDeque_begin(self)
    def end(self): return _li_std_deque.IntDeque_end(self)
    def rbegin(self): return _li_std_deque.IntDeque_rbegin(self)
    def rend(self): return _li_std_deque.IntDeque_rend(self)
    def pop_back(self): return _li_std_deque.IntDeque_pop_back(self)
    def erase(self, *args): return _li_std_deque.IntDeque_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_deque.new_IntDeque(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_deque.IntDeque_push_back(self, *args)
    def front(self): return _li_std_deque.IntDeque_front(self)
    def back(self): return _li_std_deque.IntDeque_back(self)
    def assign(self, *args): return _li_std_deque.IntDeque_assign(self, *args)
    def resize(self, *args): return _li_std_deque.IntDeque_resize(self, *args)
    def insert(self, *args): return _li_std_deque.IntDeque_insert(self, *args)
    def pop_front(self): return _li_std_deque.IntDeque_pop_front(self)
    def push_front(self, *args): return _li_std_deque.IntDeque_push_front(self, *args)
    __swig_destroy__ = _li_std_deque.delete_IntDeque
    __del__ = lambda self : None;
IntDeque_swigregister = _li_std_deque.IntDeque_swigregister
IntDeque_swigregister(IntDeque)

class DoubleDeque(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DoubleDeque, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DoubleDeque, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_deque.DoubleDeque_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_deque.DoubleDeque___nonzero__(self)
    def __bool__(self): return _li_std_deque.DoubleDeque___bool__(self)
    def __len__(self): return _li_std_deque.DoubleDeque___len__(self)
    def pop(self): return _li_std_deque.DoubleDeque_pop(self)
    def __getslice__(self, *args): return _li_std_deque.DoubleDeque___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_deque.DoubleDeque___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_deque.DoubleDeque___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_deque.DoubleDeque___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_deque.DoubleDeque___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_deque.DoubleDeque___setitem__(self, *args)
    def append(self, *args): return _li_std_deque.DoubleDeque_append(self, *args)
    def empty(self): return _li_std_deque.DoubleDeque_empty(self)
    def size(self): return _li_std_deque.DoubleDeque_size(self)
    def clear(self): return _li_std_deque.DoubleDeque_clear(self)
    def swap(self, *args): return _li_std_deque.DoubleDeque_swap(self, *args)
    def get_allocator(self): return _li_std_deque.DoubleDeque_get_allocator(self)
    def begin(self): return _li_std_deque.DoubleDeque_begin(self)
    def end(self): return _li_std_deque.DoubleDeque_end(self)
    def rbegin(self): return _li_std_deque.DoubleDeque_rbegin(self)
    def rend(self): return _li_std_deque.DoubleDeque_rend(self)
    def pop_back(self): return _li_std_deque.DoubleDeque_pop_back(self)
    def erase(self, *args): return _li_std_deque.DoubleDeque_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_deque.new_DoubleDeque(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_deque.DoubleDeque_push_back(self, *args)
    def front(self): return _li_std_deque.DoubleDeque_front(self)
    def back(self): return _li_std_deque.DoubleDeque_back(self)
    def assign(self, *args): return _li_std_deque.DoubleDeque_assign(self, *args)
    def resize(self, *args): return _li_std_deque.DoubleDeque_resize(self, *args)
    def insert(self, *args): return _li_std_deque.DoubleDeque_insert(self, *args)
    def pop_front(self): return _li_std_deque.DoubleDeque_pop_front(self)
    def push_front(self, *args): return _li_std_deque.DoubleDeque_push_front(self, *args)
    __swig_destroy__ = _li_std_deque.delete_DoubleDeque
    __del__ = lambda self : None;
DoubleDeque_swigregister = _li_std_deque.DoubleDeque_swigregister
DoubleDeque_swigregister(DoubleDeque)

class RealDeque(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, RealDeque, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, RealDeque, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_deque.RealDeque_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_deque.RealDeque___nonzero__(self)
    def __bool__(self): return _li_std_deque.RealDeque___bool__(self)
    def __len__(self): return _li_std_deque.RealDeque___len__(self)
    def pop(self): return _li_std_deque.RealDeque_pop(self)
    def __getslice__(self, *args): return _li_std_deque.RealDeque___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_deque.RealDeque___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_deque.RealDeque___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_deque.RealDeque___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_deque.RealDeque___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_deque.RealDeque___setitem__(self, *args)
    def append(self, *args): return _li_std_deque.RealDeque_append(self, *args)
    def empty(self): return _li_std_deque.RealDeque_empty(self)
    def size(self): return _li_std_deque.RealDeque_size(self)
    def clear(self): return _li_std_deque.RealDeque_clear(self)
    def swap(self, *args): return _li_std_deque.RealDeque_swap(self, *args)
    def get_allocator(self): return _li_std_deque.RealDeque_get_allocator(self)
    def begin(self): return _li_std_deque.RealDeque_begin(self)
    def end(self): return _li_std_deque.RealDeque_end(self)
    def rbegin(self): return _li_std_deque.RealDeque_rbegin(self)
    def rend(self): return _li_std_deque.RealDeque_rend(self)
    def pop_back(self): return _li_std_deque.RealDeque_pop_back(self)
    def erase(self, *args): return _li_std_deque.RealDeque_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_deque.new_RealDeque(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_deque.RealDeque_push_back(self, *args)
    def front(self): return _li_std_deque.RealDeque_front(self)
    def back(self): return _li_std_deque.RealDeque_back(self)
    def assign(self, *args): return _li_std_deque.RealDeque_assign(self, *args)
    def resize(self, *args): return _li_std_deque.RealDeque_resize(self, *args)
    def insert(self, *args): return _li_std_deque.RealDeque_insert(self, *args)
    def pop_front(self): return _li_std_deque.RealDeque_pop_front(self)
    def push_front(self, *args): return _li_std_deque.RealDeque_push_front(self, *args)
    __swig_destroy__ = _li_std_deque.delete_RealDeque
    __del__ = lambda self : None;
RealDeque_swigregister = _li_std_deque.RealDeque_swigregister
RealDeque_swigregister(RealDeque)


def average(*args):
  return _li_std_deque.average(*args)
average = _li_std_deque.average

def half(*args):
  return _li_std_deque.half(*args)
half = _li_std_deque.half

def halve_in_place(*args):
  return _li_std_deque.halve_in_place(*args)
halve_in_place = _li_std_deque.halve_in_place
# This file is compatible with both classic and new-style classes.


