/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_detect_WRAP_H_
#define SWIG_director_detect_WRAP_H_

struct SwigDirector_Foo : public Foo, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Foo(JNIEnv *jenv);
    virtual ~SwigDirector_Foo();
    virtual Foo *cloner();
    virtual int get_value();
    virtual A *get_class();
    virtual void just_do_it();
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_Bar : public Bar, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Bar(JNIEnv *jenv);
    virtual ~SwigDirector_Bar();
    virtual Bar *cloner();
    virtual foo::Int get_value();
    virtual B *get_class();
    virtual void just_do_it();
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};


#endif
