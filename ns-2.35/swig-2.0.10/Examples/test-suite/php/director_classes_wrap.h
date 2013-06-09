/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_DIRECTOR_CLASSES_WRAP_H_
#define SWIG_DIRECTOR_CLASSES_WRAP_H_

class SwigDirector_Base : public Base, public Swig::Director {

public:
    SwigDirector_Base(zval *self, double dd TSRMLS_DC);
    virtual ~SwigDirector_Base();
    virtual DoubleHolder Val(DoubleHolder x);
    virtual DoubleHolder &Ref(DoubleHolder &x);
    virtual DoubleHolder *Ptr(DoubleHolder *x);
    virtual std::string FullyOverloaded(int x);
    virtual std::string FullyOverloaded(bool x);
    virtual std::string SemiOverloaded(int x);
    virtual std::string SemiOverloaded(bool x);
    virtual std::string DefaultParms(int x, double y = 1.1);
};
class SwigDirector_Derived : public Derived, public Swig::Director {

public:
    SwigDirector_Derived(zval *self, double dd TSRMLS_DC);
    virtual ~SwigDirector_Derived();
    virtual DoubleHolder Val(DoubleHolder x);
    virtual DoubleHolder &Ref(DoubleHolder &x);
    virtual DoubleHolder *Ptr(DoubleHolder *x);
    virtual std::string FullyOverloaded(int x);
    virtual std::string FullyOverloaded(bool x);
    virtual std::string SemiOverloaded(int x);
    virtual std::string SemiOverloaded(bool x);
    virtual std::string DefaultParms(int x, double y = 1.1);
};
class SwigDirector_BaseClass : public BaseClass, public Swig::Director {

public:
    SwigDirector_BaseClass(zval *self TSRMLS_DC);
    virtual ~SwigDirector_BaseClass();
    virtual int dofoo(int &one, int &two, int &three);
};
class SwigDirector_DerivedClass : public DerivedClass, public Swig::Director {

public:
    SwigDirector_DerivedClass(zval *self TSRMLS_DC);
    virtual ~SwigDirector_DerivedClass();
    virtual int dofoo(int &one, int &two, int &three);
};

#endif
