/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_ALTERNATING_H
#define PHP_DIRECTOR_ALTERNATING_H

extern zend_module_entry director_alternating_module_entry;
#define phpext_director_alternating_ptr &director_alternating_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_ALTERNATING_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_ALTERNATING_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_alternating);
PHP_MSHUTDOWN_FUNCTION(director_alternating);
PHP_RINIT_FUNCTION(director_alternating);
PHP_RSHUTDOWN_FUNCTION(director_alternating);
PHP_MINFO_FUNCTION(director_alternating);

ZEND_NAMED_FUNCTION(_wrap_Foo_id);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_Baz_id);
ZEND_NAMED_FUNCTION(_wrap_new_Baz);
ZEND_NAMED_FUNCTION(_wrap_getBar);
ZEND_NAMED_FUNCTION(_wrap_idFromGetBar);
#endif /* PHP_DIRECTOR_ALTERNATING_H */
