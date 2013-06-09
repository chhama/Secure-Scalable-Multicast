# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package director_redefined;
use base qw(Exporter);
use base qw(DynaLoader);
package director_redefinedc;
bootstrap director_redefined;
package director_redefined;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package director_redefined;

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

package director_redefined;


############# Class : director_redefined::A ##############

package director_redefined::A;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_redefined );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_redefinedc::delete_A($self);
        delete $OWNER{$self};
    }
}

*get_val = *director_redefinedc::A_get_val;
*get_rval = *director_redefinedc::A_get_rval;
sub new {
    my $pkg = shift;
    my $self = director_redefinedc::new_A(@_);
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


############# Class : director_redefined::B ##############

package director_redefined::B;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_redefined::A director_redefined );
%OWNER = ();
%ITERATORS = ();
*get_val = *director_redefinedc::B_get_val;
*get_rval = *director_redefinedc::B_get_rval;
*get_rrval = *director_redefinedc::B_get_rrval;
sub new {
    my $pkg = shift;
    my $self = director_redefinedc::new_B(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_redefinedc::delete_B($self);
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

package director_redefined;

1;