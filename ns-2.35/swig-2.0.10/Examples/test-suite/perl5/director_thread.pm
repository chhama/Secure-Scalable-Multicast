# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package director_thread;
use base qw(Exporter);
use base qw(DynaLoader);
package director_threadc;
bootstrap director_thread;
package director_thread;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package director_thread;

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

package director_thread;

*MilliSecondSleep = *director_threadc::MilliSecondSleep;

############# Class : director_thread::Foo ##############

package director_thread::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_thread );
%OWNER = ();
%ITERATORS = ();
*swig_val_get = *director_threadc::Foo_val_get;
*swig_val_set = *director_threadc::Foo_val_set;
sub new {
    my $pkg = shift;
    my $self = director_threadc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_threadc::delete_Foo($self);
        delete $OWNER{$self};
    }
}

*stop = *director_threadc::Foo_stop;
*run = *director_threadc::Foo_run;
*do_foo = *director_threadc::Foo_do_foo;
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

package director_thread;

1;
