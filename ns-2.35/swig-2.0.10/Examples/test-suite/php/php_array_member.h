/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ARRAY_MEMBER_H
#define PHP_ARRAY_MEMBER_H

extern zend_module_entry array_member_module_entry;
#define phpext_array_member_ptr &array_member_module_entry

#ifdef PHP_WIN32
# define PHP_ARRAY_MEMBER_API __declspec(dllexport)
#else
# define PHP_ARRAY_MEMBER_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(array_member);
PHP_MSHUTDOWN_FUNCTION(array_member);
PHP_RINIT_FUNCTION(array_member);
PHP_RSHUTDOWN_FUNCTION(array_member);
PHP_MINFO_FUNCTION(array_member);

ZEND_NAMED_FUNCTION(_wrap_Foo_text_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_text_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_data_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_data_get);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_global_data_set);
ZEND_NAMED_FUNCTION(_wrap_global_data_get);
ZEND_NAMED_FUNCTION(_wrap_set_value);
ZEND_NAMED_FUNCTION(_wrap_get_value);
ZEND_NAMED_FUNCTION(_wrap_new_Material);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_chitMat_set);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_chitMat_get);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat_val_set);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat_val_get);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat_set);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat_get);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_chitMat2_set);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_chitMat2_get);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat_val2_set);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat_val2_get);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat2_set);
ZEND_NAMED_FUNCTION(_wrap_RayPacketData_hitMat2_get);
ZEND_NAMED_FUNCTION(_wrap_new_RayPacketData);
ZEND_NAMED_FUNCTION(_wrap_MyBuff_i_set);
ZEND_NAMED_FUNCTION(_wrap_MyBuff_i_get);
ZEND_NAMED_FUNCTION(_wrap_MyBuff_x_set);
ZEND_NAMED_FUNCTION(_wrap_MyBuff_x_get);
ZEND_NAMED_FUNCTION(_wrap_new_MyBuff);
ZEND_NAMED_FUNCTION(_wrap_MySBuff_i_set);
ZEND_NAMED_FUNCTION(_wrap_MySBuff_i_get);
ZEND_NAMED_FUNCTION(_wrap_MySBuff_x_set);
ZEND_NAMED_FUNCTION(_wrap_MySBuff_x_get);
ZEND_NAMED_FUNCTION(_wrap_new_MySBuff);
#endif /* PHP_ARRAY_MEMBER_H */
