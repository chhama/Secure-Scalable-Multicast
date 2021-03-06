/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_exception_WRAP_H_
#define SWIG_director_exception_WRAP_H_

class SwigDirector_Foo : public Foo, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Foo(JNIEnv *jenv);
    virtual ~SwigDirector_Foo();
    virtual std::string ping();
    virtual std::string pong(int val = 3);
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};

class SwigDirector_Bar : public Bar, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Bar(JNIEnv *jenv);
    virtual ~SwigDirector_Bar() throw ();
    virtual std::string ping() throw(Exception1, Exception2 &);
    virtual std::string pong() throw(Unknown1, int, Unknown2 &);
    virtual std::string pang() throw();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};


#endif
