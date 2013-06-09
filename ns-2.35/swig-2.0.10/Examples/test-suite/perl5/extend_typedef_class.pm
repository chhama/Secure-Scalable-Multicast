# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package extend_typedef_class;
use base qw(Exporter);
use base qw(DynaLoader);
package extend_typedef_classc;
bootstrap extend_typedef_class;
package extend_typedef_class;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package extend_typedef_class;

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

package extend_typedef_class;


############# Class : extend_typedef_class::AClass ##############

package extend_typedef_class::AClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::AClass_membervar_get;
*swig_membervar_set = *extend_typedef_classc::AClass_membervar_set;
*getvar = *extend_typedef_classc::AClass_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_AClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_AClass($self);
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


############# Class : extend_typedef_class::BClass ##############

package extend_typedef_class::BClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::BClass_membervar_get;
*swig_membervar_set = *extend_typedef_classc::BClass_membervar_set;
*getvar = *extend_typedef_classc::BClass_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_BClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_BClass($self);
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


############# Class : extend_typedef_class::CClass ##############

package extend_typedef_class::CClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::CClass_membervar_get;
*swig_membervar_set = *extend_typedef_classc::CClass_membervar_set;
*getvar = *extend_typedef_classc::CClass_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_CClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_CClass($self);
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


############# Class : extend_typedef_class::DClass ##############

package extend_typedef_class::DClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::DClass_membervar_get;
*swig_membervar_set = *extend_typedef_classc::DClass_membervar_set;
*getvar = *extend_typedef_classc::DClass_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_DClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_DClass($self);
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


############# Class : extend_typedef_class::AStruct ##############

package extend_typedef_class::AStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::AStruct_membervar_get;
*swig_membervar_set = *extend_typedef_classc::AStruct_membervar_set;
*getvar = *extend_typedef_classc::AStruct_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_AStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_AStruct($self);
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


############# Class : extend_typedef_class::BStruct ##############

package extend_typedef_class::BStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::BStruct_membervar_get;
*swig_membervar_set = *extend_typedef_classc::BStruct_membervar_set;
*getvar = *extend_typedef_classc::BStruct_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_BStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_BStruct($self);
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


############# Class : extend_typedef_class::CStruct ##############

package extend_typedef_class::CStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::CStruct_membervar_get;
*swig_membervar_set = *extend_typedef_classc::CStruct_membervar_set;
*getvar = *extend_typedef_classc::CStruct_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_CStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_CStruct($self);
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


############# Class : extend_typedef_class::DStruct ##############

package extend_typedef_class::DStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( extend_typedef_class );
%OWNER = ();
%ITERATORS = ();
*swig_membervar_get = *extend_typedef_classc::DStruct_membervar_get;
*swig_membervar_set = *extend_typedef_classc::DStruct_membervar_set;
*getvar = *extend_typedef_classc::DStruct_getvar;
sub new {
    my $pkg = shift;
    my $self = extend_typedef_classc::new_DStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        extend_typedef_classc::delete_DStruct($self);
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

package extend_typedef_class;

1;