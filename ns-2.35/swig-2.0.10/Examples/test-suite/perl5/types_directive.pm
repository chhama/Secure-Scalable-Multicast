# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package types_directive;
use base qw(Exporter);
use base qw(DynaLoader);
package types_directivec;
bootstrap types_directive;
package types_directive;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package types_directive;

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

package types_directive;

*add = *types_directivec::add;

############# Class : types_directive::Date ##############

package types_directive::Date;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( types_directive );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = types_directivec::new_Date(@_);
    bless $self, $pkg if defined($self);
}

*swig_year_get = *types_directivec::Date_year_get;
*swig_year_set = *types_directivec::Date_year_set;
*swig_month_get = *types_directivec::Date_month_get;
*swig_month_set = *types_directivec::Date_month_set;
*swig_day_get = *types_directivec::Date_day_get;
*swig_day_set = *types_directivec::Date_day_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        types_directivec::delete_Date($self);
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


############# Class : types_directive::Time1 ##############

package types_directive::Time1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( types_directive );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = types_directivec::new_Time1(@_);
    bless $self, $pkg if defined($self);
}

*dateFromTime = *types_directivec::Time1_dateFromTime;
*swig_date_get = *types_directivec::Time1_date_get;
*swig_date_set = *types_directivec::Time1_date_set;
*swig_seconds_get = *types_directivec::Time1_seconds_get;
*swig_seconds_set = *types_directivec::Time1_seconds_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        types_directivec::delete_Time1($self);
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


############# Class : types_directive::Time2 ##############

package types_directive::Time2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( types_directive );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = types_directivec::new_Time2(@_);
    bless $self, $pkg if defined($self);
}

*swig_date_get = *types_directivec::Time2_date_get;
*swig_date_set = *types_directivec::Time2_date_set;
*swig_seconds_get = *types_directivec::Time2_seconds_get;
*swig_seconds_set = *types_directivec::Time2_seconds_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        types_directivec::delete_Time2($self);
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

package types_directive;

1;