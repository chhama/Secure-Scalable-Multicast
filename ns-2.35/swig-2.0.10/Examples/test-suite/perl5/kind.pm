# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package kind;
use base qw(Exporter);
use base qw(DynaLoader);
package kindc;
bootstrap kind;
package kind;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package kind;

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

package kind;


############# Class : kind::foo ##############

package kind::foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( kind );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = kindc::new_foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        kindc::delete_foo($self);
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


############# Class : kind::bar ##############

package kind::bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( kind );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = kindc::new_bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        kindc::delete_bar($self);
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


############# Class : kind::uni ##############

package kind::uni;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( kind );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = kindc::new_uni(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        kindc::delete_uni($self);
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


############# Class : kind::test ##############

package kind::test;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( kind );
%OWNER = ();
%ITERATORS = ();
*foofn = *kindc::test_foofn;
*barfn = *kindc::test_barfn;
*unifn = *kindc::test_unifn;
*swig_myFooMember_get = *kindc::test_myFooMember_get;
*swig_myFooMember_set = *kindc::test_myFooMember_set;
*swig_myBarMember_get = *kindc::test_myBarMember_get;
*swig_myBarMember_set = *kindc::test_myBarMember_set;
*swig_myUniMember_get = *kindc::test_myUniMember_get;
*swig_myUniMember_set = *kindc::test_myUniMember_set;
*swig_mypFooMember_get = *kindc::test_mypFooMember_get;
*swig_mypFooMember_set = *kindc::test_mypFooMember_set;
*swig_mypBarMember_get = *kindc::test_mypBarMember_get;
*swig_mypBarMember_set = *kindc::test_mypBarMember_set;
*swig_mypUniMember_get = *kindc::test_mypUniMember_get;
*swig_mypUniMember_set = *kindc::test_mypUniMember_set;
sub new {
    my $pkg = shift;
    my $self = kindc::new_test(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        kindc::delete_test($self);
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

package kind;

1;
