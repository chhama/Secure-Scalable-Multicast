/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_DETECT_H
#define PHP_DIRECTOR_DETECT_H

extern zend_module_entry director_detect_module_entry;
#define phpext_director_detect_ptr &director_detect_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_DETECT_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_DETECT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_detect);
PHP_MSHUTDOWN_FUNCTION(director_detect);
PHP_RINIT_FUNCTION(director_detect);
PHP_RSHUTDOWN_FUNCTION(director_detect);
PHP_MINFO_FUNCTION(director_detect);

ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_Foo_cloner);
ZEND_NAMED_FUNCTION(_wrap_Foo_get_value);
ZEND_NAMED_FUNCTION(_wrap_Foo_get_class);
ZEND_NAMED_FUNCTION(_wrap_Foo_just_do_it);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_Bar_baseclass);
ZEND_NAMED_FUNCTION(_wrap_Bar_cloner);
ZEND_NAMED_FUNCTION(_wrap_Bar_get_value);
ZEND_NAMED_FUNCTION(_wrap_Bar_get_class);
ZEND_NAMED_FUNCTION(_wrap_Bar_just_do_it);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
#endif /* PHP_DIRECTOR_DETECT_H */
