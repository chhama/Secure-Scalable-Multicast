# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package smart_pointer_typedef;
use base qw(Exporter);
use base qw(DynaLoader);
package smart_pointer_typedefc;
bootstrap smart_pointer_typedef;
package smart_pointer_typedef;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package smart_pointer_typedef;

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

package smart_pointer_typedef;


############# Class : smart_pointer_typedef::Foo ##############

package smart_pointer_typedef::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( smart_pointer_typedef );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *smart_pointer_typedefc::Foo_x_get;
*swig_x_set = *smart_pointer_typedefc::Foo_x_set;
*getx = *smart_pointer_typedefc::Foo_getx;
sub new {
    my $pkg = shift;
    my $self = smart_pointer_typedefc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        smart_pointer_typedefc::delete_Foo($self);
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


############# Class : smart_pointer_typedef::Bar ##############

package smart_pointer_typedef::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( smart_pointer_typedef );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = smart_pointer_typedefc::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

*__deref__ = *smart_pointer_typedefc::Bar___deref__;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        smart_pointer_typedefc::delete_Bar($self);
        delete $OWNER{$self};
    }
}

*swig_x_get = *smart_pointer_typedefc::Bar_x_get;
*swig_x_set = *smart_pointer_typedefc::Bar_x_set;
*getx = *smart_pointer_typedefc::Bar_getx;
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

package smart_pointer_typedef;

1;
