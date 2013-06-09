# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package minherit;
use base qw(Exporter);
use base qw(DynaLoader);
package minheritc;
bootstrap minherit;
package minherit;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package minherit;

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

package minherit;

*toFooPtr = *minheritc::toFooPtr;
*toBarPtr = *minheritc::toBarPtr;
*toFooBarPtr = *minheritc::toFooBarPtr;
*toSpamPtr = *minheritc::toSpamPtr;
*xget = *minheritc::xget;
*yget = *minheritc::yget;
*zget = *minheritc::zget;
*wget = *minheritc::wget;

############# Class : minherit::Foo ##############

package minherit::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = minheritc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minheritc::delete_Foo($self);
        delete $OWNER{$self};
    }
}

*xget = *minheritc::Foo_xget;
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


############# Class : minherit::Bar ##############

package minherit::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = minheritc::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minheritc::delete_Bar($self);
        delete $OWNER{$self};
    }
}

*yget = *minheritc::Bar_yget;
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


############# Class : minherit::FooBar ##############

package minherit::FooBar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit::Foo minherit::Bar minherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = minheritc::new_FooBar(@_);
    bless $self, $pkg if defined($self);
}

*zget = *minheritc::FooBar_zget;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minheritc::delete_FooBar($self);
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


############# Class : minherit::Spam ##############

package minherit::Spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit::FooBar minherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = minheritc::new_Spam(@_);
    bless $self, $pkg if defined($self);
}

*wget = *minheritc::Spam_wget;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minheritc::delete_Spam($self);
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


############# Class : minherit::IntVector ##############

package minherit::IntVector;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = minheritc::new_IntVector(@_);
    bless $self, $pkg if defined($self);
}

*size = *minheritc::IntVector_size;
*empty = *minheritc::IntVector_empty;
*clear = *minheritc::IntVector_clear;
*push = *minheritc::IntVector_push;
*pop = *minheritc::IntVector_pop;
*get = *minheritc::IntVector_get;
*set = *minheritc::IntVector_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minheritc::delete_IntVector($self);
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

package minherit;

1;