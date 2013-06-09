# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package default_args;
use base qw(Exporter);
use base qw(DynaLoader);
package default_argsc;
bootstrap default_args;
package default_args;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package default_args;

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

package default_args;

*anonymous = *default_argsc::anonymous;
*booltest = *default_argsc::booltest;
*casts1 = *default_argsc::casts1;
*casts2 = *default_argsc::casts2;
*chartest1 = *default_argsc::chartest1;
*chartest2 = *default_argsc::chartest2;
*dummy = *default_argsc::dummy;
*afunction = *default_argsc::afunction;
*reftest1 = *default_argsc::reftest1;
*reftest2 = *default_argsc::reftest2;
*chops = *default_argsc::chops;
*exceptionspec = *default_argsc::exceptionspec;
*constructorcall = *default_argsc::constructorcall;
*cfunc1 = *default_argsc::cfunc1;
*cfunc2 = *default_argsc::cfunc2;
*cfunc3 = *default_argsc::cfunc3;

############# Class : default_args::EnumClass ##############

package default_args::EnumClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*FAST = *default_argsc::EnumClass_FAST;
*SLOW = *default_argsc::EnumClass_SLOW;
*blah = *default_argsc::EnumClass_blah;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_EnumClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_EnumClass($self);
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


############# Class : default_args::Tree ##############

package default_args::Tree;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*Oak = *default_argsc::Tree_Oak;
*Fir = *default_argsc::Tree_Fir;
*Cedar = *default_argsc::Tree_Cedar;
*chops = *default_argsc::Tree_chops;
*test = *default_argsc::Tree_test;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Tree(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Tree($self);
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


############# Class : default_args::Foo ##############

package default_args::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*bar2 = *default_argsc::Foo_bar2;
*spam = *default_argsc::Foo_spam;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Foo(@_);
    bless $self, $pkg if defined($self);
}

*method1 = *default_argsc::Foo_method1;
*method2 = *default_argsc::Foo_method2;
*newname = *default_argsc::Foo_newname;
*renamed3arg = *default_argsc::Foo_renamed3arg;
*renamed2arg = *default_argsc::Foo_renamed2arg;
*renamed1arg = *default_argsc::Foo_renamed1arg;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Foo($self);
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


############# Class : default_args::MyClass1 ##############

package default_args::MyClass1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_MyClass1(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_MyClass1($self);
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


############# Class : default_args::MyClass2 ##############

package default_args::MyClass2;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*set = *default_argsc::MyClass2_set;
*set2 = *default_argsc::MyClass2_set2;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_MyClass2(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_MyClass2($self);
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


############# Class : default_args::Except ##############

package default_args::Except;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Except(@_);
    bless $self, $pkg if defined($self);
}

*exspec = *default_argsc::Except_exspec;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Except($self);
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


############# Class : default_args::Statics ##############

package default_args::Statics;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*staticmethod = *default_argsc::Statics_staticmethod;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Statics(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Statics($self);
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


############# Class : default_args::Tricky ##############

package default_args::Tricky;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*privatedefault = *default_argsc::Tricky_privatedefault;
*protectedint = *default_argsc::Tricky_protectedint;
*protecteddouble = *default_argsc::Tricky_protecteddouble;
*functiondefault = *default_argsc::Tricky_functiondefault;
*contrived = *default_argsc::Tricky_contrived;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Tricky(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Tricky($self);
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


############# Class : default_args::Klass ##############

package default_args::Klass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*swig_val_get = *default_argsc::Klass_val_get;
*swig_val_set = *default_argsc::Klass_val_set;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Klass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Klass($self);
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


############# Class : default_args::ConstMethods ##############

package default_args::ConstMethods;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*coo = *default_argsc::ConstMethods_coo;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_ConstMethods(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_ConstMethods($self);
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


############# Class : default_args::Pointf ##############

package default_args::Pointf;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( default_args );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *default_argsc::Pointf_x_get;
*swig_x_set = *default_argsc::Pointf_x_set;
*swig_y_get = *default_argsc::Pointf_y_get;
*swig_y_set = *default_argsc::Pointf_y_set;
sub new {
    my $pkg = shift;
    my $self = default_argsc::new_Pointf(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        default_argsc::delete_Pointf($self);
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

package default_args;

*BITTER = *default_argsc::BITTER;
*SWEET = *default_argsc::SWEET;
*NoType = *default_argsc::NoType;
*CONST_NUM = *default_argsc::CONST_NUM;
*Foo_bar2 = *default_argsc::Foo_bar2;
*Foo_spam = *default_argsc::Foo_spam;
*Val1 = *default_argsc::Val1;
*Val2 = *default_argsc::Val2;
1;