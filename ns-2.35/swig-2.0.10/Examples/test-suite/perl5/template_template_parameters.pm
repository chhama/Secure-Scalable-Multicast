# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_template_parameters;
use base qw(Exporter);
use base qw(DynaLoader);
package template_template_parametersc;
bootstrap template_template_parameters;
package template_template_parameters;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_template_parameters;

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

package template_template_parameters;

*TestInstantiations = *template_template_parametersc::TestInstantiations;

############# Class : template_template_parameters::ListImplFastBool ##############

package template_template_parameters::ListImplFastBool;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_template_parameters );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_template_parametersc::new_ListImplFastBool(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_template_parametersc::delete_ListImplFastBool($self);
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


############# Class : template_template_parameters::ListFastBool ##############

package template_template_parameters::ListFastBool;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_template_parameters::ListImplFastBool template_template_parameters );
%OWNER = ();
%ITERATORS = ();
*swig_item_get = *template_template_parametersc::ListFastBool_item_get;
*swig_item_set = *template_template_parametersc::ListFastBool_item_set;
*xx = *template_template_parametersc::ListFastBool_xx;
sub new {
    my $pkg = shift;
    my $self = template_template_parametersc::new_ListFastBool(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_template_parametersc::delete_ListFastBool($self);
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


############# Class : template_template_parameters::ListImplFastDouble ##############

package template_template_parameters::ListImplFastDouble;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_template_parameters );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_template_parametersc::new_ListImplFastDouble(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_template_parametersc::delete_ListImplFastDouble($self);
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


############# Class : template_template_parameters::ListDefaultDouble ##############

package template_template_parameters::ListDefaultDouble;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_template_parameters::ListImplFastDouble template_template_parameters );
%OWNER = ();
%ITERATORS = ();
*swig_item_get = *template_template_parametersc::ListDefaultDouble_item_get;
*swig_item_set = *template_template_parametersc::ListDefaultDouble_item_set;
*xx = *template_template_parametersc::ListDefaultDouble_xx;
sub new {
    my $pkg = shift;
    my $self = template_template_parametersc::new_ListDefaultDouble(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_template_parametersc::delete_ListDefaultDouble($self);
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

package template_template_parameters;

1;
