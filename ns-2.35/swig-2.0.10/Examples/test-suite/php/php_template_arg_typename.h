/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_ARG_TYPENAME_H
#define PHP_TEMPLATE_ARG_TYPENAME_H

extern zend_module_entry template_arg_typename_module_entry;
#define phpext_template_arg_typename_ptr &template_arg_typename_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_ARG_TYPENAME_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_ARG_TYPENAME_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_arg_typename);
PHP_MSHUTDOWN_FUNCTION(template_arg_typename);
PHP_RINIT_FUNCTION(template_arg_typename);
PHP_RSHUTDOWN_FUNCTION(template_arg_typename);
PHP_MINFO_FUNCTION(template_arg_typename);

ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_bool_bool);
ZEND_NAMED_FUNCTION(_wrap_new_BoolUnaryFunction_bool);
#endif /* PHP_TEMPLATE_ARG_TYPENAME_H */
