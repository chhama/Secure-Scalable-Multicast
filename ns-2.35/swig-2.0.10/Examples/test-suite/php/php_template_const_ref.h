/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_CONST_REF_H
#define PHP_TEMPLATE_CONST_REF_H

extern zend_module_entry template_const_ref_module_entry;
#define phpext_template_const_ref_ptr &template_const_ref_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_CONST_REF_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_CONST_REF_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_const_ref);
PHP_MSHUTDOWN_FUNCTION(template_const_ref);
PHP_RINIT_FUNCTION(template_const_ref);
PHP_RSHUTDOWN_FUNCTION(template_const_ref);
PHP_MINFO_FUNCTION(template_const_ref);

ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_Foob_bar);
ZEND_NAMED_FUNCTION(_wrap_new_Foob);
ZEND_NAMED_FUNCTION(_wrap_Fooi_bar);
ZEND_NAMED_FUNCTION(_wrap_new_Fooi);
#endif /* PHP_TEMPLATE_CONST_REF_H */