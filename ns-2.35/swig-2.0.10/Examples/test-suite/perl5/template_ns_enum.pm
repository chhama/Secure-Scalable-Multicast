# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_ns_enum;
use base qw(Exporter);
use base qw(DynaLoader);
package template_ns_enumc;
bootstrap template_ns_enum;
package template_ns_enum;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_ns_enum;

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

package template_ns_enum;

*say_hi = *template_ns_enumc::say_hi;

# ------- VARIABLE STUBS --------

package template_ns_enum;

*Hi = *template_ns_enumc::Hi;
*Hola = *template_ns_enumc::Hola;
1;
