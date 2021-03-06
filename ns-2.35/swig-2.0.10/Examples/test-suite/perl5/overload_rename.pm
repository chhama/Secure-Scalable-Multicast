# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package overload_rename;
use base qw(Exporter);
use base qw(DynaLoader);
package overload_renamec;
bootstrap overload_rename;
package overload_rename;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package overload_rename;

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

package overload_rename;


############# Class : overload_rename::Foo ##############

package overload_rename::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_rename );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = overload_renamec::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub new_Foo_int {
    my $pkg = shift;
    my $self = overload_renamec::new_Foo_int(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_renamec::delete_Foo($self);
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

package overload_rename;

1;
