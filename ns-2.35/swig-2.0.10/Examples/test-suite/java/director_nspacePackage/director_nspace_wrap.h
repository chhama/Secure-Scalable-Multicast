/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_nspace_WRAP_H_
#define SWIG_director_nspace_WRAP_H_

class SwigDirector_TopLevel_Bar_Foo : public TopLevel::Bar::Foo, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_TopLevel_Bar_Foo(JNIEnv *jenv);
    virtual ~SwigDirector_TopLevel_Bar_Foo();
    virtual std::string ping();
    virtual std::string pong();
    virtual std::string fooBar(TopLevel::Bar::FooBar *fb);
    virtual TopLevel::Bar::Foo makeFoo();
    virtual TopLevel::Bar::FooBar makeFooBar();
public:
    bool swig_overrides(int n) {
      return (n < 5 ? swig_override[n] : false);
    }
protected:
    bool swig_override[5];
};


#endif
