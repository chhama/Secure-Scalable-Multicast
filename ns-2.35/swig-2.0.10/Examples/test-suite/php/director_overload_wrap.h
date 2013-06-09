/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_DIRECTOR_OVERLOAD_WRAP_H_
#define SWIG_DIRECTOR_OVERLOAD_WRAP_H_

class SwigDirector_OverloadedClass : public OverloadedClass, public Swig::Director {

public:
    SwigDirector_OverloadedClass(zval *self TSRMLS_DC);
    virtual ~SwigDirector_OverloadedClass();
    virtual void method1() const;
    virtual void method2() const;
    virtual void method3() const;
    virtual void method2(bool b) const;
};
class SwigDirector_OverloadedPointers : public OverloadedPointers, public Swig::Director {

public:
    SwigDirector_OverloadedPointers(zval *self TSRMLS_DC);
    virtual ~SwigDirector_OverloadedPointers();
    virtual void method(int *p) const;
    virtual void method(double *p) const;
    virtual void method(bool &r) const;
    virtual void method(short &r) const;
    virtual void method(OverloadedClass *p) const;
    virtual void method(OverloadedPointers *p) const;
    virtual void notover(int *p) const;
};

#endif
