/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_RENAME2_H
#define PHP_RENAME2_H

extern zend_module_entry rename2_module_entry;
#define phpext_rename2_ptr &rename2_module_entry

#ifdef PHP_WIN32
# define PHP_RENAME2_API __declspec(dllexport)
#else
# define PHP_RENAME2_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(rename2);
PHP_MSHUTDOWN_FUNCTION(rename2);
PHP_RINIT_FUNCTION(rename2);
PHP_RSHUTDOWN_FUNCTION(rename2);
PHP_MINFO_FUNCTION(rename2);

ZEND_NAMED_FUNCTION(_wrap_new_Klass);
ZEND_NAMED_FUNCTION(_wrap_new_Another);
ZEND_NAMED_FUNCTION(_wrap_ABC_methodABC);
ZEND_NAMED_FUNCTION(_wrap_ABC_methodKlass);
ZEND_NAMED_FUNCTION(_wrap_ABC_opABC);
ZEND_NAMED_FUNCTION(_wrap_ABC_opKlass);
ZEND_NAMED_FUNCTION(_wrap_new_ABC);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_opIntPtrA);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_opIntPtrB);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_opAnother2);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_tMethod2);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_tMethodNotXYZ2);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_tMethodXYZ2);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_opT2);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_opNotXYZ2);
ZEND_NAMED_FUNCTION(_wrap_XYZInt_opXYZ2);
ZEND_NAMED_FUNCTION(_wrap_new_XYZInt);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_opIntPtrA);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_opIntPtrB);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_opAnother1);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_tMethod1);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_tMethodNotXYZ1);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_tMethodXYZ1);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_opT1);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_opNotXYZ1);
ZEND_NAMED_FUNCTION(_wrap_XYZDouble_opXYZ1);
ZEND_NAMED_FUNCTION(_wrap_new_XYZDouble);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_opIntPtrA);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_opIntPtrB);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_opAnother3);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_tMethod3);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_tMethodNotXYZ3);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_tMethodXYZ3);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_opT3);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_opNotXYZ3);
ZEND_NAMED_FUNCTION(_wrap_XYZKlass_opXYZ3);
ZEND_NAMED_FUNCTION(_wrap_new_XYZKlass);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_opIntPtrA);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_opIntPtrB);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_opAnother4);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_tMethod4);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_tMethodNotXYZ4);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_tMethodXYZ4);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_opT4);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_opNotXYZ4);
ZEND_NAMED_FUNCTION(_wrap_XYZEnu_opXYZ4);
ZEND_NAMED_FUNCTION(_wrap_new_XYZEnu);
ZEND_NAMED_FUNCTION(_wrap_new_NotXYZInt);
ZEND_NAMED_FUNCTION(_wrap_new_NotXYZDouble);
ZEND_NAMED_FUNCTION(_wrap_new_NotXYZKlass);
ZEND_NAMED_FUNCTION(_wrap_new_NotXYZEnu);
#endif /* PHP_RENAME2_H */
