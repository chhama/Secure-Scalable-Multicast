/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_EXTEND_SPECIAL_VARIABLES_H
#define PHP_EXTEND_SPECIAL_VARIABLES_H

extern zend_module_entry extend_special_variables_module_entry;
#define phpext_extend_special_variables_ptr &extend_special_variables_module_entry

#ifdef PHP_WIN32
# define PHP_EXTEND_SPECIAL_VARIABLES_API __declspec(dllexport)
#else
# define PHP_EXTEND_SPECIAL_VARIABLES_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(extend_special_variables);
PHP_MSHUTDOWN_FUNCTION(extend_special_variables);
PHP_RINIT_FUNCTION(extend_special_variables);
PHP_RSHUTDOWN_FUNCTION(extend_special_variables);
PHP_MINFO_FUNCTION(extend_special_variables);

ZEND_NAMED_FUNCTION(_wrap_new_ForExtensionNewName);
ZEND_NAMED_FUNCTION(_wrap_ForExtensionNewName_extended_renamed);
#endif /* PHP_EXTEND_SPECIAL_VARIABLES_H */
