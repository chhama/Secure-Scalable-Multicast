/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_PACKAGEOPTION_A_H
#define PHP_PACKAGEOPTION_A_H

extern zend_module_entry packageoption_a_module_entry;
#define phpext_packageoption_a_ptr &packageoption_a_module_entry

#ifdef PHP_WIN32
# define PHP_PACKAGEOPTION_A_API __declspec(dllexport)
#else
# define PHP_PACKAGEOPTION_A_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(packageoption_a);
PHP_MSHUTDOWN_FUNCTION(packageoption_a);
PHP_RINIT_FUNCTION(packageoption_a);
PHP_RSHUTDOWN_FUNCTION(packageoption_a);
PHP_MINFO_FUNCTION(packageoption_a);

ZEND_NAMED_FUNCTION(_wrap_A_testInt);
ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_Base_vmethod);
ZEND_NAMED_FUNCTION(_wrap_Base_basemethod);
ZEND_NAMED_FUNCTION(_wrap_new_Base);
#endif /* PHP_PACKAGEOPTION_A_H */