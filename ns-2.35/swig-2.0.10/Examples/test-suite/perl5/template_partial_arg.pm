# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_partial_arg;
use base qw(Exporter);
use base qw(DynaLoader);
package template_partial_argc;
bootstrap template_partial_arg;
package template_partial_arg;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_partial_arg;

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

package template_partial_arg;


############# Class : template_partial_arg::Bar ##############

package template_partial_arg::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_partial_arg );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_partial_argc::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_partial_argc::delete_Bar($self);
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


############# Class : template_partial_arg::Foo1 ##############

package template_partial_arg::Foo1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_partial_arg );
%OWNER = ();
%ITERATORS = ();
*bar = *template_partial_argc::Foo1_bar;
*baz = *template_partial_argc::Foo1_baz;
sub new {
    my $pkg = shift;
    my $self = template_partial_argc::new_Foo1(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_partial_argc::delete_Foo1($self);
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


############# Class : template_partial_arg::Foo2 ##############

package template_partial_arg::Foo2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_partial_arg );
%OWNER = ();
%ITERATORS = ();
*bar = *template_partial_argc::Foo2_bar;
*baz = *template_partial_argc::Foo2_baz;
sub new {
    my $pkg = shift;
    my $self = template_partial_argc::new_Foo2(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_partial_argc::delete_Foo2($self);
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

package template_partial_arg;

1;