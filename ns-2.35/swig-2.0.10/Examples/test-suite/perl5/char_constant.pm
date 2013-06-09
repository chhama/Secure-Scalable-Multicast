# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package char_constant;
use base qw(Exporter);
use base qw(DynaLoader);
package char_constantc;
bootstrap char_constant;
package char_constant;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package char_constant;

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

package char_constant;


# ------- VARIABLE STUBS --------

package char_constant;

*CHAR_CONSTANT = *char_constantc::CHAR_CONSTANT;
*STRING_CONSTANT = *char_constantc::STRING_CONSTANT;
*ESC_CONST = *char_constantc::ESC_CONST;
*NULL_CONST = *char_constantc::NULL_CONST;
*SPECIALCHAR = *char_constantc::SPECIALCHAR;
*ia = *char_constantc::ia;
*ib = *char_constantc::ib;
1;
