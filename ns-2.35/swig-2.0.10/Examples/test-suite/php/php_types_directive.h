/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TYPES_DIRECTIVE_H
#define PHP_TYPES_DIRECTIVE_H

extern zend_module_entry types_directive_module_entry;
#define phpext_types_directive_ptr &types_directive_module_entry

#ifdef PHP_WIN32
# define PHP_TYPES_DIRECTIVE_API __declspec(dllexport)
#else
# define PHP_TYPES_DIRECTIVE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(types_directive);
PHP_MSHUTDOWN_FUNCTION(types_directive);
PHP_RINIT_FUNCTION(types_directive);
PHP_RSHUTDOWN_FUNCTION(types_directive);
PHP_MINFO_FUNCTION(types_directive);

ZEND_NAMED_FUNCTION(_wrap_new_Date);
ZEND_NAMED_FUNCTION(_wrap_Date_year_set);
ZEND_NAMED_FUNCTION(_wrap_Date_year_get);
ZEND_NAMED_FUNCTION(_wrap_Date_month_set);
ZEND_NAMED_FUNCTION(_wrap_Date_month_get);
ZEND_NAMED_FUNCTION(_wrap_Date_day_set);
ZEND_NAMED_FUNCTION(_wrap_Date_day_get);
ZEND_NAMED_FUNCTION(_wrap_new_Time1);
ZEND_NAMED_FUNCTION(_wrap_Time1_dateFromTime);
ZEND_NAMED_FUNCTION(_wrap_Time1_date_set);
ZEND_NAMED_FUNCTION(_wrap_Time1_date_get);
ZEND_NAMED_FUNCTION(_wrap_Time1_seconds_set);
ZEND_NAMED_FUNCTION(_wrap_Time1_seconds_get);
ZEND_NAMED_FUNCTION(_wrap_new_Time2);
ZEND_NAMED_FUNCTION(_wrap_Time2_date_set);
ZEND_NAMED_FUNCTION(_wrap_Time2_date_get);
ZEND_NAMED_FUNCTION(_wrap_Time2_seconds_set);
ZEND_NAMED_FUNCTION(_wrap_Time2_seconds_get);
ZEND_NAMED_FUNCTION(_wrap_add);
#endif /* PHP_TYPES_DIRECTIVE_H */
