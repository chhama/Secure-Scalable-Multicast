/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_NSPACE_EXTEND_H
#define PHP_NSPACE_EXTEND_H

extern zend_module_entry nspace_extend_module_entry;
#define phpext_nspace_extend_ptr &nspace_extend_module_entry

#ifdef PHP_WIN32
# define PHP_NSPACE_EXTEND_API __declspec(dllexport)
#else
# define PHP_NSPACE_EXTEND_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(nspace_extend);
PHP_MSHUTDOWN_FUNCTION(nspace_extend);
PHP_RINIT_FUNCTION(nspace_extend);
PHP_RSHUTDOWN_FUNCTION(nspace_extend);
PHP_MINFO_FUNCTION(nspace_extend);

#endif /* PHP_NSPACE_EXTEND_H */