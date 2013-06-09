# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package cpp_typedef;
use base qw(Exporter);
use base qw(DynaLoader);
package cpp_typedefc;
bootstrap cpp_typedef;
package cpp_typedef;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package cpp_typedef;

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

package cpp_typedef;


############# Class : cpp_typedef::Foo ##############

package cpp_typedef::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( cpp_typedef );
%OWNER = ();
%ITERATORS = ();
*bar = *cpp_typedefc::Foo_bar;
*sbar = *cpp_typedefc::Foo_sbar;
sub new {
    my $pkg = shift;
    my $self = cpp_typedefc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        cpp_typedefc::delete_Foo($self);
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


############# Class : cpp_typedef::UnnamedStruct ##############

package cpp_typedef::UnnamedStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( cpp_typedef );
%OWNER = ();
%ITERATORS = ();
*swig_something_get = *cpp_typedefc::UnnamedStruct_something_get;
*swig_something_set = *cpp_typedefc::UnnamedStruct_something_set;
*m = *cpp_typedefc::UnnamedStruct_m;
sub new {
    my $pkg = shift;
    my $self = cpp_typedefc::new_UnnamedStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        cpp_typedefc::delete_UnnamedStruct($self);
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


############# Class : cpp_typedef::TypedefNamedStruct ##############

package cpp_typedef::TypedefNamedStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( cpp_typedef );
%OWNER = ();
%ITERATORS = ();
*swig_something_get = *cpp_typedefc::TypedefNamedStruct_something_get;
*swig_something_set = *cpp_typedefc::TypedefNamedStruct_something_set;
*m = *cpp_typedefc::TypedefNamedStruct_m;
sub new {
    my $pkg = shift;
    my $self = cpp_typedefc::new_TypedefNamedStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        cpp_typedefc::delete_TypedefNamedStruct($self);
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


############# Class : cpp_typedef::Test ##############

package cpp_typedef::Test;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( cpp_typedef );
%OWNER = ();
%ITERATORS = ();
*test1 = *cpp_typedefc::Test_test1;
*test2 = *cpp_typedefc::Test_test2;
*test3 = *cpp_typedefc::Test_test3;
*test4 = *cpp_typedefc::Test_test4;
sub new {
    my $pkg = shift;
    my $self = cpp_typedefc::new_Test(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        cpp_typedefc::delete_Test($self);
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

package cpp_typedef;

1;