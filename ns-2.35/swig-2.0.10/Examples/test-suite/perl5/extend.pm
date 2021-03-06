# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package extend;
use base qw(Exporter);
use base qw(DynaLoader);
package extendc;
bootstrap extend;
package extend;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package extend;

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

package extend;


############# Class : extend::Base ##############

package extend::Base;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = extendc::new_Base(@_);
    bless $self, $pkg if defined($self);
}

*swig_value_get = *extendc::Base_value_get;
*swig_value_set = *extendc::Base_value_set;
*method = *extendc::Base_method;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extendc::delete_Base($self);
        delete $OWNER{$self};
    }
}

*zeroVal = *extendc::Base_zeroVal;
*currentValue = *extendc::Base_currentValue;
*extendmethod = *extendc::Base_extendmethod;
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


############# Class : extend::Derived ##############

package extend::Derived;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend::Base extend );
%OWNER = ();
%ITERATORS = ();
*swig_actualval_get = *extendc::Derived_actualval_get;
*swig_actualval_set = *extendc::Derived_actualval_set;
sub new {
    my $pkg = shift;
    my $self = extendc::new_Derived(@_);
    bless $self, $pkg if defined($self);
}

*method = *extendc::Derived_method;
*swig_extendval_get = *extendc::Derived_extendval_get;
*swig_extendval_set = *extendc::Derived_extendval_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extendc::delete_Derived($self);
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

package extend;

1;
