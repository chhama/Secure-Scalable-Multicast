/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_USING_DIRECTIVE_AND_DECLARATION_H
#define PHP_USING_DIRECTIVE_AND_DECLARATION_H

extern zend_module_entry using_directive_and_declaration_module_entry;
#define phpext_using_directive_and_declaration_ptr &using_directive_and_declaration_module_entry

#ifdef PHP_WIN32
# define PHP_USING_DIRECTIVE_AND_DECLARATION_API __declspec(dllexport)
#else
# define PHP_USING_DIRECTIVE_AND_DECLARATION_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(using_directive_and_declaration);
PHP_MSHUTDOWN_FUNCTION(using_directive_and_declaration);
PHP_RINIT_FUNCTION(using_directive_and_declaration);
PHP_RSHUTDOWN_FUNCTION(using_directive_and_declaration);
PHP_MINFO_FUNCTION(using_directive_and_declaration);

ZEND_NAMED_FUNCTION(_wrap_new_Thing1);
ZEND_NAMED_FUNCTION(_wrap_useit1);
ZEND_NAMED_FUNCTION(_wrap_new_Thing2);
ZEND_NAMED_FUNCTION(_wrap_useit2);
ZEND_NAMED_FUNCTION(_wrap_new_Thing3);
ZEND_NAMED_FUNCTION(_wrap_useit3);
ZEND_NAMED_FUNCTION(_wrap_new_Thing4);
ZEND_NAMED_FUNCTION(_wrap_useit4);
ZEND_NAMED_FUNCTION(_wrap_new_Thing5);
ZEND_NAMED_FUNCTION(_wrap_useit5);
ZEND_NAMED_FUNCTION(_wrap_Thing6a_a);
ZEND_NAMED_FUNCTION(_wrap_new_Thing6a);
ZEND_NAMED_FUNCTION(_wrap_Thing6_b);
ZEND_NAMED_FUNCTION(_wrap_new_Thing6);
ZEND_NAMED_FUNCTION(_wrap_useit6);
ZEND_NAMED_FUNCTION(_wrap_new_Thing7);
ZEND_NAMED_FUNCTION(_wrap_useit7);
ZEND_NAMED_FUNCTION(_wrap_useit7a);
ZEND_NAMED_FUNCTION(_wrap_useit7b);
ZEND_NAMED_FUNCTION(_wrap_useit7c);
ZEND_NAMED_FUNCTION(_wrap_useit7d);
#endif /* PHP_USING_DIRECTIVE_AND_DECLARATION_H */
