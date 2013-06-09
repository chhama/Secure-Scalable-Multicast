/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_primitive_types_WRAP_H_
#define SWIG_primitive_types_WRAP_H_

#include <map>
#include <string>


struct SwigDirector_TestDirector : public TestDirector, public Swig::Director {

public:
    SwigDirector_TestDirector(PyObject *self);
    virtual ~SwigDirector_TestDirector();
    virtual char const *vval_namet(namet x) throw(namet);
    virtual char const *vval_cnamet(namet const x) throw(namet);
    virtual bool vval_bool(bool x) throw(bool);
    virtual signed char vval_schar(signed char x) throw(signed char);
    virtual unsigned char vval_uchar(unsigned char x) throw(unsigned char);
    virtual int vval_int(int x) throw(int);
    virtual unsigned int vval_uint(unsigned int x) throw(unsigned int);
    virtual short vval_short(short x) throw(short);
    virtual unsigned short vval_ushort(unsigned short x) throw(unsigned short);
    virtual long vval_long(long x) throw(long);
    virtual unsigned long vval_ulong(unsigned long x) throw(unsigned long);
    virtual long long vval_llong(long long x) throw(long long);
    virtual unsigned long long vval_ullong(unsigned long long x) throw(unsigned long long);
    virtual char vval_char(char x) throw(char);
    virtual pchar vval_pchar(pchar x) throw(pchar);
    virtual pcharc vval_pcharc(pcharc x) throw(pcharc);
    virtual pint vval_pint(pint x) throw(pint);
    virtual Hello vval_hello(Hello x) throw(Hello);
    virtual MyInt vval_myint(MyInt x) throw(MyInt);
    virtual Param< int > vval_parami(Param< int > x) throw(Param< int >);
    virtual Param< double > vval_paramd(Param< double > x) throw(Param< double >);
    virtual Param< char > vval_paramc(Param< char > x) throw(Param< char >);
    virtual size_t vval_sizet(size_t x) throw(size_t);
    virtual bool const &vref_bool(bool const &x) throw(bool);
    virtual signed char const &vref_schar(signed char const &x) throw(signed char);
    virtual unsigned char const &vref_uchar(unsigned char const &x) throw(unsigned char);
    virtual int const &vref_int(int const &x) throw(int);
    virtual unsigned int const &vref_uint(unsigned int const &x) throw(unsigned int);
    virtual short const &vref_short(short const &x) throw(short);
    virtual unsigned short const &vref_ushort(unsigned short const &x) throw(unsigned short);
    virtual long const &vref_long(long const &x) throw(long);
    virtual unsigned long const &vref_ulong(unsigned long const &x) throw(unsigned long);
    virtual long long const &vref_llong(long long const &x) throw(long long);
    virtual unsigned long long const &vref_ullong(unsigned long long const &x) throw(unsigned long long);
    virtual char const &vref_char(char const &x) throw(char);
    virtual pchar const &vref_pchar(pchar const &x) throw(pchar);
    virtual pcharc const &vref_pcharc(pcharc const &x) throw(pcharc);
    virtual pint const &vref_pint(pint const &x) throw(pint);
    virtual Hello const &vref_hello(Hello const &x) throw(Hello);
    virtual MyInt const &vref_myint(MyInt const &x) throw(MyInt);
    virtual Param< int > const &vref_parami(Param< int > const &x) throw(Param< int >);
    virtual Param< double > const &vref_paramd(Param< double > const &x) throw(Param< double >);
    virtual Param< char > const &vref_paramc(Param< char > const &x) throw(Param< char >);
    virtual size_t const &vref_sizet(size_t const &x) throw(size_t);
    virtual int ovr_val(bool x);
    virtual int ovr_ref(bool const &x);
    virtual int ovr_val(signed char x);
    virtual int ovr_ref(signed char const &x);
    virtual int ovr_val(unsigned char x);
    virtual int ovr_ref(unsigned char const &x);
    virtual int ovr_val(int x);
    virtual int ovr_ref(int const &x);
    virtual int ovr_val(unsigned int x);
    virtual int ovr_ref(unsigned int const &x);
    virtual int ovr_val(short x);
    virtual int ovr_ref(short const &x);
    virtual int ovr_val(unsigned short x);
    virtual int ovr_ref(unsigned short const &x);
    virtual int ovr_val(long x);
    virtual int ovr_ref(long const &x);
    virtual int ovr_val(unsigned long x);
    virtual int ovr_ref(unsigned long const &x);
    virtual int ovr_val(long long x);
    virtual int ovr_ref(long long const &x);
    virtual int ovr_val(unsigned long long x);
    virtual int ovr_ref(unsigned long long const &x);
    virtual int ovr_val(char x);
    virtual int ovr_ref(char const &x);
    virtual int ovr_val(pchar x);
    virtual int ovr_ref(pchar const &x);
    virtual Test *vtest(Test *t) const throw(Test);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* swig_protected_method_name, bool val) const
    { swig_inner[swig_protected_method_name] = val;}

private:
    mutable std::map<std::string, bool> swig_inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class TestDirector doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[71];
#endif

};


#endif
