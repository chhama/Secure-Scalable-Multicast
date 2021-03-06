/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_protected_overloaded_WRAP_H_
#define SWIG_director_protected_overloaded_WRAP_H_

class SwigDirector_IDataObserver : public IDataObserver, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_IDataObserver(JNIEnv *jenv);
    virtual ~SwigDirector_IDataObserver();
    virtual void notoverloaded();
    virtual void isoverloaded();
    virtual void isoverloaded(int i);
    virtual void isoverloaded(int i, double d);
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_DerivedDataObserver : public DerivedDataObserver, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DerivedDataObserver(JNIEnv *jenv);
    virtual ~SwigDirector_DerivedDataObserver();
    virtual void notoverloaded();
    virtual void isoverloaded();
    virtual void isoverloaded(int i);
    virtual void isoverloaded(int i, double d);
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};


#endif
