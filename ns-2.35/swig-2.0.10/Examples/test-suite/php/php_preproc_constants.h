/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_PREPROC_CONSTANTS_H
#define PHP_PREPROC_CONSTANTS_H

extern zend_module_entry preproc_constants_module_entry;
#define phpext_preproc_constants_ptr &preproc_constants_module_entry

#ifdef PHP_WIN32
# define PHP_PREPROC_CONSTANTS_API __declspec(dllexport)
#else
# define PHP_PREPROC_CONSTANTS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(preproc_constants);
PHP_MSHUTDOWN_FUNCTION(preproc_constants);
PHP_RINIT_FUNCTION(preproc_constants);
PHP_RSHUTDOWN_FUNCTION(preproc_constants);
PHP_MINFO_FUNCTION(preproc_constants);

#endif /* PHP_PREPROC_CONSTANTS_H */
