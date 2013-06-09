# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package li_std_combinations;
use base qw(Exporter);
use base qw(DynaLoader);
package li_std_combinationsc;
bootstrap li_std_combinations;
package li_std_combinations;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package li_std_combinations;

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

package li_std_combinations;


############# Class : li_std_combinations::VectorInt ##############

package li_std_combinations::VectorInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_VectorInt(@_);
    bless $self, $pkg if defined($self);
}

*size = *li_std_combinationsc::VectorInt_size;
*empty = *li_std_combinationsc::VectorInt_empty;
*clear = *li_std_combinationsc::VectorInt_clear;
*push = *li_std_combinationsc::VectorInt_push;
*pop = *li_std_combinationsc::VectorInt_pop;
*get = *li_std_combinationsc::VectorInt_get;
*set = *li_std_combinationsc::VectorInt_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_VectorInt($self);
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


############# Class : li_std_combinations::VectorString ##############

package li_std_combinations::VectorString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_VectorString(@_);
    bless $self, $pkg if defined($self);
}

*size = *li_std_combinationsc::VectorString_size;
*empty = *li_std_combinationsc::VectorString_empty;
*clear = *li_std_combinationsc::VectorString_clear;
*push = *li_std_combinationsc::VectorString_push;
*pop = *li_std_combinationsc::VectorString_pop;
*get = *li_std_combinationsc::VectorString_get;
*set = *li_std_combinationsc::VectorString_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_VectorString($self);
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


############# Class : li_std_combinations::PairIntString ##############

package li_std_combinations::PairIntString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_PairIntString(@_);
    bless $self, $pkg if defined($self);
}

*swig_first_get = *li_std_combinationsc::PairIntString_first_get;
*swig_first_set = *li_std_combinationsc::PairIntString_first_set;
*swig_second_get = *li_std_combinationsc::PairIntString_second_get;
*swig_second_set = *li_std_combinationsc::PairIntString_second_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_PairIntString($self);
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


############# Class : li_std_combinations::VectorPairIntString ##############

package li_std_combinations::VectorPairIntString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_VectorPairIntString(@_);
    bless $self, $pkg if defined($self);
}

*size = *li_std_combinationsc::VectorPairIntString_size;
*empty = *li_std_combinationsc::VectorPairIntString_empty;
*clear = *li_std_combinationsc::VectorPairIntString_clear;
*push = *li_std_combinationsc::VectorPairIntString_push;
*pop = *li_std_combinationsc::VectorPairIntString_pop;
*get = *li_std_combinationsc::VectorPairIntString_get;
*set = *li_std_combinationsc::VectorPairIntString_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_VectorPairIntString($self);
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


############# Class : li_std_combinations::PairIntVectorString ##############

package li_std_combinations::PairIntVectorString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_PairIntVectorString(@_);
    bless $self, $pkg if defined($self);
}

*swig_first_get = *li_std_combinationsc::PairIntVectorString_first_get;
*swig_first_set = *li_std_combinationsc::PairIntVectorString_first_set;
*swig_second_get = *li_std_combinationsc::PairIntVectorString_second_get;
*swig_second_set = *li_std_combinationsc::PairIntVectorString_second_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_PairIntVectorString($self);
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


############# Class : li_std_combinations::VectorVectorString ##############

package li_std_combinations::VectorVectorString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_VectorVectorString(@_);
    bless $self, $pkg if defined($self);
}

*size = *li_std_combinationsc::VectorVectorString_size;
*empty = *li_std_combinationsc::VectorVectorString_empty;
*clear = *li_std_combinationsc::VectorVectorString_clear;
*push = *li_std_combinationsc::VectorVectorString_push;
*pop = *li_std_combinationsc::VectorVectorString_pop;
*get = *li_std_combinationsc::VectorVectorString_get;
*set = *li_std_combinationsc::VectorVectorString_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_VectorVectorString($self);
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


############# Class : li_std_combinations::PairIntPairIntString ##############

package li_std_combinations::PairIntPairIntString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_PairIntPairIntString(@_);
    bless $self, $pkg if defined($self);
}

*swig_first_get = *li_std_combinationsc::PairIntPairIntString_first_get;
*swig_first_set = *li_std_combinationsc::PairIntPairIntString_first_set;
*swig_second_get = *li_std_combinationsc::PairIntPairIntString_second_get;
*swig_second_set = *li_std_combinationsc::PairIntPairIntString_second_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_PairIntPairIntString($self);
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


############# Class : li_std_combinations::PairDoubleString ##############

package li_std_combinations::PairDoubleString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_PairDoubleString(@_);
    bless $self, $pkg if defined($self);
}

*swig_first_get = *li_std_combinationsc::PairDoubleString_first_get;
*swig_first_set = *li_std_combinationsc::PairDoubleString_first_set;
*swig_second_get = *li_std_combinationsc::PairDoubleString_second_get;
*swig_second_set = *li_std_combinationsc::PairDoubleString_second_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_PairDoubleString($self);
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


############# Class : li_std_combinations::VectorPairDoubleString ##############

package li_std_combinations::VectorPairDoubleString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_combinations );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_combinationsc::new_VectorPairDoubleString(@_);
    bless $self, $pkg if defined($self);
}

*size = *li_std_combinationsc::VectorPairDoubleString_size;
*empty = *li_std_combinationsc::VectorPairDoubleString_empty;
*clear = *li_std_combinationsc::VectorPairDoubleString_clear;
*push = *li_std_combinationsc::VectorPairDoubleString_push;
*pop = *li_std_combinationsc::VectorPairDoubleString_pop;
*get = *li_std_combinationsc::VectorPairDoubleString_get;
*set = *li_std_combinationsc::VectorPairDoubleString_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_combinationsc::delete_VectorPairDoubleString($self);
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

package li_std_combinations;

1;