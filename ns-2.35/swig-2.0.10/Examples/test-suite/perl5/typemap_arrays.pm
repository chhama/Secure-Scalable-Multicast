# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package typemap_arrays;
use base qw(Exporter);
use base qw(DynaLoader);
package typemap_arraysc;
bootstrap typemap_arrays;
package typemap_arrays;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package typemap_arrays;

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

package typemap_arrays;

*sumA = *typemap_arraysc::sumA;

# ------- VARIABLE STUBS --------

package typemap_arrays;

1;