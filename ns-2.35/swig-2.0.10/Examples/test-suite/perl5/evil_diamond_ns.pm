# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package evil_diamond_ns;
use base qw(Exporter);
use base qw(DynaLoader);
package evil_diamond_nsc;
bootstrap evil_diamond_ns;
package evil_diamond_ns;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package evil_diamond_ns;

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

package evil_diamond_ns;

*test = *evil_diamond_nsc::test;

############# Class : evil_diamond_ns::foo ##############

package evil_diamond_ns::foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( evil_diamond_ns );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = evil_diamond_nsc::new_foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        evil_diamond_nsc::delete_foo($self);
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


############# Class : evil_diamond_ns::bar ##############

package evil_diamond_ns::bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( evil_diamond_ns::foo evil_diamond_ns );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = evil_diamond_nsc::new_bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        evil_diamond_nsc::delete_bar($self);
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


############# Class : evil_diamond_ns::baz ##############

package evil_diamond_ns::baz;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( evil_diamond_ns::foo evil_diamond_ns );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = evil_diamond_nsc::new_baz(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        evil_diamond_nsc::delete_baz($self);
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


############# Class : evil_diamond_ns::spam ##############

package evil_diamond_ns::spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( evil_diamond_ns::bar evil_diamond_ns::baz evil_diamond_ns );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = evil_diamond_nsc::new_spam(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        evil_diamond_nsc::delete_spam($self);
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

package evil_diamond_ns;

1;