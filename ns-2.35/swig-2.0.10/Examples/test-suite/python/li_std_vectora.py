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
            fp, pathname, description = imp.find_module('_li_std_vectora', [dirname(__file__)])
        except ImportError:
            import _li_std_vectora
            return _li_std_vectora
        if fp is not None:
            try:
                _mod = imp.load_module('_li_std_vectora', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_std_vectora = swig_import_helper()
    del swig_import_helper
else:
    import _li_std_vectora
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
    __swig_destroy__ = _li_std_vectora.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _li_std_vectora.SwigPyIterator_value(self)
    def incr(self, n=1): return _li_std_vectora.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _li_std_vectora.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _li_std_vectora.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _li_std_vectora.SwigPyIterator_equal(self, *args)
    def copy(self): return _li_std_vectora.SwigPyIterator_copy(self)
    def next(self): return _li_std_vectora.SwigPyIterator_next(self)
    def __next__(self): return _li_std_vectora.SwigPyIterator___next__(self)
    def previous(self): return _li_std_vectora.SwigPyIterator_previous(self)
    def advance(self, *args): return _li_std_vectora.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _li_std_vectora.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _li_std_vectora.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _li_std_vectora.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _li_std_vectora.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _li_std_vectora.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _li_std_vectora.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _li_std_vectora.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class vector_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, vector_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, vector_i, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_vectora.vector_i_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_vectora.vector_i___nonzero__(self)
    def __bool__(self): return _li_std_vectora.vector_i___bool__(self)
    def __len__(self): return _li_std_vectora.vector_i___len__(self)
    def pop(self): return _li_std_vectora.vector_i_pop(self)
    def __getslice__(self, *args): return _li_std_vectora.vector_i___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_vectora.vector_i___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_vectora.vector_i___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_vectora.vector_i___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_vectora.vector_i___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_vectora.vector_i___setitem__(self, *args)
    def append(self, *args): return _li_std_vectora.vector_i_append(self, *args)
    def empty(self): return _li_std_vectora.vector_i_empty(self)
    def size(self): return _li_std_vectora.vector_i_size(self)
    def clear(self): return _li_std_vectora.vector_i_clear(self)
    def swap(self, *args): return _li_std_vectora.vector_i_swap(self, *args)
    def get_allocator(self): return _li_std_vectora.vector_i_get_allocator(self)
    def begin(self): return _li_std_vectora.vector_i_begin(self)
    def end(self): return _li_std_vectora.vector_i_end(self)
    def rbegin(self): return _li_std_vectora.vector_i_rbegin(self)
    def rend(self): return _li_std_vectora.vector_i_rend(self)
    def pop_back(self): return _li_std_vectora.vector_i_pop_back(self)
    def erase(self, *args): return _li_std_vectora.vector_i_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_vectora.new_vector_i(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_vectora.vector_i_push_back(self, *args)
    def front(self): return _li_std_vectora.vector_i_front(self)
    def back(self): return _li_std_vectora.vector_i_back(self)
    def assign(self, *args): return _li_std_vectora.vector_i_assign(self, *args)
    def resize(self, *args): return _li_std_vectora.vector_i_resize(self, *args)
    def insert(self, *args): return _li_std_vectora.vector_i_insert(self, *args)
    def reserve(self, *args): return _li_std_vectora.vector_i_reserve(self, *args)
    def capacity(self): return _li_std_vectora.vector_i_capacity(self)
    __swig_destroy__ = _li_std_vectora.delete_vector_i
    __del__ = lambda self : None;
vector_i_swigregister = _li_std_vectora.vector_i_swigregister
vector_i_swigregister(vector_i)

class matrix_i(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, matrix_i, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, matrix_i, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_vectora.matrix_i_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_vectora.matrix_i___nonzero__(self)
    def __bool__(self): return _li_std_vectora.matrix_i___bool__(self)
    def __len__(self): return _li_std_vectora.matrix_i___len__(self)
    def pop(self): return _li_std_vectora.matrix_i_pop(self)
    def __getslice__(self, *args): return _li_std_vectora.matrix_i___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_vectora.matrix_i___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_vectora.matrix_i___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_vectora.matrix_i___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_vectora.matrix_i___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_vectora.matrix_i___setitem__(self, *args)
    def append(self, *args): return _li_std_vectora.matrix_i_append(self, *args)
    def empty(self): return _li_std_vectora.matrix_i_empty(self)
    def size(self): return _li_std_vectora.matrix_i_size(self)
    def clear(self): return _li_std_vectora.matrix_i_clear(self)
    def swap(self, *args): return _li_std_vectora.matrix_i_swap(self, *args)
    def get_allocator(self): return _li_std_vectora.matrix_i_get_allocator(self)
    def begin(self): return _li_std_vectora.matrix_i_begin(self)
    def end(self): return _li_std_vectora.matrix_i_end(self)
    def rbegin(self): return _li_std_vectora.matrix_i_rbegin(self)
    def rend(self): return _li_std_vectora.matrix_i_rend(self)
    def pop_back(self): return _li_std_vectora.matrix_i_pop_back(self)
    def erase(self, *args): return _li_std_vectora.matrix_i_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_vectora.new_matrix_i(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_vectora.matrix_i_push_back(self, *args)
    def front(self): return _li_std_vectora.matrix_i_front(self)
    def back(self): return _li_std_vectora.matrix_i_back(self)
    def assign(self, *args): return _li_std_vectora.matrix_i_assign(self, *args)
    def resize(self, *args): return _li_std_vectora.matrix_i_resize(self, *args)
    def insert(self, *args): return _li_std_vectora.matrix_i_insert(self, *args)
    def reserve(self, *args): return _li_std_vectora.matrix_i_reserve(self, *args)
    def capacity(self): return _li_std_vectora.matrix_i_capacity(self)
    __swig_destroy__ = _li_std_vectora.delete_matrix_i
    __del__ = lambda self : None;
matrix_i_swigregister = _li_std_vectora.matrix_i_swigregister
matrix_i_swigregister(matrix_i)


def vident(*args):
  return _li_std_vectora.vident(*args)
vident = _li_std_vectora.vident

def mident(*args):
  return _li_std_vectora.mident(*args)
mident = _li_std_vectora.mident
class DoubleVector(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DoubleVector, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DoubleVector, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_vectora.DoubleVector_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_vectora.DoubleVector___nonzero__(self)
    def __bool__(self): return _li_std_vectora.DoubleVector___bool__(self)
    def __len__(self): return _li_std_vectora.DoubleVector___len__(self)
    def pop(self): return _li_std_vectora.DoubleVector_pop(self)
    def __getslice__(self, *args): return _li_std_vectora.DoubleVector___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_vectora.DoubleVector___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_vectora.DoubleVector___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_vectora.DoubleVector___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_vectora.DoubleVector___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_vectora.DoubleVector___setitem__(self, *args)
    def append(self, *args): return _li_std_vectora.DoubleVector_append(self, *args)
    def empty(self): return _li_std_vectora.DoubleVector_empty(self)
    def size(self): return _li_std_vectora.DoubleVector_size(self)
    def clear(self): return _li_std_vectora.DoubleVector_clear(self)
    def swap(self, *args): return _li_std_vectora.DoubleVector_swap(self, *args)
    def get_allocator(self): return _li_std_vectora.DoubleVector_get_allocator(self)
    def begin(self): return _li_std_vectora.DoubleVector_begin(self)
    def end(self): return _li_std_vectora.DoubleVector_end(self)
    def rbegin(self): return _li_std_vectora.DoubleVector_rbegin(self)
    def rend(self): return _li_std_vectora.DoubleVector_rend(self)
    def pop_back(self): return _li_std_vectora.DoubleVector_pop_back(self)
    def erase(self, *args): return _li_std_vectora.DoubleVector_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_vectora.new_DoubleVector(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_vectora.DoubleVector_push_back(self, *args)
    def front(self): return _li_std_vectora.DoubleVector_front(self)
    def back(self): return _li_std_vectora.DoubleVector_back(self)
    def assign(self, *args): return _li_std_vectora.DoubleVector_assign(self, *args)
    def resize(self, *args): return _li_std_vectora.DoubleVector_resize(self, *args)
    def insert(self, *args): return _li_std_vectora.DoubleVector_insert(self, *args)
    def reserve(self, *args): return _li_std_vectora.DoubleVector_reserve(self, *args)
    def capacity(self): return _li_std_vectora.DoubleVector_capacity(self)
    __swig_destroy__ = _li_std_vectora.delete_DoubleVector
    __del__ = lambda self : None;
DoubleVector_swigregister = _li_std_vectora.DoubleVector_swigregister
DoubleVector_swigregister(DoubleVector)

class RealVector(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, RealVector, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, RealVector, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_vectora.RealVector_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_vectora.RealVector___nonzero__(self)
    def __bool__(self): return _li_std_vectora.RealVector___bool__(self)
    def __len__(self): return _li_std_vectora.RealVector___len__(self)
    def pop(self): return _li_std_vectora.RealVector_pop(self)
    def __getslice__(self, *args): return _li_std_vectora.RealVector___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_vectora.RealVector___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_vectora.RealVector___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_vectora.RealVector___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_vectora.RealVector___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_vectora.RealVector___setitem__(self, *args)
    def append(self, *args): return _li_std_vectora.RealVector_append(self, *args)
    def empty(self): return _li_std_vectora.RealVector_empty(self)
    def size(self): return _li_std_vectora.RealVector_size(self)
    def clear(self): return _li_std_vectora.RealVector_clear(self)
    def swap(self, *args): return _li_std_vectora.RealVector_swap(self, *args)
    def get_allocator(self): return _li_std_vectora.RealVector_get_allocator(self)
    def begin(self): return _li_std_vectora.RealVector_begin(self)
    def end(self): return _li_std_vectora.RealVector_end(self)
    def rbegin(self): return _li_std_vectora.RealVector_rbegin(self)
    def rend(self): return _li_std_vectora.RealVector_rend(self)
    def pop_back(self): return _li_std_vectora.RealVector_pop_back(self)
    def erase(self, *args): return _li_std_vectora.RealVector_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_vectora.new_RealVector(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_vectora.RealVector_push_back(self, *args)
    def front(self): return _li_std_vectora.RealVector_front(self)
    def back(self): return _li_std_vectora.RealVector_back(self)
    def assign(self, *args): return _li_std_vectora.RealVector_assign(self, *args)
    def resize(self, *args): return _li_std_vectora.RealVector_resize(self, *args)
    def insert(self, *args): return _li_std_vectora.RealVector_insert(self, *args)
    def reserve(self, *args): return _li_std_vectora.RealVector_reserve(self, *args)
    def capacity(self): return _li_std_vectora.RealVector_capacity(self)
    __swig_destroy__ = _li_std_vectora.delete_RealVector
    __del__ = lambda self : None;
RealVector_swigregister = _li_std_vectora.RealVector_swigregister
RealVector_swigregister(RealVector)


def average(*args):
  return _li_std_vectora.average(*args)
average = _li_std_vectora.average

def half(*args):
  return _li_std_vectora.half(*args)
half = _li_std_vectora.half
class IntPtrVector(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, IntPtrVector, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, IntPtrVector, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_vectora.IntPtrVector_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_vectora.IntPtrVector___nonzero__(self)
    def __bool__(self): return _li_std_vectora.IntPtrVector___bool__(self)
    def __len__(self): return _li_std_vectora.IntPtrVector___len__(self)
    def pop(self): return _li_std_vectora.IntPtrVector_pop(self)
    def __getslice__(self, *args): return _li_std_vectora.IntPtrVector___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_vectora.IntPtrVector___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_vectora.IntPtrVector___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_vectora.IntPtrVector___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_vectora.IntPtrVector___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_vectora.IntPtrVector___setitem__(self, *args)
    def append(self, *args): return _li_std_vectora.IntPtrVector_append(self, *args)
    def empty(self): return _li_std_vectora.IntPtrVector_empty(self)
    def size(self): return _li_std_vectora.IntPtrVector_size(self)
    def clear(self): return _li_std_vectora.IntPtrVector_clear(self)
    def swap(self, *args): return _li_std_vectora.IntPtrVector_swap(self, *args)
    def get_allocator(self): return _li_std_vectora.IntPtrVector_get_allocator(self)
    def begin(self): return _li_std_vectora.IntPtrVector_begin(self)
    def end(self): return _li_std_vectora.IntPtrVector_end(self)
    def rbegin(self): return _li_std_vectora.IntPtrVector_rbegin(self)
    def rend(self): return _li_std_vectora.IntPtrVector_rend(self)
    def pop_back(self): return _li_std_vectora.IntPtrVector_pop_back(self)
    def erase(self, *args): return _li_std_vectora.IntPtrVector_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_vectora.new_IntPtrVector(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_vectora.IntPtrVector_push_back(self, *args)
    def front(self): return _li_std_vectora.IntPtrVector_front(self)
    def back(self): return _li_std_vectora.IntPtrVector_back(self)
    def assign(self, *args): return _li_std_vectora.IntPtrVector_assign(self, *args)
    def resize(self, *args): return _li_std_vectora.IntPtrVector_resize(self, *args)
    def insert(self, *args): return _li_std_vectora.IntPtrVector_insert(self, *args)
    def reserve(self, *args): return _li_std_vectora.IntPtrVector_reserve(self, *args)
    def capacity(self): return _li_std_vectora.IntPtrVector_capacity(self)
    __swig_destroy__ = _li_std_vectora.delete_IntPtrVector
    __del__ = lambda self : None;
IntPtrVector_swigregister = _li_std_vectora.IntPtrVector_swigregister
IntPtrVector_swigregister(IntPtrVector)

# This file is compatible with both classic and new-style classes.


