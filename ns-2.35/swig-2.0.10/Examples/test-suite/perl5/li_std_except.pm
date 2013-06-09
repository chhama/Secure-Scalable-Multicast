# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package li_std_except;
use base qw(Exporter);
use base qw(DynaLoader);
package li_std_exceptc;
bootstrap li_std_except;
package li_std_except;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package li_std_except;

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

package li_std_except;


############# Class : li_std_except::E1 ##############

package li_std_except::E1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_except );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_exceptc::new_E1(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_exceptc::delete_E1($self);
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


############# Class : li_std_except::E2 ##############

package li_std_except::E2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_except );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_std_exceptc::new_E2(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_exceptc::delete_E2($self);
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


############# Class : li_std_except::Test ##############

package li_std_except::Test;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_except );
%OWNER = ();
%ITERATORS = ();
*foo1 = *li_std_exceptc::Test_foo1;
*foo2 = *li_std_exceptc::Test_foo2;
*foo3 = *li_std_exceptc::Test_foo3;
*foo4 = *li_std_exceptc::Test_foo4;
*throw_bad_exception = *li_std_exceptc::Test_throw_bad_exception;
*throw_domain_error = *li_std_exceptc::Test_throw_domain_error;
*throw_exception = *li_std_exceptc::Test_throw_exception;
*throw_invalid_argument = *li_std_exceptc::Test_throw_invalid_argument;
*throw_length_error = *li_std_exceptc::Test_throw_length_error;
*throw_logic_error = *li_std_exceptc::Test_throw_logic_error;
*throw_out_of_range = *li_std_exceptc::Test_throw_out_of_range;
*throw_overflow_error = *li_std_exceptc::Test_throw_overflow_error;
*throw_range_error = *li_std_exceptc::Test_throw_range_error;
*throw_runtime_error = *li_std_exceptc::Test_throw_runtime_error;
*throw_underflow_error = *li_std_exceptc::Test_throw_underflow_error;
sub new {
    my $pkg = shift;
    my $self = li_std_exceptc::new_Test(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_exceptc::delete_Test($self);
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

package li_std_except;

1;