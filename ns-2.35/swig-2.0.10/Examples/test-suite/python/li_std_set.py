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
            fp, pathname, description = imp.find_module('_li_std_set', [dirname(__file__)])
        except ImportError:
            import _li_std_set
            return _li_std_set
        if fp is not None:
            try:
                _mod = imp.load_module('_li_std_set', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_std_set = swig_import_helper()
    del swig_import_helper
else:
    import _li_std_set
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
    __swig_destroy__ = _li_std_set.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _li_std_set.SwigPyIterator_value(self)
    def incr(self, n=1): return _li_std_set.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _li_std_set.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _li_std_set.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _li_std_set.SwigPyIterator_equal(self, *args)
    def copy(self): return _li_std_set.SwigPyIterator_copy(self)
    def next(self): return _li_std_set.SwigPyIterator_next(self)
    def __next__(self): return _li_std_set.SwigPyIterator___next__(self)
    def previous(self): return _li_std_set.SwigPyIterator_previous(self)
    def advance(self, *args): return _li_std_set.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _li_std_set.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _li_std_set.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _li_std_set.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _li_std_set.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _li_std_set.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _li_std_set.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _li_std_set.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class set_string(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, set_string, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, set_string, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_set.set_string_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_set.set_string___nonzero__(self)
    def __bool__(self): return _li_std_set.set_string___bool__(self)
    def __len__(self): return _li_std_set.set_string___len__(self)
    def append(self, *args): return _li_std_set.set_string_append(self, *args)
    def __contains__(self, *args): return _li_std_set.set_string___contains__(self, *args)
    def __getitem__(self, *args): return _li_std_set.set_string___getitem__(self, *args)
    def add(self, *args): return _li_std_set.set_string_add(self, *args)
    def discard(self, *args): return _li_std_set.set_string_discard(self, *args)
    def __init__(self, *args): 
        this = _li_std_set.new_set_string(*args)
        try: self.this.append(this)
        except: self.this = this
    def empty(self): return _li_std_set.set_string_empty(self)
    def size(self): return _li_std_set.set_string_size(self)
    def clear(self): return _li_std_set.set_string_clear(self)
    def swap(self, *args): return _li_std_set.set_string_swap(self, *args)
    def count(self, *args): return _li_std_set.set_string_count(self, *args)
    def begin(self): return _li_std_set.set_string_begin(self)
    def end(self): return _li_std_set.set_string_end(self)
    def rbegin(self): return _li_std_set.set_string_rbegin(self)
    def rend(self): return _li_std_set.set_string_rend(self)
    def erase(self, *args): return _li_std_set.set_string_erase(self, *args)
    def find(self, *args): return _li_std_set.set_string_find(self, *args)
    def lower_bound(self, *args): return _li_std_set.set_string_lower_bound(self, *args)
    def upper_bound(self, *args): return _li_std_set.set_string_upper_bound(self, *args)
    def equal_range(self, *args): return _li_std_set.set_string_equal_range(self, *args)
    def insert(self, *args): return _li_std_set.set_string_insert(self, *args)
    __swig_destroy__ = _li_std_set.delete_set_string
    __del__ = lambda self : None;
set_string_swigregister = _li_std_set.set_string_swigregister
set_string_swigregister(set_string)

class set_int(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, set_int, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, set_int, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_set.set_int_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_set.set_int___nonzero__(self)
    def __bool__(self): return _li_std_set.set_int___bool__(self)
    def __len__(self): return _li_std_set.set_int___len__(self)
    def append(self, *args): return _li_std_set.set_int_append(self, *args)
    def __contains__(self, *args): return _li_std_set.set_int___contains__(self, *args)
    def __getitem__(self, *args): return _li_std_set.set_int___getitem__(self, *args)
    def add(self, *args): return _li_std_set.set_int_add(self, *args)
    def discard(self, *args): return _li_std_set.set_int_discard(self, *args)
    def __init__(self, *args): 
        this = _li_std_set.new_set_int(*args)
        try: self.this.append(this)
        except: self.this = this
    def empty(self): return _li_std_set.set_int_empty(self)
    def size(self): return _li_std_set.set_int_size(self)
    def clear(self): return _li_std_set.set_int_clear(self)
    def swap(self, *args): return _li_std_set.set_int_swap(self, *args)
    def count(self, *args): return _li_std_set.set_int_count(self, *args)
    def begin(self): return _li_std_set.set_int_begin(self)
    def end(self): return _li_std_set.set_int_end(self)
    def rbegin(self): return _li_std_set.set_int_rbegin(self)
    def rend(self): return _li_std_set.set_int_rend(self)
    def erase(self, *args): return _li_std_set.set_int_erase(self, *args)
    def find(self, *args): return _li_std_set.set_int_find(self, *args)
    def lower_bound(self, *args): return _li_std_set.set_int_lower_bound(self, *args)
    def upper_bound(self, *args): return _li_std_set.set_int_upper_bound(self, *args)
    def equal_range(self, *args): return _li_std_set.set_int_equal_range(self, *args)
    __swig_destroy__ = _li_std_set.delete_set_int
    __del__ = lambda self : None;
set_int_swigregister = _li_std_set.set_int_swigregister
set_int_swigregister(set_int)

class v_int(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, v_int, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, v_int, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_set.v_int_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_set.v_int___nonzero__(self)
    def __bool__(self): return _li_std_set.v_int___bool__(self)
    def __len__(self): return _li_std_set.v_int___len__(self)
    def pop(self): return _li_std_set.v_int_pop(self)
    def __getslice__(self, *args): return _li_std_set.v_int___getslice__(self, *args)
    def __setslice__(self, *args): return _li_std_set.v_int___setslice__(self, *args)
    def __delslice__(self, *args): return _li_std_set.v_int___delslice__(self, *args)
    def __delitem__(self, *args): return _li_std_set.v_int___delitem__(self, *args)
    def __getitem__(self, *args): return _li_std_set.v_int___getitem__(self, *args)
    def __setitem__(self, *args): return _li_std_set.v_int___setitem__(self, *args)
    def append(self, *args): return _li_std_set.v_int_append(self, *args)
    def empty(self): return _li_std_set.v_int_empty(self)
    def size(self): return _li_std_set.v_int_size(self)
    def clear(self): return _li_std_set.v_int_clear(self)
    def swap(self, *args): return _li_std_set.v_int_swap(self, *args)
    def get_allocator(self): return _li_std_set.v_int_get_allocator(self)
    def begin(self): return _li_std_set.v_int_begin(self)
    def end(self): return _li_std_set.v_int_end(self)
    def rbegin(self): return _li_std_set.v_int_rbegin(self)
    def rend(self): return _li_std_set.v_int_rend(self)
    def pop_back(self): return _li_std_set.v_int_pop_back(self)
    def erase(self, *args): return _li_std_set.v_int_erase(self, *args)
    def __init__(self, *args): 
        this = _li_std_set.new_v_int(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _li_std_set.v_int_push_back(self, *args)
    def front(self): return _li_std_set.v_int_front(self)
    def back(self): return _li_std_set.v_int_back(self)
    def assign(self, *args): return _li_std_set.v_int_assign(self, *args)
    def resize(self, *args): return _li_std_set.v_int_resize(self, *args)
    def insert(self, *args): return _li_std_set.v_int_insert(self, *args)
    def reserve(self, *args): return _li_std_set.v_int_reserve(self, *args)
    def capacity(self): return _li_std_set.v_int_capacity(self)
    __swig_destroy__ = _li_std_set.delete_v_int
    __del__ = lambda self : None;
v_int_swigregister = _li_std_set.v_int_swigregister
v_int_swigregister(v_int)

class pyset(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, pyset, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, pyset, name)
    __repr__ = _swig_repr
    def iterator(self): return _li_std_set.pyset_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _li_std_set.pyset___nonzero__(self)
    def __bool__(self): return _li_std_set.pyset___bool__(self)
    def __len__(self): return _li_std_set.pyset___len__(self)
    def append(self, *args): return _li_std_set.pyset_append(self, *args)
    def __contains__(self, *args): return _li_std_set.pyset___contains__(self, *args)
    def __getitem__(self, *args): return _li_std_set.pyset___getitem__(self, *args)
    def add(self, *args): return _li_std_set.pyset_add(self, *args)
    def discard(self, *args): return _li_std_set.pyset_discard(self, *args)
    def __init__(self, *args): 
        this = _li_std_set.new_pyset(*args)
        try: self.this.append(this)
        except: self.this = this
    def empty(self): return _li_std_set.pyset_empty(self)
    def size(self): return _li_std_set.pyset_size(self)
    def clear(self): return _li_std_set.pyset_clear(self)
    def swap(self, *args): return _li_std_set.pyset_swap(self, *args)
    def count(self, *args): return _li_std_set.pyset_count(self, *args)
    def begin(self): return _li_std_set.pyset_begin(self)
    def end(self): return _li_std_set.pyset_end(self)
    def rbegin(self): return _li_std_set.pyset_rbegin(self)
    def rend(self): return _li_std_set.pyset_rend(self)
    def erase(self, *args): return _li_std_set.pyset_erase(self, *args)
    def find(self, *args): return _li_std_set.pyset_find(self, *args)
    def lower_bound(self, *args): return _li_std_set.pyset_lower_bound(self, *args)
    def upper_bound(self, *args): return _li_std_set.pyset_upper_bound(self, *args)
    def equal_range(self, *args): return _li_std_set.pyset_equal_range(self, *args)
    def insert(self, *args): return _li_std_set.pyset_insert(self, *args)
    __swig_destroy__ = _li_std_set.delete_pyset
    __del__ = lambda self : None;
pyset_swigregister = _li_std_set.pyset_swigregister
pyset_swigregister(pyset)

# This file is compatible with both classic and new-style classes.


