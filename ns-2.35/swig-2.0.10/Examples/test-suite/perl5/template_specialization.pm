# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_specialization;
use base qw(Exporter);
use base qw(DynaLoader);
package template_specializationc;
bootstrap template_specialization;
package template_specialization;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_specialization;

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

package template_specialization;


############# Class : template_specialization::UnaryFunction_double ##############

package template_specialization::UnaryFunction_double;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_specialization );
%OWNER = ();
%ITERATORS = ();
*negate = *template_specializationc::UnaryFunction_double_negate;
sub new {
    my $pkg = shift;
    my $self = template_specializationc::new_UnaryFunction_double(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_specializationc::delete_UnaryFunction_double($self);
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


############# Class : template_specialization::UnaryFunction_bool ##############

package template_specialization::UnaryFunction_bool;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_specialization );
%OWNER = ();
%ITERATORS = ();
*not1 = *template_specializationc::UnaryFunction_bool_not1;
*foo = *template_specializationc::UnaryFunction_bool_foo;
sub new {
    my $pkg = shift;
    my $self = template_specializationc::new_UnaryFunction_bool(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_specializationc::delete_UnaryFunction_bool($self);
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

package template_specialization;

1;
