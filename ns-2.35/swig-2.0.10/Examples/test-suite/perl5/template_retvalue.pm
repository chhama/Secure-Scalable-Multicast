# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_retvalue;
use base qw(Exporter);
use base qw(DynaLoader);
package template_retvaluec;
bootstrap template_retvalue;
package template_retvalue;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_retvalue;

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

package template_retvalue;


############# Class : template_retvalue::C ##############

package template_retvalue::C;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_retvalue );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_retvaluec::new_C(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_retvaluec::delete_C($self);
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


############# Class : template_retvalue::A_Hi ##############

package template_retvalue::A_Hi;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_retvalue );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = template_retvaluec::new_A_Hi(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_retvaluec::delete_A_Hi($self);
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


############# Class : template_retvalue::B_Hola ##############

package template_retvalue::B_Hola;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_retvalue );
%OWNER = ();
%ITERATORS = ();
*get_c = *template_retvaluec::B_Hola_get_c;
*get_a = *template_retvaluec::B_Hola_get_a;
sub new {
    my $pkg = shift;
    my $self = template_retvaluec::new_B_Hola(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_retvaluec::delete_B_Hola($self);
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

package template_retvalue;

*Hi = *template_retvaluec::Hi;
*Hola = *template_retvaluec::Hola;
1;
