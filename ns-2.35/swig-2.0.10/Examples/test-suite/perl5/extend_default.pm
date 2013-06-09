# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package extend_default;
use base qw(Exporter);
use base qw(DynaLoader);
package extend_defaultc;
bootstrap extend_default;
package extend_default;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package extend_default;

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

package extend_default;


############# Class : extend_default::Before ##############

package extend_default::Before;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default );
%OWNER = ();
%ITERATORS = ();
*swig_d_get = *extend_defaultc::Before_d_get;
*swig_d_set = *extend_defaultc::Before_d_set;
*swig_i_get = *extend_defaultc::Before_i_get;
*swig_i_set = *extend_defaultc::Before_i_set;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_Before(@_);
    bless $self, $pkg if defined($self);
}

*AddedStaticMethod = *extend_defaultc::Before_AddedStaticMethod;
*AddedMethod = *extend_defaultc::Before_AddedMethod;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_Before($self);
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


############# Class : extend_default::After ##############

package extend_default::After;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default );
%OWNER = ();
%ITERATORS = ();
*swig_d_get = *extend_defaultc::After_d_get;
*swig_d_set = *extend_defaultc::After_d_set;
*swig_i_get = *extend_defaultc::After_i_get;
*swig_i_set = *extend_defaultc::After_i_set;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_After(@_);
    bless $self, $pkg if defined($self);
}

*AddedStaticMethod = *extend_defaultc::After_AddedStaticMethod;
*AddedMethod = *extend_defaultc::After_AddedMethod;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_After($self);
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


############# Class : extend_default::OverBefore ##############

package extend_default::OverBefore;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default );
%OWNER = ();
%ITERATORS = ();
*swig_d_get = *extend_defaultc::OverBefore_d_get;
*swig_d_set = *extend_defaultc::OverBefore_d_set;
*swig_i_get = *extend_defaultc::OverBefore_i_get;
*swig_i_set = *extend_defaultc::OverBefore_i_set;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_OverBefore(@_);
    bless $self, $pkg if defined($self);
}

*AddedStaticMethod = *extend_defaultc::OverBefore_AddedStaticMethod;
*AddedMethod = *extend_defaultc::OverBefore_AddedMethod;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_OverBefore($self);
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


############# Class : extend_default::OverAfter ##############

package extend_default::OverAfter;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default );
%OWNER = ();
%ITERATORS = ();
*swig_d_get = *extend_defaultc::OverAfter_d_get;
*swig_d_set = *extend_defaultc::OverAfter_d_set;
*swig_i_get = *extend_defaultc::OverAfter_i_get;
*swig_i_set = *extend_defaultc::OverAfter_i_set;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_OverAfter(@_);
    bless $self, $pkg if defined($self);
}

*AddedStaticMethod = *extend_defaultc::OverAfter_AddedStaticMethod;
*AddedMethod = *extend_defaultc::OverAfter_AddedMethod;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_OverAfter($self);
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


############# Class : extend_default::Override ##############

package extend_default::Override;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default );
%OWNER = ();
%ITERATORS = ();
*ride = *extend_defaultc::Override_ride;
*over = *extend_defaultc::Override_over;
*overload = *extend_defaultc::Override_overload;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_Override(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_Override($self);
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


############# Class : extend_default::Base ##############

package extend_default::Base;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_Base($self);
        delete $OWNER{$self};
    }
}

*realvirtual = *extend_defaultc::Base_realvirtual;
*virtualmethod = *extend_defaultc::Base_virtualmethod;
*nonvirtual = *extend_defaultc::Base_nonvirtual;
*static_method = *extend_defaultc::Base_static_method;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_Base(@_);
    bless $self, $pkg if defined($self);
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


############# Class : extend_default::Derived ##############

package extend_default::Derived;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_default::Base extend_default );
%OWNER = ();
%ITERATORS = ();
*virtualmethod = *extend_defaultc::Derived_virtualmethod;
*nonvirtual = *extend_defaultc::Derived_nonvirtual;
*static_method = *extend_defaultc::Derived_static_method;
*realvirtual = *extend_defaultc::Derived_realvirtual;
sub new {
    my $pkg = shift;
    my $self = extend_defaultc::new_Derived(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_defaultc::delete_Derived($self);
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

package extend_default;

1;