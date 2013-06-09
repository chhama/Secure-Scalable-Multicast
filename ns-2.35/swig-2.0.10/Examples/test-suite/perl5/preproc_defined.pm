# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package preproc_defined;
use base qw(Exporter);
use base qw(DynaLoader);
package preproc_definedc;
bootstrap preproc_defined;
package preproc_defined;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package preproc_defined;

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

package preproc_defined;

*call_checking = *preproc_definedc::call_checking;
*thing = *preproc_definedc::thing;
*stuff = *preproc_definedc::stuff;
*bumpf = *preproc_definedc::bumpf;

############# Class : preproc_defined::Defined ##############

package preproc_defined::Defined;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( preproc_defined );
%OWNER = ();
%ITERATORS = ();
*swig_defined_get = *preproc_definedc::Defined_defined_get;
*swig_defined_set = *preproc_definedc::Defined_defined_set;
sub new {
    my $pkg = shift;
    my $self = preproc_definedc::new_Defined(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        preproc_definedc::delete_Defined($self);
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

package preproc_defined;

1;
