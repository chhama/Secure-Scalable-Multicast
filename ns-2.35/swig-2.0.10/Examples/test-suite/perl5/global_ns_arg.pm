# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package global_ns_arg;
use base qw(Exporter);
use base qw(DynaLoader);
package global_ns_argc;
bootstrap global_ns_arg;
package global_ns_arg;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package global_ns_arg;

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

package global_ns_arg;

*foo = *global_ns_argc::foo;
*bar_fn = *global_ns_argc::bar_fn;

# ------- VARIABLE STUBS --------

package global_ns_arg;

1;