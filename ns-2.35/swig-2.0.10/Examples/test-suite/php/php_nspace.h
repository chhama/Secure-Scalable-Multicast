/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_NSPACE_H
#define PHP_NSPACE_H

extern zend_module_entry nspace_module_entry;
#define phpext_nspace_ptr &nspace_module_entry

#ifdef PHP_WIN32
# define PHP_NSPACE_API __declspec(dllexport)
#else
# define PHP_NSPACE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(nspace);
PHP_MSHUTDOWN_FUNCTION(nspace);
PHP_RINIT_FUNCTION(nspace);
PHP_RSHUTDOWN_FUNCTION(nspace);
PHP_MINFO_FUNCTION(nspace);

#endif /* PHP_NSPACE_H */