/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_redefined_WRAP_H_
#define SWIG_director_redefined_WRAP_H_

struct SwigDirector_B : public B, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_B(JNIEnv *jenv);
    virtual ~SwigDirector_B();
    virtual int get_val(int a);
    virtual int get_rval(int const &a);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};


#endif
