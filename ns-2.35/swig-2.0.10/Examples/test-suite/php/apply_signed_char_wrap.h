/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_APPLY_SIGNED_CHAR_WRAP_H_
#define SWIG_APPLY_SIGNED_CHAR_WRAP_H_

struct SwigDirector_DirectorTest : public DirectorTest, public Swig::Director {

public:
    SwigDirector_DirectorTest(zval *self TSRMLS_DC);
    virtual char CharValFunction(char number);
    virtual char const CCharValFunction(char const number);
    virtual char const &CCharRefFunction(char const &number);
    virtual ~SwigDirector_DirectorTest();
};

#endif
