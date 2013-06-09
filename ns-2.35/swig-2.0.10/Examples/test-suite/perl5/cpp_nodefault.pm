# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package cpp_nodefault;
use base qw(Exporter);
use base qw(DynaLoader);
package cpp_nodefaultc;
bootstrap cpp_nodefault;
package cpp_nodefault;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package cpp_nodefault;

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

package cpp_nodefault;

*create = *cpp_nodefaultc::create;
*consume = *cpp_nodefaultc::consume;

############# Class : cpp_nodefault::Foo ##############

package cpp_nodefault::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( cpp_nodefault );
%OWNER = ();
%ITERATORS = ();
*swig_a_get = *cpp_nodefaultc::Foo_a_get;
*swig_a_set = *cpp_nodefaultc::Foo_a_set;
sub new {
    my $pkg = shift;
    my $self = cpp_nodefaultc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        cpp_nodefaultc::delete_Foo($self);
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


############# Class : cpp_nodefault::Bar ##############

package cpp_nodefault::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( cpp_nodefault );
%OWNER = ();
%ITERATORS = ();
*consume = *cpp_nodefaultc::Bar_consume;
*create = *cpp_nodefaultc::Bar_create;
sub new {
    my $pkg = shift;
    my $self = cpp_nodefaultc::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        cpp_nodefaultc::delete_Bar($self);
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

package cpp_nodefault;


my %__gvar_hash;
tie %__gvar_hash,"cpp_nodefault::Foo", $cpp_nodefaultc::gvar;
$gvar= \%__gvar_hash;
bless $gvar, cpp_nodefault::Foo;
1;