# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package example;
use base qw(Exporter);
use base qw(DynaLoader);
package examplec;
bootstrap example;
package example;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package example;

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

package example;

*print_vars = *examplec::print_vars;
*new_int = *examplec::new_int;
*new_Point = *examplec::new_Point;
*Point_print = *examplec::Point_print;
*pt_print = *examplec::pt_print;

# ------- VARIABLE STUBS --------

package example;

*ivar = *examplec::ivar;
*svar = *examplec::svar;
*lvar = *examplec::lvar;
*uivar = *examplec::uivar;
*usvar = *examplec::usvar;
*ulvar = *examplec::ulvar;
*scvar = *examplec::scvar;
*ucvar = *examplec::ucvar;
*cvar = *examplec::cvar;
*fvar = *examplec::fvar;
*dvar = *examplec::dvar;
*strvar = *examplec::strvar;
*cstrvar = *examplec::cstrvar;
*iptrvar = *examplec::iptrvar;
*name = *examplec::name;
*ptptr = *examplec::ptptr;
*pt = *examplec::pt;
*status = *examplec::status;
*path = *examplec::path;
1;
