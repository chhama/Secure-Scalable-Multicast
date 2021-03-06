# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package enums;
use base qw(Exporter);
use base qw(DynaLoader);
package enumsc;
bootstrap enums;
package enums;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package enums;

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

package enums;

*bar1 = *enumsc::bar1;
*bar2 = *enumsc::bar2;
*bar3 = *enumsc::bar3;

############# Class : enums::Foo ##############

package enums::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enums );
%OWNER = ();
%ITERATORS = ();
*swig_e_get = *enumsc::Foo_e_get;
*swig_e_set = *enumsc::Foo_e_set;
sub new {
    my $pkg = shift;
    my $self = enumsc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enumsc::delete_Foo($self);
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


############# Class : enums::iFoo ##############

package enums::iFoo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enums );
%OWNER = ();
%ITERATORS = ();
*swig_e_get = *enumsc::iFoo_e_get;
*swig_e_set = *enumsc::iFoo_e_set;
sub new {
    my $pkg = shift;
    my $self = enumsc::new_iFoo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enumsc::delete_iFoo($self);
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

package enums;

*CSP_ITERATION_FWD = *enumsc::CSP_ITERATION_FWD;
*CSP_ITERATION_BWD = *enumsc::CSP_ITERATION_BWD;
*ABCDE = *enumsc::ABCDE;
*FGHJI = *enumsc::FGHJI;
*boo = *enumsc::boo;
*hoo = *enumsc::hoo;
*globalinstance1 = *enumsc::globalinstance1;
*globalinstance2 = *enumsc::globalinstance2;
*globalinstance3 = *enumsc::globalinstance3;
*GlobalInstance = *enumsc::GlobalInstance;
*AnonEnum1 = *enumsc::AnonEnum1;
*AnonEnum2 = *enumsc::AnonEnum2;
*BAR1 = *enumsc::BAR1;
*BAR2 = *enumsc::BAR2;
*Phoo = *enumsc::Phoo;
*Char = *enumsc::Char;
*goodness = *enumsc::goodness;
*gracious = *enumsc::gracious;
*me = *enumsc::me;
*enumInstance = *enumsc::enumInstance;
*slap = *enumsc::slap;
*mine = *enumsc::mine;
*thigh = *enumsc::thigh;
*Slap = *enumsc::Slap;
*Mine = *enumsc::Mine;
*Thigh = *enumsc::Thigh;
*pThigh = *enumsc::pThigh;
*arrayContainYourself = *enumsc::arrayContainYourself;
1;
