# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package extern_namespace;
use base qw(Exporter);
use base qw(DynaLoader);
package extern_namespacec;
bootstrap extern_namespace;
package extern_namespace;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package extern_namespace;

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

package extern_namespace;

*bar = *extern_namespacec::bar;
*foobar = *extern_namespacec::foobar;

# ------- VARIABLE STUBS --------

package extern_namespace;

1;
