# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package li_reference;
use base qw(Exporter);
use base qw(DynaLoader);
package li_referencec;
bootstrap li_reference;
package li_reference;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package li_reference;

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

package li_reference;

*PDouble = *li_referencec::PDouble;
*RDouble = *li_referencec::RDouble;
*PFloat = *li_referencec::PFloat;
*RFloat = *li_referencec::RFloat;
*PInt = *li_referencec::PInt;
*RInt = *li_referencec::RInt;
*PShort = *li_referencec::PShort;
*RShort = *li_referencec::RShort;
*PLong = *li_referencec::PLong;
*RLong = *li_referencec::RLong;
*PUInt = *li_referencec::PUInt;
*RUInt = *li_referencec::RUInt;
*PUShort = *li_referencec::PUShort;
*RUShort = *li_referencec::RUShort;
*PULong = *li_referencec::PULong;
*RULong = *li_referencec::RULong;
*PUChar = *li_referencec::PUChar;
*RUChar = *li_referencec::RUChar;
*PChar = *li_referencec::PChar;
*RChar = *li_referencec::RChar;
*PBool = *li_referencec::PBool;
*RBool = *li_referencec::RBool;

# ------- VARIABLE STUBS --------

package li_reference;

*FrVal = *li_referencec::FrVal;
*ToVal = *li_referencec::ToVal;
1;
