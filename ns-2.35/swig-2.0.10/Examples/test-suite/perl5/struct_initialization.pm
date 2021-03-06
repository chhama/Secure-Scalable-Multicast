# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package struct_initialization;
use base qw(Exporter);
use base qw(DynaLoader);
package struct_initializationc;
bootstrap struct_initialization;
package struct_initialization;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package struct_initialization;

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

package struct_initialization;


############# Class : struct_initialization::StructA ##############

package struct_initialization::StructA;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( struct_initialization );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *struct_initializationc::StructA_x_get;
*swig_x_set = *struct_initializationc::StructA_x_set;
sub new {
    my $pkg = shift;
    my $self = struct_initializationc::new_StructA(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        struct_initializationc::delete_StructA($self);
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


############# Class : struct_initialization::StructB ##############

package struct_initialization::StructB;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( struct_initialization );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *struct_initializationc::StructB_x_get;
*swig_x_set = *struct_initializationc::StructB_x_set;
sub new {
    my $pkg = shift;
    my $self = struct_initializationc::new_StructB(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        struct_initializationc::delete_StructB($self);
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


############# Class : struct_initialization::StructC ##############

package struct_initialization::StructC;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( struct_initialization );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *struct_initializationc::StructC_x_get;
*swig_x_set = *struct_initializationc::StructC_x_set;
sub new {
    my $pkg = shift;
    my $self = struct_initializationc::new_StructC(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        struct_initializationc::delete_StructC($self);
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


############# Class : struct_initialization::StructD ##############

package struct_initialization::StructD;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( struct_initialization );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *struct_initializationc::StructD_x_get;
*swig_x_set = *struct_initializationc::StructD_x_set;
sub new {
    my $pkg = shift;
    my $self = struct_initializationc::new_StructD(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        struct_initializationc::delete_StructD($self);
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


############# Class : struct_initialization::StructE ##############

package struct_initialization::StructE;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( struct_initialization );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *struct_initializationc::StructE_x_get;
*swig_x_set = *struct_initializationc::StructE_x_set;
sub new {
    my $pkg = shift;
    my $self = struct_initializationc::new_StructE(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        struct_initializationc::delete_StructE($self);
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


############# Class : struct_initialization::StructF ##############

package struct_initialization::StructF;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( struct_initialization );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *struct_initializationc::StructF_x_get;
*swig_x_set = *struct_initializationc::StructF_x_set;
sub new {
    my $pkg = shift;
    my $self = struct_initializationc::new_StructF(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        struct_initializationc::delete_StructF($self);
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

package struct_initialization;


my %__instanceA1_hash;
tie %__instanceA1_hash,"struct_initialization::StructA", $struct_initializationc::instanceA1;
$instanceA1= \%__instanceA1_hash;
bless $instanceA1, struct_initialization::StructA;

my %__instanceB1_hash;
tie %__instanceB1_hash,"struct_initialization::StructB", $struct_initializationc::instanceB1;
$instanceB1= \%__instanceB1_hash;
bless $instanceB1, struct_initialization::StructB;

my %__instanceB2_hash;
tie %__instanceB2_hash,"struct_initialization::StructB", $struct_initializationc::instanceB2;
$instanceB2= \%__instanceB2_hash;
bless $instanceB2, struct_initialization::StructB;

my %__instanceB3_hash;
tie %__instanceB3_hash,"struct_initialization::StructB", $struct_initializationc::instanceB3;
$instanceB3= \%__instanceB3_hash;
bless $instanceB3, struct_initialization::StructB;

my %__instanceC1_hash;
tie %__instanceC1_hash,"struct_initialization::StructC", $struct_initializationc::instanceC1;
$instanceC1= \%__instanceC1_hash;
bless $instanceC1, struct_initialization::StructC;

my %__instanceD1_hash;
tie %__instanceD1_hash,"struct_initialization::StructD", $struct_initializationc::instanceD1;
$instanceD1= \%__instanceD1_hash;
bless $instanceD1, struct_initialization::StructD;

my %__instanceD2_hash;
tie %__instanceD2_hash,"struct_initialization::StructD", $struct_initializationc::instanceD2;
$instanceD2= \%__instanceD2_hash;
bless $instanceD2, struct_initialization::StructD;

my %__instanceD3_hash;
tie %__instanceD3_hash,"struct_initialization::StructD", $struct_initializationc::instanceD3;
$instanceD3= \%__instanceD3_hash;
bless $instanceD3, struct_initialization::StructD;

my %__instanceE1_hash;
tie %__instanceE1_hash,"struct_initialization::StructE", $struct_initializationc::instanceE1;
$instanceE1= \%__instanceE1_hash;
bless $instanceE1, struct_initialization::StructE;

my %__instanceF1_hash;
tie %__instanceF1_hash,"struct_initialization::StructF", $struct_initializationc::instanceF1;
$instanceF1= \%__instanceF1_hash;
bless $instanceF1, struct_initialization::StructF;

my %__instanceF2_hash;
tie %__instanceF2_hash,"struct_initialization::StructF", $struct_initializationc::instanceF2;
$instanceF2= \%__instanceF2_hash;
bless $instanceF2, struct_initialization::StructF;

my %__instanceF3_hash;
tie %__instanceF3_hash,"struct_initialization::StructF", $struct_initializationc::instanceF3;
$instanceF3= \%__instanceF3_hash;
bless $instanceF3, struct_initialization::StructF;
1;
