/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_DEFAULT_ARG_VIRTUAL_DESTRUCTOR_H
#define PHP_TEMPLATE_DEFAULT_ARG_VIRTUAL_DESTRUCTOR_H

extern zend_module_entry template_default_arg_virtual_destructor_module_entry;
#define phpext_template_default_arg_virtual_destructor_ptr &template_default_arg_virtual_destructor_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_DEFAULT_ARG_VIRTUAL_DESTRUCTOR_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_DEFAULT_ARG_VIRTUAL_DESTRUCTOR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_default_arg_virtual_destructor);
PHP_MSHUTDOWN_FUNCTION(template_default_arg_virtual_destructor);
PHP_RINIT_FUNCTION(template_default_arg_virtual_destructor);
PHP_RSHUTDOWN_FUNCTION(template_default_arg_virtual_destructor);
PHP_MINFO_FUNCTION(template_default_arg_virtual_destructor);

ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_new_B_AF);
ZEND_NAMED_FUNCTION(_wrap_new_B_A);
#endif /* PHP_TEMPLATE_DEFAULT_ARG_VIRTUAL_DESTRUCTOR_H */
