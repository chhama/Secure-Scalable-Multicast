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
            fp, pathname, description = imp.find_module('_typemap_global_scope', [dirname(__file__)])
        except ImportError:
            import _typemap_global_scope
            return _typemap_global_scope
        if fp is not None:
            try:
                _mod = imp.load_module('_typemap_global_scope', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _typemap_global_scope = swig_import_helper()
    del swig_import_helper
else:
    import _typemap_global_scope
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


class Test1(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test1, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test1, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _typemap_global_scope.new_Test1()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_Test1
    __del__ = lambda self : None;
Test1_swigregister = _typemap_global_scope.Test1_swigregister
Test1_swigregister(Test1)

class Test2(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test2, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test2, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _typemap_global_scope.new_Test2()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_Test2
    __del__ = lambda self : None;
Test2_swigregister = _typemap_global_scope.Test2_swigregister
Test2_swigregister(Test2)

class Test3(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test3, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test3, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _typemap_global_scope.new_Test3()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_Test3
    __del__ = lambda self : None;
Test3_swigregister = _typemap_global_scope.Test3_swigregister
Test3_swigregister(Test3)

class Test4(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, Test4, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, Test4, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _typemap_global_scope.new_Test4()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_Test4
    __del__ = lambda self : None;
Test4_swigregister = _typemap_global_scope.Test4_swigregister
Test4_swigregister(Test4)


def test1a(*args):
  return _typemap_global_scope.test1a(*args)
test1a = _typemap_global_scope.test1a

def test1b(*args):
  return _typemap_global_scope.test1b(*args)
test1b = _typemap_global_scope.test1b

def test2a(*args):
  return _typemap_global_scope.test2a(*args)
test2a = _typemap_global_scope.test2a

def test2b(*args):
  return _typemap_global_scope.test2b(*args)
test2b = _typemap_global_scope.test2b

def test3a(*args):
  return _typemap_global_scope.test3a(*args)
test3a = _typemap_global_scope.test3a

def test3b(*args):
  return _typemap_global_scope.test3b(*args)
test3b = _typemap_global_scope.test3b

def test3c(*args):
  return _typemap_global_scope.test3c(*args)
test3c = _typemap_global_scope.test3c

def test3d(*args):
  return _typemap_global_scope.test3d(*args)
test3d = _typemap_global_scope.test3d

def test3e(*args):
  return _typemap_global_scope.test3e(*args)
test3e = _typemap_global_scope.test3e

def test4a(*args):
  return _typemap_global_scope.test4a(*args)
test4a = _typemap_global_scope.test4a

def test4b(*args):
  return _typemap_global_scope.test4b(*args)
test4b = _typemap_global_scope.test4b

def test4c(*args):
  return _typemap_global_scope.test4c(*args)
test4c = _typemap_global_scope.test4c

def test4d(*args):
  return _typemap_global_scope.test4d(*args)
test4d = _typemap_global_scope.test4d

def test4e(*args):
  return _typemap_global_scope.test4e(*args)
test4e = _typemap_global_scope.test4e
class XX(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, XX, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, XX, name)
    __repr__ = _swig_repr
    def __init__(self): 
        this = _typemap_global_scope.new_XX()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_XX
    __del__ = lambda self : None;
XX_swigregister = _typemap_global_scope.XX_swigregister
XX_swigregister(XX)

class TemplateTest1XX(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TemplateTest1XX, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TemplateTest1XX, name)
    __repr__ = _swig_repr
    __swig_setmethods__["m_t"] = _typemap_global_scope.TemplateTest1XX_m_t_set
    __swig_getmethods__["m_t"] = _typemap_global_scope.TemplateTest1XX_m_t_get
    if _newclass:m_t = _swig_property(_typemap_global_scope.TemplateTest1XX_m_t_get, _typemap_global_scope.TemplateTest1XX_m_t_set)
    def __init__(self): 
        this = _typemap_global_scope.new_TemplateTest1XX()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_TemplateTest1XX
    __del__ = lambda self : None;
TemplateTest1XX_swigregister = _typemap_global_scope.TemplateTest1XX_swigregister
TemplateTest1XX_swigregister(TemplateTest1XX)

class TemplateTest2XX(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TemplateTest2XX, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TemplateTest2XX, name)
    __repr__ = _swig_repr
    __swig_setmethods__["m_t"] = _typemap_global_scope.TemplateTest2XX_m_t_set
    __swig_getmethods__["m_t"] = _typemap_global_scope.TemplateTest2XX_m_t_get
    if _newclass:m_t = _swig_property(_typemap_global_scope.TemplateTest2XX_m_t_get, _typemap_global_scope.TemplateTest2XX_m_t_set)
    def __init__(self): 
        this = _typemap_global_scope.new_TemplateTest2XX()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_TemplateTest2XX
    __del__ = lambda self : None;
TemplateTest2XX_swigregister = _typemap_global_scope.TemplateTest2XX_swigregister
TemplateTest2XX_swigregister(TemplateTest2XX)

class TemplateTest3XX(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TemplateTest3XX, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TemplateTest3XX, name)
    __repr__ = _swig_repr
    __swig_setmethods__["m_t"] = _typemap_global_scope.TemplateTest3XX_m_t_set
    __swig_getmethods__["m_t"] = _typemap_global_scope.TemplateTest3XX_m_t_get
    if _newclass:m_t = _swig_property(_typemap_global_scope.TemplateTest3XX_m_t_get, _typemap_global_scope.TemplateTest3XX_m_t_set)
    def __init__(self): 
        this = _typemap_global_scope.new_TemplateTest3XX()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_TemplateTest3XX
    __del__ = lambda self : None;
TemplateTest3XX_swigregister = _typemap_global_scope.TemplateTest3XX_swigregister
TemplateTest3XX_swigregister(TemplateTest3XX)

class TemplateTest4XX(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TemplateTest4XX, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TemplateTest4XX, name)
    __repr__ = _swig_repr
    __swig_setmethods__["m_t"] = _typemap_global_scope.TemplateTest4XX_m_t_set
    __swig_getmethods__["m_t"] = _typemap_global_scope.TemplateTest4XX_m_t_get
    if _newclass:m_t = _swig_property(_typemap_global_scope.TemplateTest4XX_m_t_get, _typemap_global_scope.TemplateTest4XX_m_t_set)
    def __init__(self): 
        this = _typemap_global_scope.new_TemplateTest4XX()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _typemap_global_scope.delete_TemplateTest4XX
    __del__ = lambda self : None;
TemplateTest4XX_swigregister = _typemap_global_scope.TemplateTest4XX_swigregister
TemplateTest4XX_swigregister(TemplateTest4XX)


def test_template_1a(*args):
  return _typemap_global_scope.test_template_1a(*args)
test_template_1a = _typemap_global_scope.test_template_1a

def test_template_1b(*args):
  return _typemap_global_scope.test_template_1b(*args)
test_template_1b = _typemap_global_scope.test_template_1b

def test_template_2a(*args):
  return _typemap_global_scope.test_template_2a(*args)
test_template_2a = _typemap_global_scope.test_template_2a

def test_template_2b(*args):
  return _typemap_global_scope.test_template_2b(*args)
test_template_2b = _typemap_global_scope.test_template_2b

def test_template_3a(*args):
  return _typemap_global_scope.test_template_3a(*args)
test_template_3a = _typemap_global_scope.test_template_3a

def test_template_3b(*args):
  return _typemap_global_scope.test_template_3b(*args)
test_template_3b = _typemap_global_scope.test_template_3b

def test_template_3c(*args):
  return _typemap_global_scope.test_template_3c(*args)
test_template_3c = _typemap_global_scope.test_template_3c

def test_template_3d(*args):
  return _typemap_global_scope.test_template_3d(*args)
test_template_3d = _typemap_global_scope.test_template_3d

def test_template_3e(*args):
  return _typemap_global_scope.test_template_3e(*args)
test_template_3e = _typemap_global_scope.test_template_3e

def test_template_4a(*args):
  return _typemap_global_scope.test_template_4a(*args)
test_template_4a = _typemap_global_scope.test_template_4a

def test_template_4b(*args):
  return _typemap_global_scope.test_template_4b(*args)
test_template_4b = _typemap_global_scope.test_template_4b

def test_template_4c(*args):
  return _typemap_global_scope.test_template_4c(*args)
test_template_4c = _typemap_global_scope.test_template_4c

def test_template_4d(*args):
  return _typemap_global_scope.test_template_4d(*args)
test_template_4d = _typemap_global_scope.test_template_4d

def test_template_4e(*args):
  return _typemap_global_scope.test_template_4e(*args)
test_template_4e = _typemap_global_scope.test_template_4e
enum_1 = _typemap_global_scope.enum_1
enum_2 = _typemap_global_scope.enum_2
enum_3 = _typemap_global_scope.enum_3
enum_4 = _typemap_global_scope.enum_4

def test_enum_1a(*args):
  return _typemap_global_scope.test_enum_1a(*args)
test_enum_1a = _typemap_global_scope.test_enum_1a

def test_enum_1b(*args):
  return _typemap_global_scope.test_enum_1b(*args)
test_enum_1b = _typemap_global_scope.test_enum_1b

def test_enum_2a(*args):
  return _typemap_global_scope.test_enum_2a(*args)
test_enum_2a = _typemap_global_scope.test_enum_2a

def test_enum_2b(*args):
  return _typemap_global_scope.test_enum_2b(*args)
test_enum_2b = _typemap_global_scope.test_enum_2b

def test_enum_3a(*args):
  return _typemap_global_scope.test_enum_3a(*args)
test_enum_3a = _typemap_global_scope.test_enum_3a

def test_enum_3b(*args):
  return _typemap_global_scope.test_enum_3b(*args)
test_enum_3b = _typemap_global_scope.test_enum_3b

def test_enum_3c(*args):
  return _typemap_global_scope.test_enum_3c(*args)
test_enum_3c = _typemap_global_scope.test_enum_3c

def test_enum_3d(*args):
  return _typemap_global_scope.test_enum_3d(*args)
test_enum_3d = _typemap_global_scope.test_enum_3d

def test_enum_3e(*args):
  return _typemap_global_scope.test_enum_3e(*args)
test_enum_3e = _typemap_global_scope.test_enum_3e

def test_enum_4a(*args):
  return _typemap_global_scope.test_enum_4a(*args)
test_enum_4a = _typemap_global_scope.test_enum_4a

def test_enum_4b(*args):
  return _typemap_global_scope.test_enum_4b(*args)
test_enum_4b = _typemap_global_scope.test_enum_4b

def test_enum_4c(*args):
  return _typemap_global_scope.test_enum_4c(*args)
test_enum_4c = _typemap_global_scope.test_enum_4c

def test_enum_4d(*args):
  return _typemap_global_scope.test_enum_4d(*args)
test_enum_4d = _typemap_global_scope.test_enum_4d

def test_enum_4e(*args):
  return _typemap_global_scope.test_enum_4e(*args)
test_enum_4e = _typemap_global_scope.test_enum_4e
# This file is compatible with both classic and new-style classes.


