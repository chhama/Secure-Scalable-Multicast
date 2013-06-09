# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package memberin_extend_c;
use base qw(Exporter);
use base qw(DynaLoader);
package memberin_extend_cc;
bootstrap memberin_extend_c;
package memberin_extend_c;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package memberin_extend_c;

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

package memberin_extend_c;


############# Class : memberin_extend_c::Person ##############

package memberin_extend_c::Person;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( memberin_extend_c );
%OWNER = ();
%ITERATORS = ();
*swig_name_get = *memberin_extend_cc::Person_name_get;
*swig_name_set = *memberin_extend_cc::Person_name_set;
sub new {
    my $pkg = shift;
    my $self = memberin_extend_cc::new_Person(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        memberin_extend_cc::delete_Person($self);
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

package memberin_extend_c;

1;