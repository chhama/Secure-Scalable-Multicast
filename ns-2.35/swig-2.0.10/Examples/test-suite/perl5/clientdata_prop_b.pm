# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package clientdata_prop_b;
use base qw(Exporter);
use base qw(DynaLoader);
require clientdata_prop_a;
package clientdata_prop_bc;
bootstrap clientdata_prop_b;
package clientdata_prop_b;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package clientdata_prop_b;

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

package clientdata_prop_b;

*test_t2A = *clientdata_prop_bc::test_t2A;
*test_t3A = *clientdata_prop_bc::test_t3A;
*test_B = *clientdata_prop_bc::test_B;
*test_C = *clientdata_prop_bc::test_C;
*test_D = *clientdata_prop_bc::test_D;
*test_tD = *clientdata_prop_bc::test_tD;
*test_t2D = *clientdata_prop_bc::test_t2D;
*new_t2A = *clientdata_prop_bc::new_t2A;
*new_t3A = *clientdata_prop_bc::new_t3A;
*new_tD = *clientdata_prop_bc::new_tD;
*new_t2D = *clientdata_prop_bc::new_t2D;

############# Class : clientdata_prop_b::B ##############

package clientdata_prop_b::B;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( clientdata_prop_a::A clientdata_prop_b );
%OWNER = ();
%ITERATORS = ();
*fB = *clientdata_prop_bc::B_fB;
sub new {
    my $pkg = shift;
    my $self = clientdata_prop_bc::new_B(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        clientdata_prop_bc::delete_B($self);
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


############# Class : clientdata_prop_b::C ##############

package clientdata_prop_b::C;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( clientdata_prop_a::A clientdata_prop_b );
%OWNER = ();
%ITERATORS = ();
*fC = *clientdata_prop_bc::C_fC;
sub new {
    my $pkg = shift;
    my $self = clientdata_prop_bc::new_C(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        clientdata_prop_bc::delete_C($self);
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


############# Class : clientdata_prop_b::D ##############

package clientdata_prop_b::D;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( clientdata_prop_a::A clientdata_prop_b );
%OWNER = ();
%ITERATORS = ();
*fD = *clientdata_prop_bc::D_fD;
sub new {
    my $pkg = shift;
    my $self = clientdata_prop_bc::new_D(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        clientdata_prop_bc::delete_D($self);
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

package clientdata_prop_b;

1;
