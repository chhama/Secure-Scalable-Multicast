/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_THREADS_EXCEPTION_H
#define PHP_THREADS_EXCEPTION_H

extern zend_module_entry threads_exception_module_entry;
#define phpext_threads_exception_ptr &threads_exception_module_entry

#ifdef PHP_WIN32
# define PHP_THREADS_EXCEPTION_API __declspec(dllexport)
#else
# define PHP_THREADS_EXCEPTION_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(threads_exception);
PHP_MSHUTDOWN_FUNCTION(threads_exception);
PHP_RINIT_FUNCTION(threads_exception);
PHP_RSHUTDOWN_FUNCTION(threads_exception);
PHP_MINFO_FUNCTION(threads_exception);

ZEND_NAMED_FUNCTION(_wrap_new_Exc);
ZEND_NAMED_FUNCTION(_wrap_Exc_code_set);
ZEND_NAMED_FUNCTION(_wrap_Exc_code_get);
ZEND_NAMED_FUNCTION(_wrap_Exc_msg_set);
ZEND_NAMED_FUNCTION(_wrap_Exc_msg_get);
ZEND_NAMED_FUNCTION(_wrap_Test_simple);
ZEND_NAMED_FUNCTION(_wrap_Test_message);
ZEND_NAMED_FUNCTION(_wrap_Test_hosed);
ZEND_NAMED_FUNCTION(_wrap_Test_unknown);
ZEND_NAMED_FUNCTION(_wrap_Test_multi);
ZEND_NAMED_FUNCTION(_wrap_new_Test);
#endif /* PHP_THREADS_EXCEPTION_H */