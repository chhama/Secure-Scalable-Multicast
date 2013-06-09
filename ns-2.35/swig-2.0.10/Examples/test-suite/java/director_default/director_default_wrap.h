/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_default_WRAP_H_
#define SWIG_director_default_WRAP_H_

class SwigDirector_Foo : public Foo, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Foo(JNIEnv *jenv, int i = -1);
    virtual ~SwigDirector_Foo();
    virtual std::string Msg(std::string msg = "default");
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_DefaultsBase : public DefaultsBase, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DefaultsBase(JNIEnv *jenv);
    virtual IntegerPtr defaultargs(double d, int *a = 0);
    virtual ~SwigDirector_DefaultsBase();
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_DefaultsDerived : public DefaultsDerived, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DefaultsDerived(JNIEnv *jenv);
    virtual int *defaultargs(Double d, IntegerPtr a = 0);
    virtual ~SwigDirector_DefaultsDerived();
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};


#endif
