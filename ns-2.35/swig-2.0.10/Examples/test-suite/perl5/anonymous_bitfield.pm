# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package anonymous_bitfield;
use base qw(Exporter);
use base qw(DynaLoader);
package anonymous_bitfieldc;
bootstrap anonymous_bitfield;
package anonymous_bitfield;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package anonymous_bitfield;

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

package anonymous_bitfield;


############# Class : anonymous_bitfield::Foo ##############

package anonymous_bitfield::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( anonymous_bitfield );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *anonymous_bitfieldc::Foo_x_get;
*swig_x_set = *anonymous_bitfieldc::Foo_x_set;
*swig_y_get = *anonymous_bitfieldc::Foo_y_get;
*swig_y_set = *anonymous_bitfieldc::Foo_y_set;
*swig_f_get = *anonymous_bitfieldc::Foo_f_get;
*swig_f_set = *anonymous_bitfieldc::Foo_f_set;
*swig_z_get = *anonymous_bitfieldc::Foo_z_get;
*swig_z_set = *anonymous_bitfieldc::Foo_z_set;
*swig_seq_get = *anonymous_bitfieldc::Foo_seq_get;
*swig_seq_set = *anonymous_bitfieldc::Foo_seq_set;
sub new {
    my $pkg = shift;
    my $self = anonymous_bitfieldc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        anonymous_bitfieldc::delete_Foo($self);
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

package anonymous_bitfield;

1;
