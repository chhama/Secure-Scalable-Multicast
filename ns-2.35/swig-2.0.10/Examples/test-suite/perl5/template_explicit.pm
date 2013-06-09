# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_explicit;
use base qw(Exporter);
use base qw(DynaLoader);
package template_explicitc;
bootstrap template_explicit;
package template_explicit;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_explicit;

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

package template_explicit;

*maxint = *template_explicitc::maxint;
*maxdouble = *template_explicitc::maxdouble;
*maxintp = *template_explicitc::maxintp;

############# Class : template_explicit::vecint ##############

package template_explicit::vecint;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_explicit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_explicitc::new_vecint(@_);
    bless $self, $pkg if defined($self);
}

*get = *template_explicitc::vecint_get;
*set = *template_explicitc::vecint_set;
*testconst = *template_explicitc::vecint_testconst;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_explicitc::delete_vecint($self);
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


############# Class : template_explicit::vecdouble ##############

package template_explicit::vecdouble;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_explicit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_explicitc::new_vecdouble(@_);
    bless $self, $pkg if defined($self);
}

*get = *template_explicitc::vecdouble_get;
*set = *template_explicitc::vecdouble_set;
*testconst = *template_explicitc::vecdouble_testconst;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_explicitc::delete_vecdouble($self);
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


############# Class : template_explicit::vecintp ##############

package template_explicit::vecintp;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_explicit );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_explicitc::new_vecintp(@_);
    bless $self, $pkg if defined($self);
}

*get = *template_explicitc::vecintp_get;
*set = *template_explicitc::vecintp_set;
*testconst = *template_explicitc::vecintp_testconst;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_explicitc::delete_vecintp($self);
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

package template_explicit;

1;