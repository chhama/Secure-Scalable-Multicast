# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package name;
use base qw(Exporter);
use base qw(DynaLoader);
package namec;
bootstrap name;
package name;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package name;

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

package name;

*foo_2 = *namec::foo_2;

# ------- VARIABLE STUBS --------

package name;

*bar_2 = *namec::bar_2;
*Baz_2 = *namec::Baz_2;
1;
