# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_default_inherit;
use base qw(Exporter);
use base qw(DynaLoader);
package template_default_inheritc;
bootstrap template_default_inherit;
package template_default_inherit;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_default_inherit;

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

package template_default_inherit;


############# Class : template_default_inherit::A_int ##############

package template_default_inherit::A_int;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_default_inherit );
%OWNER = ();
%ITERATORS = ();
*nindex = *template_default_inheritc::A_int_nindex;
*nindex = *template_default_inheritc::A_int_nindex;
sub new {
    my $pkg = shift;
    my $self = template_default_inheritc::new_A_int(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_default_inheritc::delete_A_int($self);
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


############# Class : template_default_inherit::B_int ##############

package template_default_inherit::B_int;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_default_inherit::A_int template_default_inherit );
%OWNER = ();
%ITERATORS = ();
*say_hi = *template_default_inheritc::B_int_say_hi;
sub new {
    my $pkg = shift;
    my $self = template_default_inheritc::new_B_int(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_default_inheritc::delete_B_int($self);
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

package template_default_inherit;

1;
