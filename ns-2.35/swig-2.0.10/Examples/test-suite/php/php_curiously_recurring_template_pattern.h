/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CURIOUSLY_RECURRING_TEMPLATE_PATTERN_H
#define PHP_CURIOUSLY_RECURRING_TEMPLATE_PATTERN_H

extern zend_module_entry curiously_recurring_template_pattern_module_entry;
#define phpext_curiously_recurring_template_pattern_ptr &curiously_recurring_template_pattern_module_entry

#ifdef PHP_WIN32
# define PHP_CURIOUSLY_RECURRING_TEMPLATE_PATTERN_API __declspec(dllexport)
#else
# define PHP_CURIOUSLY_RECURRING_TEMPLATE_PATTERN_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(curiously_recurring_template_pattern);
PHP_MSHUTDOWN_FUNCTION(curiously_recurring_template_pattern);
PHP_RINIT_FUNCTION(curiously_recurring_template_pattern);
PHP_RSHUTDOWN_FUNCTION(curiously_recurring_template_pattern);
PHP_MINFO_FUNCTION(curiously_recurring_template_pattern);

ZEND_NAMED_FUNCTION(_wrap_new_basederived);
ZEND_NAMED_FUNCTION(_wrap_basederived_getBase1Param);
ZEND_NAMED_FUNCTION(_wrap_basederived_setBase1Param);
ZEND_NAMED_FUNCTION(_wrap_basederived_getBase2Param);
ZEND_NAMED_FUNCTION(_wrap_basederived_setBase2Param);
ZEND_NAMED_FUNCTION(_wrap_new_Derived);
ZEND_NAMED_FUNCTION(_wrap_Derived_getDerived1Param);
ZEND_NAMED_FUNCTION(_wrap_Derived_setDerived1Param);
ZEND_NAMED_FUNCTION(_wrap_Derived_getDerived2Param);
ZEND_NAMED_FUNCTION(_wrap_Derived_setDerived2Param);
#endif /* PHP_CURIOUSLY_RECURRING_TEMPLATE_PATTERN_H */
