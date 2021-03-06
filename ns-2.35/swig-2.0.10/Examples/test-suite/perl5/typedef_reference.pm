# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package typedef_reference;
use base qw(Exporter);
use base qw(DynaLoader);
package typedef_referencec;
bootstrap typedef_reference;
package typedef_reference;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package typedef_reference;

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

package typedef_reference;

*new_intp = *typedef_referencec::new_intp;
*copy_intp = *typedef_referencec::copy_intp;
*delete_intp = *typedef_referencec::delete_intp;
*intp_assign = *typedef_referencec::intp_assign;
*intp_value = *typedef_referencec::intp_value;
*somefunc = *typedef_referencec::somefunc;
*otherfunc = *typedef_referencec::otherfunc;

# ------- VARIABLE STUBS --------

package typedef_reference;

1;
