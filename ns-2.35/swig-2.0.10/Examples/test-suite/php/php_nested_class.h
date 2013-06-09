/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_NESTED_CLASS_H
#define PHP_NESTED_CLASS_H

extern zend_module_entry nested_class_module_entry;
#define phpext_nested_class_ptr &nested_class_module_entry

#ifdef PHP_WIN32
# define PHP_NESTED_CLASS_API __declspec(dllexport)
#else
# define PHP_NESTED_CLASS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(nested_class);
PHP_MSHUTDOWN_FUNCTION(nested_class);
PHP_RINIT_FUNCTION(nested_class);
PHP_RSHUTDOWN_FUNCTION(nested_class);
PHP_MINFO_FUNCTION(nested_class);

ZEND_NAMED_FUNCTION(_wrap_Outer_InnerClass2Instance_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_InnerClass2Instance_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_InnerStruct2Instance_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_InnerStruct2Instance_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_InnerUnion2Instance_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_InnerUnion2Instance_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerStruct1);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerClass1);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerUnion1);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerStruct2);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerClass2);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerUnion2);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerStruct4Typedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerClass4Typedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerUnion4Typedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerStruct5);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerClass5);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerUnion5);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerStruct5Typedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerClass5Typedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerUnion5Typedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance1_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance1_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance2_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance2_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance3_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance3_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance4_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleInstance4_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance1_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance1_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance2_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance2_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance3_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance3_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance4_set);
ZEND_NAMED_FUNCTION(_wrap_Outer_MultipleDerivedInstance4_get);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleAnonTypedef1);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleAnonTypedef2);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleAnonTypedef3);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleNamedTypedef);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleNamedTypedef1);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleNamedTypedef2);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerMultipleNamedTypedef3);
ZEND_NAMED_FUNCTION(_wrap_Outer_makeInnerSameName);
ZEND_NAMED_FUNCTION(_wrap_new_Outer);
ZEND_NAMED_FUNCTION(_wrap_new_Outer2);
#endif /* PHP_NESTED_CLASS_H */
