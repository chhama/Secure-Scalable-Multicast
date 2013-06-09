/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_PURE_VIRTUAL_H
#define PHP_PURE_VIRTUAL_H

extern zend_module_entry pure_virtual_module_entry;
#define phpext_pure_virtual_ptr &pure_virtual_module_entry

#ifdef PHP_WIN32
# define PHP_PURE_VIRTUAL_API __declspec(dllexport)
#else
# define PHP_PURE_VIRTUAL_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(pure_virtual);
PHP_MSHUTDOWN_FUNCTION(pure_virtual);
PHP_RINIT_FUNCTION(pure_virtual);
PHP_RSHUTDOWN_FUNCTION(pure_virtual);
PHP_MINFO_FUNCTION(pure_virtual);

ZEND_NAMED_FUNCTION(_wrap_A_something);
ZEND_NAMED_FUNCTION(_wrap_A_method);
ZEND_NAMED_FUNCTION(_wrap_new_B);
ZEND_NAMED_FUNCTION(_wrap_B_something);
ZEND_NAMED_FUNCTION(_wrap_B_method);
ZEND_NAMED_FUNCTION(_wrap_C_method);
ZEND_NAMED_FUNCTION(_wrap_D_something);
ZEND_NAMED_FUNCTION(_wrap_new_D);
ZEND_NAMED_FUNCTION(_wrap_AA_method2);
ZEND_NAMED_FUNCTION(_wrap_E_something);
ZEND_NAMED_FUNCTION(_wrap_F_method2);
ZEND_NAMED_FUNCTION(_wrap_new_F);
#endif /* PHP_PURE_VIRTUAL_H */