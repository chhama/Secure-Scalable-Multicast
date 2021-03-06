# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package overload_simple;
use base qw(Exporter);
use base qw(DynaLoader);
package overload_simplec;
bootstrap overload_simple;
package overload_simple;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package overload_simple;

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

package overload_simple;

*foo = *overload_simplec::foo;
*blah = *overload_simplec::blah;
*fbool = *overload_simplec::fbool;
*fint = *overload_simplec::fint;
*fdouble = *overload_simplec::fdouble;
*num = *overload_simplec::num;
*fid = *overload_simplec::fid;
*ull = *overload_simplec::ull;
*ll = *overload_simplec::ll;
*malloc_void = *overload_simplec::malloc_void;
*free_void = *overload_simplec::free_void;
*int_object = *overload_simplec::int_object;

############# Class : overload_simple::Foo ##############

package overload_simple::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_simple );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = overload_simplec::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_simplec::delete_Foo($self);
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


############# Class : overload_simple::Bar ##############

package overload_simple::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_simple );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = overload_simplec::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

*foo = *overload_simplec::Bar_foo;
*swig_num_get = *overload_simplec::Bar_num_get;
*swig_num_set = *overload_simplec::Bar_num_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_simplec::delete_Bar($self);
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


############# Class : overload_simple::Spam ##############

package overload_simple::Spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_simple );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = overload_simplec::new_Spam(@_);
    bless $self, $pkg if defined($self);
}

*swig_type_get = *overload_simplec::Spam_type_get;
*swig_type_set = *overload_simplec::Spam_type_set;
*foo = *overload_simplec::Spam_foo;
*bar = *overload_simplec::Spam_bar;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_simplec::delete_Spam($self);
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


############# Class : overload_simple::ClassA ##############

package overload_simple::ClassA;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( overload_simple );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = overload_simplec::new_ClassA(@_);
    bless $self, $pkg if defined($self);
}

*method1 = *overload_simplec::ClassA_method1;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        overload_simplec::delete_ClassA($self);
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

package overload_simple;

1;
