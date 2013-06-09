# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package clientdata_prop_a;
use base qw(Exporter);
use base qw(DynaLoader);
package clientdata_prop_ac;
bootstrap clientdata_prop_a;
package clientdata_prop_a;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package clientdata_prop_a;

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

package clientdata_prop_a;

*test_A = *clientdata_prop_ac::test_A;
*test_tA = *clientdata_prop_ac::test_tA;
*new_tA = *clientdata_prop_ac::new_tA;

############# Class : clientdata_prop_a::A ##############

package clientdata_prop_a::A;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( clientdata_prop_a );
%OWNER = ();
%ITERATORS = ();
*fA = *clientdata_prop_ac::A_fA;
sub new {
    my $pkg = shift;
    my $self = clientdata_prop_ac::new_A(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        clientdata_prop_ac::delete_A($self);
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

package clientdata_prop_a;

1;
