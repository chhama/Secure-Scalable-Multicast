# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package compactdefaultargs;
use base qw(Exporter);
use base qw(DynaLoader);
package compactdefaultargsc;
bootstrap compactdefaultargs;
package compactdefaultargs;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package compactdefaultargs;

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

package compactdefaultargs;


############# Class : compactdefaultargs::Defaults1 ##############

package compactdefaultargs::Defaults1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( compactdefaultargs );
%OWNER = ();
%ITERATORS = ();
*PUBLIC_DEFAULT = *compactdefaultargsc::Defaults1_PUBLIC_DEFAULT;
sub new {
    my $pkg = shift;
    my $self = compactdefaultargsc::new_Defaults1(@_);
    bless $self, $pkg if defined($self);
}

*ret = *compactdefaultargsc::Defaults1_ret;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        compactdefaultargsc::delete_Defaults1($self);
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


############# Class : compactdefaultargs::Defaults2 ##############

package compactdefaultargs::Defaults2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( compactdefaultargs );
%OWNER = ();
%ITERATORS = ();
*PUBLIC_DEFAULT = *compactdefaultargsc::Defaults2_PUBLIC_DEFAULT;
sub new {
    my $pkg = shift;
    my $self = compactdefaultargsc::new_Defaults2(@_);
    bless $self, $pkg if defined($self);
}

*ret = *compactdefaultargsc::Defaults2_ret;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        compactdefaultargsc::delete_Defaults2($self);
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

package compactdefaultargs;

*Defaults1_PUBLIC_DEFAULT = *compactdefaultargsc::Defaults1_PUBLIC_DEFAULT;
*Defaults2_PUBLIC_DEFAULT = *compactdefaultargsc::Defaults2_PUBLIC_DEFAULT;
1;
