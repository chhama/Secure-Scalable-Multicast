# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package throw_exception;
use base qw(Exporter);
use base qw(DynaLoader);
package throw_exceptionc;
bootstrap throw_exception;
package throw_exception;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package throw_exception;

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

package throw_exception;

*test_is_Error = *throw_exceptionc::test_is_Error;

############# Class : throw_exception::Error ##############

package throw_exception::Error;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( throw_exception );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = throw_exceptionc::new_Error(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        throw_exceptionc::delete_Error($self);
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


############# Class : throw_exception::Foo ##############

package throw_exception::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( throw_exception );
%OWNER = ();
%ITERATORS = ();
*test_int = *throw_exceptionc::Foo_test_int;
*test_msg = *throw_exceptionc::Foo_test_msg;
*test_cls = *throw_exceptionc::Foo_test_cls;
*test_cls_ptr = *throw_exceptionc::Foo_test_cls_ptr;
*test_cls_ref = *throw_exceptionc::Foo_test_cls_ref;
*test_cls_td = *throw_exceptionc::Foo_test_cls_td;
*test_cls_ptr_td = *throw_exceptionc::Foo_test_cls_ptr_td;
*test_cls_ref_td = *throw_exceptionc::Foo_test_cls_ref_td;
*test_array = *throw_exceptionc::Foo_test_array;
*test_enum = *throw_exceptionc::Foo_test_enum;
*test_multi = *throw_exceptionc::Foo_test_multi;
sub new {
    my $pkg = shift;
    my $self = throw_exceptionc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        throw_exceptionc::delete_Foo($self);
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

package throw_exception;

*enum1 = *throw_exceptionc::enum1;
*enum2 = *throw_exceptionc::enum2;
1;
