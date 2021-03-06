/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_TYPEDEF_FNC_H
#define PHP_TEMPLATE_TYPEDEF_FNC_H

extern zend_module_entry template_typedef_fnc_module_entry;
#define phpext_template_typedef_fnc_ptr &template_typedef_fnc_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_TYPEDEF_FNC_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_TYPEDEF_FNC_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_typedef_fnc);
PHP_MSHUTDOWN_FUNCTION(template_typedef_fnc);
PHP_RINIT_FUNCTION(template_typedef_fnc);
PHP_RSHUTDOWN_FUNCTION(template_typedef_fnc);
PHP_MINFO_FUNCTION(template_typedef_fnc);

ZEND_NAMED_FUNCTION(_wrap_new_IntVector);
ZEND_NAMED_FUNCTION(_wrap_IntVector_size);
ZEND_NAMED_FUNCTION(_wrap_IntVector_capacity);
ZEND_NAMED_FUNCTION(_wrap_IntVector_reserve);
ZEND_NAMED_FUNCTION(_wrap_IntVector_clear);
ZEND_NAMED_FUNCTION(_wrap_IntVector_push);
ZEND_NAMED_FUNCTION(_wrap_IntVector_is_empty);
ZEND_NAMED_FUNCTION(_wrap_IntVector_pop);
ZEND_NAMED_FUNCTION(_wrap_IntVector_get);
ZEND_NAMED_FUNCTION(_wrap_IntVector_set);
ZEND_NAMED_FUNCTION(_wrap_setCallback);
#endif /* PHP_TEMPLATE_TYPEDEF_FNC_H */
