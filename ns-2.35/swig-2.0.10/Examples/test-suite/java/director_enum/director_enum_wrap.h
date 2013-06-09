/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_enum_WRAP_H_
#define SWIG_director_enum_WRAP_H_

class SwigDirector_Foo : public EnumDirector::Foo, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Foo(JNIEnv *jenv);
    virtual ~SwigDirector_Foo();
    virtual EnumDirector::Hello say_hi(EnumDirector::Hello h);
    virtual EnumDirector::Hello say_hello(EnumDirector::Hello arg0);
    virtual EnumDirector::Hello say_hi(EnumDirector::A *a);
    virtual EnumDirector::Foo::Bye say_bye(EnumDirector::Foo::Bye b);
    virtual EnumDirector::Hello const &say_hi_ref(EnumDirector::Hello const &h);
public:
    bool swig_overrides(int n) {
      return (n < 5 ? swig_override[n] : false);
    }
protected:
    bool swig_override[5];
};

struct SwigDirector_A : public EnumDirector::A, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_A(JNIEnv *jenv, double const a, double const b, EnumDirector::FType const c);
    virtual ~SwigDirector_A();
    virtual int f(int i = 0);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_B : public EnumDirector::B, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_B(JNIEnv *jenv, double const a, double const b, EnumDirector::FType const c);
    virtual ~SwigDirector_B();
    virtual int f(int i = 0);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_A2 : public EnumDirector::A2, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_A2(JNIEnv *jenv, EnumDirector::FType const c = EnumDirector::NA_);
    virtual ~SwigDirector_A2();
    virtual int f(int i = 0);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_B2 : public EnumDirector::B2, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_B2(JNIEnv *jenv, EnumDirector::FType const c);
    virtual ~SwigDirector_B2();
    virtual int f(int i = 0);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};


#endif
