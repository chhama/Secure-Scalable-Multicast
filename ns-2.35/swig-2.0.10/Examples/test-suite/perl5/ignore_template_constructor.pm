# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package ignore_template_constructor;
use base qw(Exporter);
use base qw(DynaLoader);
package ignore_template_constructorc;
bootstrap ignore_template_constructor;
package ignore_template_constructor;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package ignore_template_constructor;

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

package ignore_template_constructor;

*inandout = *ignore_template_constructorc::inandout;

############# Class : ignore_template_constructor::Flow ##############

package ignore_template_constructor::Flow;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( ignore_template_constructor );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = ignore_template_constructorc::new_Flow(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        ignore_template_constructorc::delete_Flow($self);
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


############# Class : ignore_template_constructor::VectFlow ##############

package ignore_template_constructor::VectFlow;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( ignore_template_constructor );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = ignore_template_constructorc::new_VectFlow(@_);
    bless $self, $pkg if defined($self);
}

*size = *ignore_template_constructorc::VectFlow_size;
*empty = *ignore_template_constructorc::VectFlow_empty;
*clear = *ignore_template_constructorc::VectFlow_clear;
*push = *ignore_template_constructorc::VectFlow_push;
*pop = *ignore_template_constructorc::VectFlow_pop;
*get = *ignore_template_constructorc::VectFlow_get;
*set = *ignore_template_constructorc::VectFlow_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        ignore_template_constructorc::delete_VectFlow($self);
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

package ignore_template_constructor;

1;
