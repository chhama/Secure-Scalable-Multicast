/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CHAR_BINARY_H
#define PHP_CHAR_BINARY_H

extern zend_module_entry char_binary_module_entry;
#define phpext_char_binary_ptr &char_binary_module_entry

#ifdef PHP_WIN32
# define PHP_CHAR_BINARY_API __declspec(dllexport)
#else
# define PHP_CHAR_BINARY_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(char_binary);
PHP_MSHUTDOWN_FUNCTION(char_binary);
PHP_RINIT_FUNCTION(char_binary);
PHP_RSHUTDOWN_FUNCTION(char_binary);
PHP_MINFO_FUNCTION(char_binary);

ZEND_NAMED_FUNCTION(_wrap_Test_strlen);
ZEND_NAMED_FUNCTION(_wrap_new_Test);
ZEND_NAMED_FUNCTION(_wrap_var_namet_set);
ZEND_NAMED_FUNCTION(_wrap_var_namet_get);
ZEND_NAMED_FUNCTION(_wrap_var_pchar_set);
ZEND_NAMED_FUNCTION(_wrap_var_pchar_get);
ZEND_NAMED_FUNCTION(_wrap_new_pchar);
ZEND_NAMED_FUNCTION(_wrap_delete_pchar);
ZEND_NAMED_FUNCTION(_wrap_pchar_getitem);
ZEND_NAMED_FUNCTION(_wrap_pchar_setitem);
#endif /* PHP_CHAR_BINARY_H */