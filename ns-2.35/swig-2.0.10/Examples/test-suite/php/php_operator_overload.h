/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_OPERATOR_OVERLOAD_H
#define PHP_OPERATOR_OVERLOAD_H

extern zend_module_entry operator_overload_module_entry;
#define phpext_operator_overload_ptr &operator_overload_module_entry

#ifdef PHP_WIN32
# define PHP_OPERATOR_OVERLOAD_API __declspec(dllexport)
#else
# define PHP_OPERATOR_OVERLOAD_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(operator_overload);
PHP_MSHUTDOWN_FUNCTION(operator_overload);
PHP_RINIT_FUNCTION(operator_overload);
PHP_RSHUTDOWN_FUNCTION(operator_overload);
PHP_MINFO_FUNCTION(operator_overload);

ZEND_NAMED_FUNCTION(_wrap_Op_i_set);
ZEND_NAMED_FUNCTION(_wrap_Op_i_get);
ZEND_NAMED_FUNCTION(_wrap_new_Op);
ZEND_NAMED_FUNCTION(_wrap_AndOperator);
ZEND_NAMED_FUNCTION(_wrap_OrOperator);
ZEND_NAMED_FUNCTION(_wrap_Op_Equal);
ZEND_NAMED_FUNCTION(_wrap_Op_PlusEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_MinusEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_MultiplyEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_DivideEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_PercentEqual);
ZEND_NAMED_FUNCTION(_wrap_Plus);
ZEND_NAMED_FUNCTION(_wrap_Minus);
ZEND_NAMED_FUNCTION(_wrap_Multiply);
ZEND_NAMED_FUNCTION(_wrap_Divide);
ZEND_NAMED_FUNCTION(_wrap_Percent);
ZEND_NAMED_FUNCTION(_wrap_Op_Not);
ZEND_NAMED_FUNCTION(_wrap_Op_IndexIntoConst);
ZEND_NAMED_FUNCTION(_wrap_Op_IndexInto);
ZEND_NAMED_FUNCTION(_wrap_Op_Functor);
ZEND_NAMED_FUNCTION(_wrap_Op_PlusPlusPrefix);
ZEND_NAMED_FUNCTION(_wrap_Op_PlusPlusPostfix);
ZEND_NAMED_FUNCTION(_wrap_Op_MinusMinusPrefix);
ZEND_NAMED_FUNCTION(_wrap_Op_MinusMinusPostfix);
ZEND_NAMED_FUNCTION(_wrap_Op_DoubleCast);
ZEND_NAMED_FUNCTION(_wrap_Op_IntCast);
ZEND_NAMED_FUNCTION(_wrap_Op_sanity_check);
ZEND_NAMED_FUNCTION(_wrap_Op_AndOperator);
ZEND_NAMED_FUNCTION(_wrap_Op_OrOperator);
ZEND_NAMED_FUNCTION(_wrap_Op_Plus);
ZEND_NAMED_FUNCTION(_wrap_Op_Minus);
ZEND_NAMED_FUNCTION(_wrap_Op_Multiply);
ZEND_NAMED_FUNCTION(_wrap_Op_Divide);
ZEND_NAMED_FUNCTION(_wrap_Op_Percent);
ZEND_NAMED_FUNCTION(_wrap_Op_EqualEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_NotEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_LessThan);
ZEND_NAMED_FUNCTION(_wrap_Op_LessThanEqual);
ZEND_NAMED_FUNCTION(_wrap_Op_GreaterThan);
ZEND_NAMED_FUNCTION(_wrap_Op_GreaterThanEqual);
ZEND_NAMED_FUNCTION(_wrap_Op___rsub__);
ZEND_NAMED_FUNCTION(_wrap_Op___str__);
ZEND_NAMED_FUNCTION(_wrap_Op___getitem__);
ZEND_NAMED_FUNCTION(_wrap_Op___setitem__);
ZEND_NAMED_FUNCTION(_wrap_EqualEqual);
ZEND_NAMED_FUNCTION(_wrap_NotEqual);
ZEND_NAMED_FUNCTION(_wrap_LessThan);
ZEND_NAMED_FUNCTION(_wrap_LessThanEqual);
ZEND_NAMED_FUNCTION(_wrap_GreaterThan);
ZEND_NAMED_FUNCTION(_wrap_GreaterThanEqual);
ZEND_NAMED_FUNCTION(_wrap_new_OpDerived);
ZEND_NAMED_FUNCTION(_wrap_OpDerived_IntCast);
#endif /* PHP_OPERATOR_OVERLOAD_H */
