/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_MOD_A_H
#define PHP_MOD_A_H

extern zend_module_entry mod_a_module_entry;
#define phpext_mod_a_ptr &mod_a_module_entry

#ifdef PHP_WIN32
# define PHP_MOD_A_API __declspec(dllexport)
#else
# define PHP_MOD_A_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(mod_a);
PHP_MSHUTDOWN_FUNCTION(mod_a);
PHP_RINIT_FUNCTION(mod_a);
PHP_RSHUTDOWN_FUNCTION(mod_a);
PHP_MINFO_FUNCTION(mod_a);

ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_A_GetC);
ZEND_NAMED_FUNCTION(_wrap_A_DoSomething);
ZEND_NAMED_FUNCTION(_wrap_new_B);
#endif /* PHP_MOD_A_H */
