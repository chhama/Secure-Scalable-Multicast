/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CLIENTDATA_PROP_A_H
#define PHP_CLIENTDATA_PROP_A_H

extern zend_module_entry clientdata_prop_a_module_entry;
#define phpext_clientdata_prop_a_ptr &clientdata_prop_a_module_entry

#ifdef PHP_WIN32
# define PHP_CLIENTDATA_PROP_A_API __declspec(dllexport)
#else
# define PHP_CLIENTDATA_PROP_A_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(clientdata_prop_a);
PHP_MSHUTDOWN_FUNCTION(clientdata_prop_a);
PHP_RINIT_FUNCTION(clientdata_prop_a);
PHP_RSHUTDOWN_FUNCTION(clientdata_prop_a);
PHP_MINFO_FUNCTION(clientdata_prop_a);

ZEND_NAMED_FUNCTION(_wrap_A_fA);
ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_test_A);
ZEND_NAMED_FUNCTION(_wrap_test_tA);
ZEND_NAMED_FUNCTION(_wrap_new_tA);
#endif /* PHP_CLIENTDATA_PROP_A_H */
