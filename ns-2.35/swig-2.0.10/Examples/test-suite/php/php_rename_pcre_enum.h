/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_RENAME_PCRE_ENUM_H
#define PHP_RENAME_PCRE_ENUM_H

extern zend_module_entry rename_pcre_enum_module_entry;
#define phpext_rename_pcre_enum_ptr &rename_pcre_enum_module_entry

#ifdef PHP_WIN32
# define PHP_RENAME_PCRE_ENUM_API __declspec(dllexport)
#else
# define PHP_RENAME_PCRE_ENUM_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(rename_pcre_enum);
PHP_MSHUTDOWN_FUNCTION(rename_pcre_enum);
PHP_RINIT_FUNCTION(rename_pcre_enum);
PHP_RSHUTDOWN_FUNCTION(rename_pcre_enum);
PHP_MINFO_FUNCTION(rename_pcre_enum);

#endif /* PHP_RENAME_PCRE_ENUM_H */
