# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_enum;
use base qw(Exporter);
use base qw(DynaLoader);
package template_enumc;
bootstrap template_enum;
package template_enum;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_enum;

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

package template_enum;


############# Class : template_enum::foo_i ##############

package template_enum::foo_i;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum );
%OWNER = ();
%ITERATORS = ();
*FOO = *template_enumc::foo_i_FOO;
*BAR = *template_enumc::foo_i_BAR;
sub new {
    my $pkg = shift;
    my $self = template_enumc::new_foo_i(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enumc::delete_foo_i($self);
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


############# Class : template_enum::foo_d ##############

package template_enum::foo_d;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum );
%OWNER = ();
%ITERATORS = ();
*FOO = *template_enumc::foo_d_FOO;
*BAR = *template_enumc::foo_d_BAR;
sub new {
    my $pkg = shift;
    my $self = template_enumc::new_foo_d(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enumc::delete_foo_d($self);
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


############# Class : template_enum::RGBTraits ##############

package template_enum::RGBTraits;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum );
%OWNER = ();
%ITERATORS = ();
*NumComponents = *template_enumc::RGBTraits_NumComponents;
sub new {
    my $pkg = shift;
    my $self = template_enumc::new_RGBTraits(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enumc::delete_RGBTraits($self);
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


############# Class : template_enum::Color ##############

package template_enum::Color;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum );
%OWNER = ();
%ITERATORS = ();
*NumComponents = *template_enumc::Color_NumComponents;
*swig_data_get = *template_enumc::Color_data_get;
*swig_data_set = *template_enumc::Color_data_set;
sub new {
    my $pkg = shift;
    my $self = template_enumc::new_Color(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enumc::delete_Color($self);
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

package template_enum;

1;
