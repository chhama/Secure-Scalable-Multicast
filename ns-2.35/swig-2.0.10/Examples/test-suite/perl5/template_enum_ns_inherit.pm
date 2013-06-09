# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_enum_ns_inherit;
use base qw(Exporter);
use base qw(DynaLoader);
package template_enum_ns_inheritc;
bootstrap template_enum_ns_inherit;
package template_enum_ns_inherit;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_enum_ns_inherit;

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

package template_enum_ns_inherit;


############# Class : template_enum_ns_inherit::Interface_UP ##############

package template_enum_ns_inherit::Interface_UP;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum_ns_inherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_enum_ns_inheritc::new_Interface_UP(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enum_ns_inheritc::delete_Interface_UP($self);
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


############# Class : template_enum_ns_inherit::Module_UPIUP ##############

package template_enum_ns_inherit::Module_UPIUP;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum_ns_inherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_enum_ns_inheritc::new_Module_UPIUP(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enum_ns_inheritc::delete_Module_UPIUP($self);
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


############# Class : template_enum_ns_inherit::HInterface1 ##############

package template_enum_ns_inherit::HInterface1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum_ns_inherit::Interface_UP template_enum_ns_inherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_enum_ns_inheritc::new_HInterface1(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enum_ns_inheritc::delete_HInterface1($self);
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


############# Class : template_enum_ns_inherit::HInterface2 ##############

package template_enum_ns_inherit::HInterface2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum_ns_inherit::Interface_UP template_enum_ns_inherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_enum_ns_inheritc::new_HInterface2(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enum_ns_inheritc::delete_HInterface2($self);
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


############# Class : template_enum_ns_inherit::HModule1 ##############

package template_enum_ns_inherit::HModule1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_enum_ns_inherit::Module_UPIUP template_enum_ns_inherit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_enum_ns_inheritc::new_HModule1(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_enum_ns_inheritc::delete_HModule1($self);
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

package template_enum_ns_inherit;

*UnaryPolarization = *template_enum_ns_inheritc::UnaryPolarization;
*BinaryPolarization = *template_enum_ns_inheritc::BinaryPolarization;
1;
