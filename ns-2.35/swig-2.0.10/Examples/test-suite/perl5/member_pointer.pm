# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package member_pointer;
use base qw(Exporter);
use base qw(DynaLoader);
package member_pointerc;
bootstrap member_pointer;
package member_pointer;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package member_pointer;

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

package member_pointer;

*do_op = *member_pointerc::do_op;
*areapt = *member_pointerc::areapt;
*perimeterpt = *member_pointerc::perimeterpt;
*call1 = *member_pointerc::call1;
*call2 = *member_pointerc::call2;
*call3 = *member_pointerc::call3;

############# Class : member_pointer::Shape ##############

package member_pointer::Shape;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( member_pointer );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        member_pointerc::delete_Shape($self);
        delete $OWNER{$self};
    }
}

*swig_x_get = *member_pointerc::Shape_x_get;
*swig_x_set = *member_pointerc::Shape_x_set;
*swig_y_get = *member_pointerc::Shape_y_get;
*swig_y_set = *member_pointerc::Shape_y_set;
*swig_z_get = *member_pointerc::Shape_z_get;
*swig_z_set = *member_pointerc::Shape_z_set;
*move = *member_pointerc::Shape_move;
*area = *member_pointerc::Shape_area;
*perimeter = *member_pointerc::Shape_perimeter;
*nshapes = *member_pointerc::Shape_nshapes;
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


############# Class : member_pointer::Circle ##############

package member_pointer::Circle;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( member_pointer::Shape member_pointer );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = member_pointerc::new_Circle(@_);
    bless $self, $pkg if defined($self);
}

*area = *member_pointerc::Circle_area;
*perimeter = *member_pointerc::Circle_perimeter;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        member_pointerc::delete_Circle($self);
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


############# Class : member_pointer::Square ##############

package member_pointer::Square;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( member_pointer::Shape member_pointer );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = member_pointerc::new_Square(@_);
    bless $self, $pkg if defined($self);
}

*area = *member_pointerc::Square_area;
*perimeter = *member_pointerc::Square_perimeter;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        member_pointerc::delete_Square($self);
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


############# Class : member_pointer::Funktions ##############

package member_pointer::Funktions;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( member_pointer );
%OWNER = ();
%ITERATORS = ();
*addByValue = *member_pointerc::Funktions_addByValue;
*addByPointer = *member_pointerc::Funktions_addByPointer;
*addByReference = *member_pointerc::Funktions_addByReference;
sub new {
    my $pkg = shift;
    my $self = member_pointerc::new_Funktions(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        member_pointerc::delete_Funktions($self);
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

package member_pointer;

*Shape_nshapes = *member_pointerc::Shape_nshapes;
*areavar = *member_pointerc::areavar;
*perimetervar = *member_pointerc::perimetervar;
*AREAPT = *member_pointerc::AREAPT;
*PERIMPT = *member_pointerc::PERIMPT;
*NULLPT = *member_pointerc::NULLPT;
*ADD_BY_VALUE = *member_pointerc::ADD_BY_VALUE;
*ADD_BY_POINTER = *member_pointerc::ADD_BY_POINTER;
*ADD_BY_REFERENCE = *member_pointerc::ADD_BY_REFERENCE;
1;
