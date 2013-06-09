# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package enum_macro;
use base qw(Exporter);
use base qw(DynaLoader);
package enum_macroc;
bootstrap enum_macro;
package enum_macro;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package enum_macro;

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

package enum_macro;


# ------- VARIABLE STUBS --------

package enum_macro;

*alpha1 = *enum_macroc::alpha1;
*beta1 = *enum_macroc::beta1;
*theta1 = *enum_macroc::theta1;
*alpha2 = *enum_macroc::alpha2;
*beta2 = *enum_macroc::beta2;
*theta2 = *enum_macroc::theta2;
*alpha3 = *enum_macroc::alpha3;
*beta3 = *enum_macroc::beta3;
*theta3 = *enum_macroc::theta3;
*alpha4 = *enum_macroc::alpha4;
*beta4 = *enum_macroc::beta4;
*theta4 = *enum_macroc::theta4;
*alpha5 = *enum_macroc::alpha5;
*beta5 = *enum_macroc::beta5;
*alpha6 = *enum_macroc::alpha6;
*beta6 = *enum_macroc::beta6;
*alpha7 = *enum_macroc::alpha7;
*beta7 = *enum_macroc::beta7;
*theta8 = *enum_macroc::theta8;
*theta9 = *enum_macroc::theta9;
*theta10 = *enum_macroc::theta10;
*theta11 = *enum_macroc::theta11;
*theta12 = *enum_macroc::theta12;
1;