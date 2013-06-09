# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package typemap_various;
use base qw(Exporter);
use base qw(DynaLoader);
package typemap_variousc;
bootstrap typemap_various;
package typemap_various;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package typemap_various;

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

package typemap_various;

*foo1 = *typemap_variousc::foo1;
*foo2 = *typemap_variousc::foo2;

############# Class : typemap_various::FooInt ##############

package typemap_various::FooInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typemap_various );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = typemap_variousc::new_FooInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typemap_variousc::delete_FooInt($self);
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


############# Class : typemap_various::Bar1 ##############

package typemap_various::Bar1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typemap_various );
%OWNER = ();
%ITERATORS = ();
*foo = *typemap_variousc::Bar1_foo;
sub new {
    my $pkg = shift;
    my $self = typemap_variousc::new_Bar1(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typemap_variousc::delete_Bar1($self);
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


############# Class : typemap_various::Bar2 ##############

package typemap_various::Bar2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typemap_various );
%OWNER = ();
%ITERATORS = ();
*foo = *typemap_variousc::Bar2_foo;
sub new {
    my $pkg = shift;
    my $self = typemap_variousc::new_Bar2(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typemap_variousc::delete_Bar2($self);
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


############# Class : typemap_various::FFoo ##############

package typemap_various::FFoo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typemap_various );
%OWNER = ();
%ITERATORS = ();
*Bar = *typemap_variousc::FFoo_Bar;
sub new {
    my $pkg = shift;
    my $self = typemap_variousc::new_FFoo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typemap_variousc::delete_FFoo($self);
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


############# Class : typemap_various::ABCD ##############

package typemap_various::ABCD;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typemap_various );
%OWNER = ();
%ITERATORS = ();
*meth = *typemap_variousc::ABCD_meth;
*m1 = *typemap_variousc::ABCD_m1;
*_x2 = *typemap_variousc::ABCD__x2;
*y_ = *typemap_variousc::ABCD_y_;
*_3 = *typemap_variousc::ABCD__3;
sub new {
    my $pkg = shift;
    my $self = typemap_variousc::new_ABCD(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typemap_variousc::delete_ABCD($self);
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

package typemap_various;

1;