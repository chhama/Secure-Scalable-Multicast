# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package director_wombat;
use base qw(Exporter);
use base qw(DynaLoader);
package director_wombatc;
bootstrap director_wombat;
package director_wombat;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package director_wombat;

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

package director_wombat;


############# Class : director_wombat::Bar ##############

package director_wombat::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_wombat );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_wombatc::delete_Bar($self);
        delete $OWNER{$self};
    }
}

*meth = *director_wombatc::Bar_meth;
*foo_meth_ref = *director_wombatc::Bar_foo_meth_ref;
*foo_meth_ptr = *director_wombatc::Bar_foo_meth_ptr;
*foo_meth_val = *director_wombatc::Bar_foo_meth_val;
*foo_meth_cref = *director_wombatc::Bar_foo_meth_cref;
*foo_meth_cptr = *director_wombatc::Bar_foo_meth_cptr;
sub new {
    my $pkg = shift;
    my $self = director_wombatc::new_Bar(@_);
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


############# Class : director_wombat::Foo_integers ##############

package director_wombat::Foo_integers;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_wombat );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = director_wombatc::new_Foo_integers(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_wombatc::delete_Foo_integers($self);
        delete $OWNER{$self};
    }
}

*meth = *director_wombatc::Foo_integers_meth;
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

package director_wombat;

1;