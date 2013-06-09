# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package director_overload;
use base qw(Exporter);
use base qw(DynaLoader);
package director_overloadc;
bootstrap director_overload;
package director_overload;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package director_overload;

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

package director_overload;


############# Class : director_overload::OverloadedClass ##############

package director_overload::OverloadedClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_overload );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_overloadc::delete_OverloadedClass($self);
        delete $OWNER{$self};
    }
}

*method1 = *director_overloadc::OverloadedClass_method1;
*method3 = *director_overloadc::OverloadedClass_method3;
*method2 = *director_overloadc::OverloadedClass_method2;
sub new {
    my $pkg = shift;
    my $self = director_overloadc::new_OverloadedClass(@_);
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


############# Class : director_overload::OverloadedPointers ##############

package director_overload::OverloadedPointers;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_overload );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_overloadc::delete_OverloadedPointers($self);
        delete $OWNER{$self};
    }
}

*method = *director_overloadc::OverloadedPointers_method;
*notover = *director_overloadc::OverloadedPointers_notover;
sub new {
    my $pkg = shift;
    my $self = director_overloadc::new_OverloadedPointers(@_);
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


# ------- VARIABLE STUBS --------

package director_overload;

1;
