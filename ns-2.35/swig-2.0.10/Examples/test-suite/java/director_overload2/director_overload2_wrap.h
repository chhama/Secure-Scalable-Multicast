/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_overload2_WRAP_H_
#define SWIG_director_overload2_WRAP_H_

struct SwigDirector_OverloadBase : public OverloadBase, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_OverloadBase(JNIEnv *jenv);
    virtual ~SwigDirector_OverloadBase();
    virtual void mmm();
    virtual void nnn(int vvv);
    virtual void nnn();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};

struct SwigDirector_OverloadDerived1 : public OverloadDerived1, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_OverloadDerived1(JNIEnv *jenv);
    virtual ~SwigDirector_OverloadDerived1();
    virtual void mmm();
    virtual void nnn(int vvv);
    virtual void nnn();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};

struct SwigDirector_OverloadDerived2 : public OverloadDerived2, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_OverloadDerived2(JNIEnv *jenv);
    virtual ~SwigDirector_OverloadDerived2();
    virtual void mmm();
    virtual void nnn(int vvv);
    virtual void nnn();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};


#endif
