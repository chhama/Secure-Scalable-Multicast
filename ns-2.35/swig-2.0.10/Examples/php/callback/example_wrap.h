/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_EXAMPLE_WRAP_H_
#define SWIG_EXAMPLE_WRAP_H_

class SwigDirector_Callback : public Callback, public Swig::Director {

public:
    SwigDirector_Callback(zval *self TSRMLS_DC);
    virtual ~SwigDirector_Callback();
    virtual void run();
};

#endif
