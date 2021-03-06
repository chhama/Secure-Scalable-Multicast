# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package default_arg_values;
use base qw(Exporter);
use base qw(DynaLoader);
package default_arg_valuesc;
bootstrap default_arg_values;
package default_arg_values;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package default_arg_values;

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

package default_arg_values;

*createPtr = *default_arg_valuesc::createPtr;

############# Class : default_arg_values::Display ##############

package default_arg_values::Display;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_arg_values );
%OWNER = ();
%ITERATORS = ();
*draw1 = *default_arg_valuesc::Display_draw1;
*draw2 = *default_arg_valuesc::Display_draw2;
sub new {
    my $pkg = shift;
    my $self = default_arg_valuesc::new_Display(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_arg_valuesc::delete_Display($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


# ------- VARIABLE STUBS --------

package default_arg_values;

1;
