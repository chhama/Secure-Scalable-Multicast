/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_EXTEND2_H
#define PHP_TEMPLATE_EXTEND2_H

extern zend_module_entry template_extend2_module_entry;
#define phpext_template_extend2_ptr &template_extend2_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_EXTEND2_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_EXTEND2_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_extend2);
PHP_MSHUTDOWN_FUNCTION(template_extend2);
PHP_RINIT_FUNCTION(template_extend2);
PHP_RSHUTDOWN_FUNCTION(template_extend2);
PHP_MINFO_FUNCTION(template_extend2);

ZEND_NAMED_FUNCTION(_wrap_lBaz_foo);
ZEND_NAMED_FUNCTION(_wrap_new_lBaz);
ZEND_NAMED_FUNCTION(_wrap_dBaz_foo);
ZEND_NAMED_FUNCTION(_wrap_new_dBaz);
#endif /* PHP_TEMPLATE_EXTEND2_H */
