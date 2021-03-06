# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_typedef_cplx2;
use base qw(Exporter);
use base qw(DynaLoader);
package template_typedef_cplx2c;
bootstrap template_typedef_cplx2;
package template_typedef_cplx2;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_typedef_cplx2;

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

package template_typedef_cplx2;

*make_Identity_double = *template_typedef_cplx2c::make_Identity_double;
*make_Identity_complex = *template_typedef_cplx2c::make_Identity_complex;
*make_Multiplies_double_double_complex_complex = *template_typedef_cplx2c::make_Multiplies_double_double_complex_complex;
*make_Multiplies_double_double_double_double = *template_typedef_cplx2c::make_Multiplies_double_double_double_double;
*make_Multiplies_complex_complex_complex_complex = *template_typedef_cplx2c::make_Multiplies_complex_complex_complex_complex;
*make_Multiplies_complex_complex_double_double = *template_typedef_cplx2c::make_Multiplies_complex_complex_double_double;

############# Class : template_typedef_cplx2::UnaryFunctionBase ##############

package template_typedef_cplx2::UnaryFunctionBase;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_base_value = *template_typedef_cplx2c::UnaryFunctionBase_get_base_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_UnaryFunctionBase(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_UnaryFunctionBase($self);
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


############# Class : template_typedef_cplx2::UnaryFunction_double_double ##############

package template_typedef_cplx2::UnaryFunction_double_double;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2::UnaryFunctionBase template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_value = *template_typedef_cplx2c::UnaryFunction_double_double_get_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_UnaryFunction_double_double(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_UnaryFunction_double_double($self);
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


############# Class : template_typedef_cplx2::ArithUnaryFunction_double_double ##############

package template_typedef_cplx2::ArithUnaryFunction_double_double;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2::UnaryFunction_double_double template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_arith_value = *template_typedef_cplx2c::ArithUnaryFunction_double_double_get_arith_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_ArithUnaryFunction_double_double(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_ArithUnaryFunction_double_double($self);
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


############# Class : template_typedef_cplx2::UnaryFunction_complex_complex ##############

package template_typedef_cplx2::UnaryFunction_complex_complex;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2::UnaryFunctionBase template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_value = *template_typedef_cplx2c::UnaryFunction_complex_complex_get_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_UnaryFunction_complex_complex(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_UnaryFunction_complex_complex($self);
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


############# Class : template_typedef_cplx2::ArithUnaryFunction_complex_complex ##############

package template_typedef_cplx2::ArithUnaryFunction_complex_complex;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2::UnaryFunction_complex_complex template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_arith_value = *template_typedef_cplx2c::ArithUnaryFunction_complex_complex_get_arith_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_ArithUnaryFunction_complex_complex(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_ArithUnaryFunction_complex_complex($self);
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


############# Class : template_typedef_cplx2::UnaryFunction_double_complex ##############

package template_typedef_cplx2::UnaryFunction_double_complex;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2::UnaryFunctionBase template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_value = *template_typedef_cplx2c::UnaryFunction_double_complex_get_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_UnaryFunction_double_complex(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_UnaryFunction_double_complex($self);
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


############# Class : template_typedef_cplx2::ArithUnaryFunction_double_complex ##############

package template_typedef_cplx2::ArithUnaryFunction_double_complex;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_cplx2::UnaryFunction_double_complex template_typedef_cplx2 );
%OWNER = ();
%ITERATORS = ();
*get_arith_value = *template_typedef_cplx2c::ArithUnaryFunction_double_complex_get_arith_value;
sub new {
    my $pkg = shift;
    my $self = template_typedef_cplx2c::new_ArithUnaryFunction_double_complex(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_cplx2c::delete_ArithUnaryFunction_double_complex($self);
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

package template_typedef_cplx2;

1;
