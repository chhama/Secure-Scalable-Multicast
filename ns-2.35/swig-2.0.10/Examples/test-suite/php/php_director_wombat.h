/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_WOMBAT_H
#define PHP_DIRECTOR_WOMBAT_H

extern zend_module_entry director_wombat_module_entry;
#define phpext_director_wombat_ptr &director_wombat_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_WOMBAT_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_WOMBAT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_wombat);
PHP_MSHUTDOWN_FUNCTION(director_wombat);
PHP_RINIT_FUNCTION(director_wombat);
PHP_RSHUTDOWN_FUNCTION(director_wombat);
PHP_MINFO_FUNCTION(director_wombat);

ZEND_NAMED_FUNCTION(_wrap_Bar_meth);
ZEND_NAMED_FUNCTION(_wrap_Bar_foo_meth_ref);
ZEND_NAMED_FUNCTION(_wrap_Bar_foo_meth_ptr);
ZEND_NAMED_FUNCTION(_wrap_Bar_foo_meth_val);
ZEND_NAMED_FUNCTION(_wrap_Bar_foo_meth_cref);
ZEND_NAMED_FUNCTION(_wrap_Bar_foo_meth_cptr);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_new_Foo_integers);
ZEND_NAMED_FUNCTION(_wrap_Foo_integers_meth);
#endif /* PHP_DIRECTOR_WOMBAT_H */
