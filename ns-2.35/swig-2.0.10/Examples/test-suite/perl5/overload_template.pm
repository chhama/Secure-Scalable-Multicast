# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package overload_template;
use base qw(Exporter);
use base qw(DynaLoader);
package overload_templatec;
bootstrap overload_template;
package overload_template;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package overload_template;

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

package overload_template;

*foo = *overload_templatec::foo;
*maximum = *overload_templatec::maximum;
*mix1 = *overload_templatec::mix1;
*mix2 = *overload_templatec::mix2;
*mix3 = *overload_templatec::mix3;
*overtparams1 = *overload_templatec::overtparams1;
*overtparams2 = *overload_templatec::overtparams2;
*overloaded = *overload_templatec::overloaded;
*overloadedagain = *overload_templatec::overloadedagain;
*xyz = *overload_templatec::xyz;
*xyz_double = *overload_templatec::xyz_double;
*xyz_int = *overload_templatec::xyz_int;
*specialization = *overload_templatec::specialization;
*overload = *overload_templatec::overload;
*nsoverload = *overload_templatec::nsoverload;

############# Class : overload_template::Klass ##############

package overload_template::Klass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_template );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = overload_templatec::new_Klass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_templatec::delete_Klass($self);
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


############# Class : overload_template::A ##############

package overload_template::A;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_template );
%OWNER = ();
%ITERATORS = ();
*foo = *overload_templatec::A_foo;
sub new {
    my $pkg = shift;
    my $self = overload_templatec::new_A(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_templatec::delete_A($self);
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


############# Class : overload_template::B ##############

package overload_template::B;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_template );
%OWNER = ();
%ITERATORS = ();
*foo = *overload_templatec::B_foo;
sub new {
    my $pkg = shift;
    my $self = overload_templatec::new_B(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_templatec::delete_B($self);
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


############# Class : overload_template::Bar_d ##############

package overload_template::Bar_d;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_template );
%OWNER = ();
%ITERATORS = ();
*foo = *overload_templatec::Bar_d_foo;
sub new {
    my $pkg = shift;
    my $self = overload_templatec::new_Bar_d(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_templatec::delete_Bar_d($self);
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


############# Class : overload_template::Foo_d ##############

package overload_template::Foo_d;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_template );
%OWNER = ();
%ITERATORS = ();
*bar = *overload_templatec::Foo_d_bar;
sub new {
    my $pkg = shift;
    my $self = overload_templatec::new_Foo_d(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_templatec::delete_Foo_d($self);
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

package overload_template;

1;
