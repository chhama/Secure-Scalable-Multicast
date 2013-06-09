/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_VIRTUAL_VS_NONVIRTUAL_BASE_H
#define PHP_VIRTUAL_VS_NONVIRTUAL_BASE_H

extern zend_module_entry virtual_vs_nonvirtual_base_module_entry;
#define phpext_virtual_vs_nonvirtual_base_ptr &virtual_vs_nonvirtual_base_module_entry

#ifdef PHP_WIN32
# define PHP_VIRTUAL_VS_NONVIRTUAL_BASE_API __declspec(dllexport)
#else
# define PHP_VIRTUAL_VS_NONVIRTUAL_BASE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(virtual_vs_nonvirtual_base);
PHP_MSHUTDOWN_FUNCTION(virtual_vs_nonvirtual_base);
PHP_RINIT_FUNCTION(virtual_vs_nonvirtual_base);
PHP_RSHUTDOWN_FUNCTION(virtual_vs_nonvirtual_base);
PHP_MINFO_FUNCTION(virtual_vs_nonvirtual_base);

ZEND_NAMED_FUNCTION(_wrap_SimpleVirtual_implementMe);
ZEND_NAMED_FUNCTION(_wrap_SimpleNonVirtual_dummy);
ZEND_NAMED_FUNCTION(_wrap_new_SimpleNonVirtual);
ZEND_NAMED_FUNCTION(_wrap_new_SimpleReturnClass);
ZEND_NAMED_FUNCTION(_wrap_SimpleReturnClass_get);
ZEND_NAMED_FUNCTION(_wrap_new_SimpleClassFail);
ZEND_NAMED_FUNCTION(_wrap_SimpleClassFail_getInner);
ZEND_NAMED_FUNCTION(_wrap_SimpleClassFail_implementMe);
ZEND_NAMED_FUNCTION(_wrap_new_SimpleClassWork);
ZEND_NAMED_FUNCTION(_wrap_SimpleClassWork_getInner);
ZEND_NAMED_FUNCTION(_wrap_SimpleClassWork_implementMe);
#endif /* PHP_VIRTUAL_VS_NONVIRTUAL_BASE_H */