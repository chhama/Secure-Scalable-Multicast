# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package li_cdata_carrays;
use base qw(Exporter);
use base qw(DynaLoader);
package li_cdata_carraysc;
bootstrap li_cdata_carrays;
package li_cdata_carrays;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package li_cdata_carrays;

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

package li_cdata_carrays;

*cdata = *li_cdata_carraysc::cdata;
*memmove = *li_cdata_carraysc::memmove;
*cdata_int = *li_cdata_carraysc::cdata_int;

############# Class : li_cdata_carrays::intArray ##############

package li_cdata_carrays::intArray;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_cdata_carrays );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = li_cdata_carraysc::new_intArray(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_cdata_carraysc::delete_intArray($self);
        delete $OWNER{$self};
    }
}

*getitem = *li_cdata_carraysc::intArray_getitem;
*setitem = *li_cdata_carraysc::intArray_setitem;
*cast = *li_cdata_carraysc::intArray_cast;
*frompointer = *li_cdata_carraysc::intArray_frompointer;
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

package li_cdata_carrays;

1;
