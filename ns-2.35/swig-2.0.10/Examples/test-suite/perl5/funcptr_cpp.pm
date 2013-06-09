# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package funcptr_cpp;
use base qw(Exporter);
use base qw(DynaLoader);
package funcptr_cppc;
bootstrap funcptr_cpp;
package funcptr_cpp;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package funcptr_cpp;

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

package funcptr_cpp;

*addByValue = *funcptr_cppc::addByValue;
*addByPointer = *funcptr_cppc::addByPointer;
*addByReference = *funcptr_cppc::addByReference;
*call1 = *funcptr_cppc::call1;
*call2 = *funcptr_cppc::call2;
*call3 = *funcptr_cppc::call3;
*typedef_call1 = *funcptr_cppc::typedef_call1;
*typedef_call2 = *funcptr_cppc::typedef_call2;
*typedef_call3 = *funcptr_cppc::typedef_call3;

# ------- VARIABLE STUBS --------

package funcptr_cpp;

*ADD_BY_VALUE = *funcptr_cppc::ADD_BY_VALUE;
*ADD_BY_POINTER = *funcptr_cppc::ADD_BY_POINTER;
*ADD_BY_REFERENCE = *funcptr_cppc::ADD_BY_REFERENCE;
1;
