/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_INT_CONST_H
#define PHP_TEMPLATE_INT_CONST_H

extern zend_module_entry template_int_const_module_entry;
#define phpext_template_int_const_ptr &template_int_const_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_INT_CONST_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_INT_CONST_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_int_const);
PHP_MSHUTDOWN_FUNCTION(template_int_const);
PHP_RINIT_FUNCTION(template_int_const);
PHP_RSHUTDOWN_FUNCTION(template_int_const);
PHP_MINFO_FUNCTION(template_int_const);

ZEND_NAMED_FUNCTION(_wrap_new_interface_traits);
ZEND_NAMED_FUNCTION(_wrap_new_module_traits);
ZEND_NAMED_FUNCTION(_wrap_new_Interface_UP);
ZEND_NAMED_FUNCTION(_wrap_new_Module_1);
ZEND_NAMED_FUNCTION(_wrap_new_ExtInterface1);
ZEND_NAMED_FUNCTION(_wrap_new_ExtInterface2);
ZEND_NAMED_FUNCTION(_wrap_new_ExtModule1);
ZEND_NAMED_FUNCTION(_wrap_new_ExtModule2);
#endif /* PHP_TEMPLATE_INT_CONST_H */
