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
            fp, pathname, description = imp.find_module('_li_boost_shared_ptr', [dirname(__file__)])
        except ImportError:
            import _li_boost_shared_ptr
            return _li_boost_shared_ptr
        if fp is not None:
            try:
                _mod = imp.load_module('_li_boost_shared_ptr', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _li_boost_shared_ptr = swig_import_helper()
    del swig_import_helper
else:
    import _li_boost_shared_ptr
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


SHARED_PTR_DISOWN = _li_boost_shared_ptr.SHARED_PTR_DISOWN
class Klass(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Klass, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Klass, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _li_boost_shared_ptr.delete_Klass
    __del__ = lambda self : None;
    def getValue(self): return _li_boost_shared_ptr.Klass_getValue(self)
    def append(self, *args): return _li_boost_shared_ptr.Klass_append(self, *args)
    def __init__(self, *args): 
        this = _li_boost_shared_ptr.new_Klass(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_getmethods__["getTotal_count"] = lambda x: _li_boost_shared_ptr.Klass_getTotal_count
    if _newclass:getTotal_count = staticmethod(_li_boost_shared_ptr.Klass_getTotal_count)
Klass_swigregister = _li_boost_shared_ptr.Klass_swigregister
Klass_swigregister(Klass)
cvar = _li_boost_shared_ptr.cvar

def Klass_getTotal_count():
  return _li_boost_shared_ptr.Klass_getTotal_count()
Klass_getTotal_count = _li_boost_shared_ptr.Klass_getTotal_count

class KlassDerived(Klass):
    __swig_setmethods__ = {}
    for _s in [Klass]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, KlassDerived, name, value)
    __swig_getmethods__ = {}
    for _s in [Klass]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, KlassDerived, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _li_boost_shared_ptr.new_KlassDerived(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_boost_shared_ptr.delete_KlassDerived
    __del__ = lambda self : None;
    def getValue(self): return _li_boost_shared_ptr.KlassDerived_getValue(self)
KlassDerived_swigregister = _li_boost_shared_ptr.KlassDerived_swigregister
KlassDerived_swigregister(KlassDerived)


def derivedpointertest(*args):
  return _li_boost_shared_ptr.derivedpointertest(*args)
derivedpointertest = _li_boost_shared_ptr.derivedpointertest

def derivedreftest(*args):
  return _li_boost_shared_ptr.derivedreftest(*args)
derivedreftest = _li_boost_shared_ptr.derivedreftest

def derivedsmartptrtest(*args):
  return _li_boost_shared_ptr.derivedsmartptrtest(*args)
derivedsmartptrtest = _li_boost_shared_ptr.derivedsmartptrtest

def derivedsmartptrpointertest(*args):
  return _li_boost_shared_ptr.derivedsmartptrpointertest(*args)
derivedsmartptrpointertest = _li_boost_shared_ptr.derivedsmartptrpointertest

def derivedsmartptrreftest(*args):
  return _li_boost_shared_ptr.derivedsmartptrreftest(*args)
derivedsmartptrreftest = _li_boost_shared_ptr.derivedsmartptrreftest

def derivedsmartptrpointerreftest(*args):
  return _li_boost_shared_ptr.derivedsmartptrpointerreftest(*args)
derivedsmartptrpointerreftest = _li_boost_shared_ptr.derivedsmartptrpointerreftest
class Klass2ndDerived(Klass):
    __swig_setmethods__ = {}
    for _s in [Klass]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Klass2ndDerived, name, value)
    __swig_getmethods__ = {}
    for _s in [Klass]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Klass2ndDerived, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _li_boost_shared_ptr.new_Klass2ndDerived(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_boost_shared_ptr.delete_Klass2ndDerived
    __del__ = lambda self : None;
Klass2ndDerived_swigregister = _li_boost_shared_ptr.Klass2ndDerived_swigregister
Klass2ndDerived_swigregister(Klass2ndDerived)

class Klass3rdDerived(Klass2ndDerived):
    __swig_setmethods__ = {}
    for _s in [Klass2ndDerived]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, Klass3rdDerived, name, value)
    __swig_getmethods__ = {}
    for _s in [Klass2ndDerived]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, Klass3rdDerived, name)
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _li_boost_shared_ptr.new_Klass3rdDerived(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _li_boost_shared_ptr.delete_Klass3rdDerived
    __del__ = lambda self : None;
    def getValue(self): return _li_boost_shared_ptr.Klass3rdDerived_getValue(self)
Klass3rdDerived_swigregister = _li_boost_shared_ptr.Klass3rdDerived_swigregister
Klass3rdDerived_swigregister(Klass3rdDerived)


def test3rdupcast(*args):
  return _li_boost_shared_ptr.test3rdupcast(*args)
test3rdupcast = _li_boost_shared_ptr.test3rdupcast

def factorycreate():
  return _li_boost_shared_ptr.factorycreate()
factorycreate = _li_boost_shared_ptr.factorycreate

def smartpointertest(*args):
  return _li_boost_shared_ptr.smartpointertest(*args)
smartpointertest = _li_boost_shared_ptr.smartpointertest

def smartpointerpointertest(*args):
  return _li_boost_shared_ptr.smartpointerpointertest(*args)
smartpointerpointertest = _li_boost_shared_ptr.smartpointerpointertest

def smartpointerreftest(*args):
  return _li_boost_shared_ptr.smartpointerreftest(*args)
smartpointerreftest = _li_boost_shared_ptr.smartpointerreftest

def smartpointerpointerreftest(*args):
  return _li_boost_shared_ptr.smartpointerpointerreftest(*args)
smartpointerpointerreftest = _li_boost_shared_ptr.smartpointerpointerreftest

def constsmartpointertest(*args):
  return _li_boost_shared_ptr.constsmartpointertest(*args)
constsmartpointertest = _li_boost_shared_ptr.constsmartpointertest

def constsmartpointerpointertest(*args):
  return _li_boost_shared_ptr.constsmartpointerpointertest(*args)
constsmartpointerpointertest = _li_boost_shared_ptr.constsmartpointerpointertest

def constsmartpointerreftest(*args):
  return _li_boost_shared_ptr.constsmartpointerreftest(*args)
constsmartpointerreftest = _li_boost_shared_ptr.constsmartpointerreftest

def valuetest(*args):
  return _li_boost_shared_ptr.valuetest(*args)
valuetest = _li_boost_shared_ptr.valuetest

def pointertest(*args):
  return _li_boost_shared_ptr.pointertest(*args)
pointertest = _li_boost_shared_ptr.pointertest

def reftest(*args):
  return _li_boost_shared_ptr.reftest(*args)
reftest = _li_boost_shared_ptr.reftest

def pointerreftest(*args):
  return _li_boost_shared_ptr.pointerreftest(*args)
pointerreftest = _li_boost_shared_ptr.pointerreftest

def nullsmartpointerpointertest(*args):
  return _li_boost_shared_ptr.nullsmartpointerpointertest(*args)
nullsmartpointerpointertest = _li_boost_shared_ptr.nullsmartpointerpointertest

def pointerownertest():
  return _li_boost_shared_ptr.pointerownertest()
pointerownertest = _li_boost_shared_ptr.pointerownertest

def smartpointerpointerownertest():
  return _li_boost_shared_ptr.smartpointerpointerownertest()
smartpointerpointerownertest = _li_boost_shared_ptr.smartpointerpointerownertest

def use_count(*args):
  return _li_boost_shared_ptr.use_count(*args)
use_count = _li_boost_shared_ptr.use_count

def ref_1():
  return _li_boost_shared_ptr.ref_1()
ref_1 = _li_boost_shared_ptr.ref_1

def overload_rawbyval(*args):
  return _li_boost_shared_ptr.overload_rawbyval(*args)
overload_rawbyval = _li_boost_shared_ptr.overload_rawbyval

def overload_rawbyref(*args):
  return _li_boost_shared_ptr.overload_rawbyref(*args)
overload_rawbyref = _li_boost_shared_ptr.overload_rawbyref

def overload_rawbyptr(*args):
  return _li_boost_shared_ptr.overload_rawbyptr(*args)
overload_rawbyptr = _li_boost_shared_ptr.overload_rawbyptr

def overload_rawbyptrref(*args):
  return _li_boost_shared_ptr.overload_rawbyptrref(*args)
overload_rawbyptrref = _li_boost_shared_ptr.overload_rawbyptrref

def overload_smartbyval(*args):
  return _li_boost_shared_ptr.overload_smartbyval(*args)
overload_smartbyval = _li_boost_shared_ptr.overload_smartbyval

def overload_smartbyref(*args):
  return _li_boost_shared_ptr.overload_smartbyref(*args)
overload_smartbyref = _li_boost_shared_ptr.overload_smartbyref

def overload_smartbyptr(*args):
  return _li_boost_shared_ptr.overload_smartbyptr(*args)
overload_smartbyptr = _li_boost_shared_ptr.overload_smartbyptr

def overload_smartbyptrref(*args):
  return _li_boost_shared_ptr.overload_smartbyptrref(*args)
overload_smartbyptrref = _li_boost_shared_ptr.overload_smartbyptrref
class MemberVariables(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, MemberVariables, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, MemberVariables, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _li_boost_shared_ptr.new_MemberVariables()
        try: self.this.append(this)
        except: self.this = this
    __swig_setmethods__["SmartMemberValue"] = _li_boost_shared_ptr.MemberVariables_SmartMemberValue_set
    __swig_getmethods__["SmartMemberValue"] = _li_boost_shared_ptr.MemberVariables_SmartMemberValue_get
    if _newclass:SmartMemberValue = _swig_property(_li_boost_shared_ptr.MemberVariables_SmartMemberValue_get, _li_boost_shared_ptr.MemberVariables_SmartMemberValue_set)
    __swig_setmethods__["SmartMemberPointer"] = _li_boost_shared_ptr.MemberVariables_SmartMemberPointer_set
    __swig_getmethods__["SmartMemberPointer"] = _li_boost_shared_ptr.MemberVariables_SmartMemberPointer_get
    if _newclass:SmartMemberPointer = _swig_property(_li_boost_shared_ptr.MemberVariables_SmartMemberPointer_get, _li_boost_shared_ptr.MemberVariables_SmartMemberPointer_set)
    __swig_setmethods__["SmartMemberReference"] = _li_boost_shared_ptr.MemberVariables_SmartMemberReference_set
    __swig_getmethods__["SmartMemberReference"] = _li_boost_shared_ptr.MemberVariables_SmartMemberReference_get
    if _newclass:SmartMemberReference = _swig_property(_li_boost_shared_ptr.MemberVariables_SmartMemberReference_get, _li_boost_shared_ptr.MemberVariables_SmartMemberReference_set)
    __swig_setmethods__["MemberValue"] = _li_boost_shared_ptr.MemberVariables_MemberValue_set
    __swig_getmethods__["MemberValue"] = _li_boost_shared_ptr.MemberVariables_MemberValue_get
    if _newclass:MemberValue = _swig_property(_li_boost_shared_ptr.MemberVariables_MemberValue_get, _li_boost_shared_ptr.MemberVariables_MemberValue_set)
    __swig_setmethods__["MemberPointer"] = _li_boost_shared_ptr.MemberVariables_MemberPointer_set
    __swig_getmethods__["MemberPointer"] = _li_boost_shared_ptr.MemberVariables_MemberPointer_get
    if _newclass:MemberPointer = _swig_property(_li_boost_shared_ptr.MemberVariables_MemberPointer_get, _li_boost_shared_ptr.MemberVariables_MemberPointer_set)
    __swig_setmethods__["MemberReference"] = _li_boost_shared_ptr.MemberVariables_MemberReference_set
    __swig_getmethods__["MemberReference"] = _li_boost_shared_ptr.MemberVariables_MemberReference_get
    if _newclass:MemberReference = _swig_property(_li_boost_shared_ptr.MemberVariables_MemberReference_get, _li_boost_shared_ptr.MemberVariables_MemberReference_set)
    __swig_destroy__ = _li_boost_shared_ptr.delete_MemberVariables
    __del__ = lambda self : None;
MemberVariables_swigregister = _li_boost_shared_ptr.MemberVariables_swigregister
MemberVariables_swigregister(MemberVariables)

class BaseIntDouble(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, BaseIntDouble, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, BaseIntDouble, name)
    __repr__ = _swig_repr
    __swig_setmethods__["klassBase"] = _li_boost_shared_ptr.BaseIntDouble_klassBase_set
    __swig_getmethods__["klassBase"] = _li_boost_shared_ptr.BaseIntDouble_klassBase_get
    if _newclass:klassBase = _swig_property(_li_boost_shared_ptr.BaseIntDouble_klassBase_get, _li_boost_shared_ptr.BaseIntDouble_klassBase_set)
    __swig_setmethods__["baseVal1"] = _li_boost_shared_ptr.BaseIntDouble_baseVal1_set
    __swig_getmethods__["baseVal1"] = _li_boost_shared_ptr.BaseIntDouble_baseVal1_get
    if _newclass:baseVal1 = _swig_property(_li_boost_shared_ptr.BaseIntDouble_baseVal1_get, _li_boost_shared_ptr.BaseIntDouble_baseVal1_set)
    __swig_setmethods__["baseVal2"] = _li_boost_shared_ptr.BaseIntDouble_baseVal2_set
    __swig_getmethods__["baseVal2"] = _li_boost_shared_ptr.BaseIntDouble_baseVal2_get
    if _newclass:baseVal2 = _swig_property(_li_boost_shared_ptr.BaseIntDouble_baseVal2_get, _li_boost_shared_ptr.BaseIntDouble_baseVal2_set)
    def __init__(self, *args): 
        this = _li_boost_shared_ptr.new_BaseIntDouble(*args)
        try: self.this.append(this)
        except: self.this = this
    def getValue(self): return _li_boost_shared_ptr.BaseIntDouble_getValue(self)
    __swig_destroy__ = _li_boost_shared_ptr.delete_BaseIntDouble
    __del__ = lambda self : None;
BaseIntDouble_swigregister = _li_boost_shared_ptr.BaseIntDouble_swigregister
BaseIntDouble_swigregister(BaseIntDouble)


def pair_id2(*args):
  return _li_boost_shared_ptr.pair_id2(*args)
pair_id2 = _li_boost_shared_ptr.pair_id2

def pair_id1(*args):
  return _li_boost_shared_ptr.pair_id1(*args)
pair_id1 = _li_boost_shared_ptr.pair_id1
class PairIntDouble(BaseIntDouble):
    __swig_setmethods__ = {}
    for _s in [BaseIntDouble]: __swig_setmethods__.update(getattr(_s,'__swig_setmethods__',{}))
    __setattr__ = lambda self, name, value: _swig_setattr(self, PairIntDouble, name, value)
    __swig_getmethods__ = {}
    for _s in [BaseIntDouble]: __swig_getmethods__.update(getattr(_s,'__swig_getmethods__',{}))
    __getattr__ = lambda self, name: _swig_getattr(self, PairIntDouble, name)
    __repr__ = _swig_repr
    __swig_setmethods__["klassPair"] = _li_boost_shared_ptr.PairIntDouble_klassPair_set
    __swig_getmethods__["klassPair"] = _li_boost_shared_ptr.PairIntDouble_klassPair_get
    if _newclass:klassPair = _swig_property(_li_boost_shared_ptr.PairIntDouble_klassPair_get, _li_boost_shared_ptr.PairIntDouble_klassPair_set)
    __swig_setmethods__["val1"] = _li_boost_shared_ptr.PairIntDouble_val1_set
    __swig_getmethods__["val1"] = _li_boost_shared_ptr.PairIntDouble_val1_get
    if _newclass:val1 = _swig_property(_li_boost_shared_ptr.PairIntDouble_val1_get, _li_boost_shared_ptr.PairIntDouble_val1_set)
    __swig_setmethods__["val2"] = _li_boost_shared_ptr.PairIntDouble_val2_set
    __swig_getmethods__["val2"] = _li_boost_shared_ptr.PairIntDouble_val2_get
    if _newclass:val2 = _swig_property(_li_boost_shared_ptr.PairIntDouble_val2_get, _li_boost_shared_ptr.PairIntDouble_val2_set)
    def __init__(self, *args): 
        this = _li_boost_shared_ptr.new_PairIntDouble(*args)
        try: self.this.append(this)
        except: self.this = this
    def getValue(self): return _li_boost_shared_ptr.PairIntDouble_getValue(self)
    __swig_destroy__ = _li_boost_shared_ptr.delete_PairIntDouble
    __del__ = lambda self : None;
PairIntDouble_swigregister = _li_boost_shared_ptr.PairIntDouble_swigregister
PairIntDouble_swigregister(PairIntDouble)


def shared_ptr_wrapper_count():
  return _li_boost_shared_ptr.shared_ptr_wrapper_count()
shared_ptr_wrapper_count = _li_boost_shared_ptr.shared_ptr_wrapper_count
# This file is compatible with both classic and new-style classes.

NOT_COUNTING = cvar.NOT_COUNTING

