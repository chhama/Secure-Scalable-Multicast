/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_UNIONS_H
#define PHP_UNIONS_H

extern zend_module_entry unions_module_entry;
#define phpext_unions_ptr &unions_module_entry

#ifdef PHP_WIN32
# define PHP_UNIONS_API __declspec(dllexport)
#else
# define PHP_UNIONS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(unions);
PHP_MSHUTDOWN_FUNCTION(unions);
PHP_RINIT_FUNCTION(unions);
PHP_RSHUTDOWN_FUNCTION(unions);
PHP_MINFO_FUNCTION(unions);

ZEND_NAMED_FUNCTION(_wrap_SmallStruct_jill_set);
ZEND_NAMED_FUNCTION(_wrap_SmallStruct_jill_get);
ZEND_NAMED_FUNCTION(_wrap_new_SmallStruct);
ZEND_NAMED_FUNCTION(_wrap_BigStruct_jack_set);
ZEND_NAMED_FUNCTION(_wrap_BigStruct_jack_get);
ZEND_NAMED_FUNCTION(_wrap_BigStruct_smallstruct_set);
ZEND_NAMED_FUNCTION(_wrap_BigStruct_smallstruct_get);
ZEND_NAMED_FUNCTION(_wrap_new_BigStruct);
ZEND_NAMED_FUNCTION(_wrap_UnionTest_bs_set);
ZEND_NAMED_FUNCTION(_wrap_UnionTest_bs_get);
ZEND_NAMED_FUNCTION(_wrap_UnionTest_ss_set);
ZEND_NAMED_FUNCTION(_wrap_UnionTest_ss_get);
ZEND_NAMED_FUNCTION(_wrap_new_UnionTest);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_number_set);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_number_get);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_uni_get);
ZEND_NAMED_FUNCTION(_wrap_new_EmbeddedUnionTest);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_uni_big_set);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_uni_big_get);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_uni_small_set);
ZEND_NAMED_FUNCTION(_wrap_EmbeddedUnionTest_uni_small_get);
ZEND_NAMED_FUNCTION(_wrap_new_EmbeddedUnionTest_uni);
#endif /* PHP_UNIONS_H */
