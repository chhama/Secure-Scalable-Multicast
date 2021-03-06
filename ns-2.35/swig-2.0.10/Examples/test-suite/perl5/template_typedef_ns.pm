# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_typedef_ns;
use base qw(Exporter);
use base qw(DynaLoader);
package template_typedef_nsc;
bootstrap template_typedef_ns;
package template_typedef_ns;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_typedef_ns;

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

package template_typedef_ns;


############# Class : template_typedef_ns::AlphaInt ##############

package template_typedef_ns::AlphaInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_typedef_ns );
%OWNER = ();
%ITERATORS = ();
*swig_x_get = *template_typedef_nsc::AlphaInt_x_get;
*swig_x_set = *template_typedef_nsc::AlphaInt_x_set;
sub new {
    my $pkg = shift;
    my $self = template_typedef_nsc::new_AlphaInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_typedef_nsc::delete_AlphaInt($self);
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

package template_typedef_ns;

1;
