/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CONSTOVER_H
#define PHP_CONSTOVER_H

extern zend_module_entry constover_module_entry;
#define phpext_constover_ptr &constover_module_entry

#ifdef PHP_WIN32
# define PHP_CONSTOVER_API __declspec(dllexport)
#else
# define PHP_CONSTOVER_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(constover);
PHP_MSHUTDOWN_FUNCTION(constover);
PHP_RINIT_FUNCTION(constover);
PHP_RSHUTDOWN_FUNCTION(constover);
PHP_MINFO_FUNCTION(constover);

ZEND_NAMED_FUNCTION(_wrap_test);
ZEND_NAMED_FUNCTION(_wrap_test_pconst);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_Foo_test);
ZEND_NAMED_FUNCTION(_wrap_Foo_test_pconst);
ZEND_NAMED_FUNCTION(_wrap_Foo_test_constm);
ZEND_NAMED_FUNCTION(_wrap_Foo_test_pconstm);
#endif /* PHP_CONSTOVER_H */