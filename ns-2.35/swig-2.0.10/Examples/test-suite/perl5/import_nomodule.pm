# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package import_nomodule;
use base qw(Exporter);
use base qw(DynaLoader);
package import_nomodulec;
bootstrap import_nomodule;
package import_nomodule;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package import_nomodule;

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

package import_nomodule;

*create_Foo = *import_nomodulec::create_Foo;
*delete_Foo = *import_nomodulec::delete_Foo;
*test1 = *import_nomodulec::test1;

############# Class : import_nomodule::Bar ##############

package import_nomodule::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( import_nomodule );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = import_nomodulec::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        import_nomodulec::delete_Bar($self);
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

package import_nomodule;

1;
