/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_TBASE_TEMPLATE_H
#define PHP_TEMPLATE_TBASE_TEMPLATE_H

extern zend_module_entry template_tbase_template_module_entry;
#define phpext_template_tbase_template_ptr &template_tbase_template_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_TBASE_TEMPLATE_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_TBASE_TEMPLATE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_tbase_template);
PHP_MSHUTDOWN_FUNCTION(template_tbase_template);
PHP_RINIT_FUNCTION(template_tbase_template);
PHP_RSHUTDOWN_FUNCTION(template_tbase_template);
PHP_MINFO_FUNCTION(template_tbase_template);

ZEND_NAMED_FUNCTION(_wrap_new_traits_dd);
ZEND_NAMED_FUNCTION(_wrap_Funktion_dd_test);
ZEND_NAMED_FUNCTION(_wrap_new_Funktion_dd);
ZEND_NAMED_FUNCTION(_wrap_new_Class_dd);
ZEND_NAMED_FUNCTION(_wrap_make_Class_dd);
#endif /* PHP_TEMPLATE_TBASE_TEMPLATE_H */
