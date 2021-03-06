# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package director_basic;
use base qw(Exporter);
use base qw(DynaLoader);
package director_basicc;
bootstrap director_basic;
package director_basic;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package director_basic;

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

package director_basic;


############# Class : director_basic::Foo ##############

package director_basic::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_basic );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_basicc::delete_Foo($self);
        delete $OWNER{$self};
    }
}

*ping = *director_basicc::Foo_ping;
*pong = *director_basicc::Foo_pong;
*get_self = *director_basicc::Foo_get_self;
sub new {
    my $pkg = shift;
    my $self = director_basicc::new_Foo(@_);
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


############# Class : director_basic::A ##############

package director_basic::A;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_basic );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = director_basicc::new_A(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_basicc::delete_A($self);
        delete $OWNER{$self};
    }
}

*f = *director_basicc::A_f;
*rg = *director_basicc::A_rg;
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


############# Class : director_basic::A1 ##############

package director_basic::A1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_basic::A director_basic );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = director_basicc::new_A1(@_);
    bless $self, $pkg if defined($self);
}

*ff = *director_basicc::A1_ff;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_basicc::delete_A1($self);
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


############# Class : director_basic::Bar ##############

package director_basic::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_basic );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *director_basicc::Bar_x_get;
*swig_x_set = *director_basicc::Bar_x_set;
sub new {
    my $pkg = shift;
    my $self = director_basicc::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_basicc::delete_Bar($self);
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


############# Class : director_basic::MyClass ##############

package director_basic::MyClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_basic );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = director_basicc::new_MyClass(@_);
    bless $self, $pkg if defined($self);
}

*method = *director_basicc::MyClass_method;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_basicc::delete_MyClass($self);
        delete $OWNER{$self};
    }
}

*vmethod = *director_basicc::MyClass_vmethod;
*pmethod = *director_basicc::MyClass_pmethod;
*cmethod = *director_basicc::MyClass_cmethod;
*get_self = *director_basicc::MyClass_get_self;
*call_pmethod = *director_basicc::MyClass_call_pmethod;
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


############# Class : director_basic::MyClassT_i ##############

package director_basic::MyClassT_i;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_basic );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = director_basicc::new_MyClassT_i(@_);
    bless $self, $pkg if defined($self);
}

*method = *director_basicc::MyClassT_i_method;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_basicc::delete_MyClassT_i($self);
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

package director_basic;

1;
