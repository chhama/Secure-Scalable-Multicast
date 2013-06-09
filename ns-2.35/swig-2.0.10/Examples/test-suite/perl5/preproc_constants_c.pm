# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package preproc_constants_c;
use base qw(Exporter);
use base qw(DynaLoader);
package preproc_constants_cc;
bootstrap preproc_constants_c;
package preproc_constants_c;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package preproc_constants_c;

sub TIEHASH {
    my ($classname,$obj) = @_;
    return bless $obj, $classname;
}

sub CLEAR { }

sub FIRSTKEY { }

sub NEXTKEY { }

sub FETCH {
    my ($self,$field) = @_;
    my $member_func = "swig_${field}_get";
    $self->$member_func();
}

sub STORE {
    my ($self,$field,$newval) = @_;
    my $member_func = "swig_${field}_set";
    $self->$member_func($newval);
}

sub this {
    my $ptr = shift;
    return tied(%$ptr);
}


# ------- FUNCTION WRAPPERS --------

package preproc_constants_c;


# ------- VARIABLE STUBS --------

package preproc_constants_c;

*CONST_INT1 = *preproc_constants_cc::CONST_INT1;
*CONST_INT2 = *preproc_constants_cc::CONST_INT2;
*CONST_UINT1 = *preproc_constants_cc::CONST_UINT1;
*CONST_UINT2 = *preproc_constants_cc::CONST_UINT2;
*CONST_UINT3 = *preproc_constants_cc::CONST_UINT3;
*CONST_UINT4 = *preproc_constants_cc::CONST_UINT4;
*CONST_LONG1 = *preproc_constants_cc::CONST_LONG1;
*CONST_LONG2 = *preproc_constants_cc::CONST_LONG2;
*CONST_LONG3 = *preproc_constants_cc::CONST_LONG3;
*CONST_LONG4 = *preproc_constants_cc::CONST_LONG4;
*CONST_LLONG1 = *preproc_constants_cc::CONST_LLONG1;
*CONST_LLONG2 = *preproc_constants_cc::CONST_LLONG2;
*CONST_LLONG3 = *preproc_constants_cc::CONST_LLONG3;
*CONST_LLONG4 = *preproc_constants_cc::CONST_LLONG4;
*CONST_ULLONG1 = *preproc_constants_cc::CONST_ULLONG1;
*CONST_ULLONG2 = *preproc_constants_cc::CONST_ULLONG2;
*CONST_ULLONG3 = *preproc_constants_cc::CONST_ULLONG3;
*CONST_ULLONG4 = *preproc_constants_cc::CONST_ULLONG4;
*CONST_DOUBLE1 = *preproc_constants_cc::CONST_DOUBLE1;
*CONST_DOUBLE2 = *preproc_constants_cc::CONST_DOUBLE2;
*CONST_DOUBLE3 = *preproc_constants_cc::CONST_DOUBLE3;
*CONST_DOUBLE4 = *preproc_constants_cc::CONST_DOUBLE4;
*CONST_DOUBLE5 = *preproc_constants_cc::CONST_DOUBLE5;
*CONST_DOUBLE6 = *preproc_constants_cc::CONST_DOUBLE6;
*CONST_BOOL1 = *preproc_constants_cc::CONST_BOOL1;
*CONST_BOOL2 = *preproc_constants_cc::CONST_BOOL2;
*CONST_CHAR = *preproc_constants_cc::CONST_CHAR;
*CONST_STRING1 = *preproc_constants_cc::CONST_STRING1;
*CONST_STRING2 = *preproc_constants_cc::CONST_STRING2;
*CONST_STRING3 = *preproc_constants_cc::CONST_STRING3;
*INT_AND_BOOL = *preproc_constants_cc::INT_AND_BOOL;
*INT_AND_INT = *preproc_constants_cc::INT_AND_INT;
*INT_AND_UINT = *preproc_constants_cc::INT_AND_UINT;
*INT_AND_LONG = *preproc_constants_cc::INT_AND_LONG;
*INT_AND_ULONG = *preproc_constants_cc::INT_AND_ULONG;
*INT_AND_LLONG = *preproc_constants_cc::INT_AND_LLONG;
*INT_AND_ULLONG = *preproc_constants_cc::INT_AND_ULLONG;
*BOOL_AND_BOOL = *preproc_constants_cc::BOOL_AND_BOOL;
*EXPR_MULTIPLY = *preproc_constants_cc::EXPR_MULTIPLY;
*EXPR_DIVIDE = *preproc_constants_cc::EXPR_DIVIDE;
*EXPR_PLUS = *preproc_constants_cc::EXPR_PLUS;
*EXPR_MINUS = *preproc_constants_cc::EXPR_MINUS;
*EXPR_LSHIFT = *preproc_constants_cc::EXPR_LSHIFT;
*EXPR_RSHIFT = *preproc_constants_cc::EXPR_RSHIFT;
*EXPR_LTE = *preproc_constants_cc::EXPR_LTE;
*EXPR_GTE = *preproc_constants_cc::EXPR_GTE;
*EXPR_INEQUALITY = *preproc_constants_cc::EXPR_INEQUALITY;
*EXPR_EQUALITY = *preproc_constants_cc::EXPR_EQUALITY;
*EXPR_AND = *preproc_constants_cc::EXPR_AND;
*EXPR_XOR = *preproc_constants_cc::EXPR_XOR;
*EXPR_OR = *preproc_constants_cc::EXPR_OR;
*EXPR_LAND = *preproc_constants_cc::EXPR_LAND;
*EXPR_LOR = *preproc_constants_cc::EXPR_LOR;
*EXPR_CONDITIONAL = *preproc_constants_cc::EXPR_CONDITIONAL;
*kValue = *preproc_constants_cc::kValue;
1;
