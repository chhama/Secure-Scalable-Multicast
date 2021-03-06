# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package arrays_scope;
use base qw(Exporter);
use base qw(DynaLoader);
package arrays_scopec;
bootstrap arrays_scope;
package arrays_scope;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package arrays_scope;

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

package arrays_scope;


############# Class : arrays_scope::Bar ##############

package arrays_scope::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( arrays_scope );
%OWNER = ();
%ITERATORS = ();
*CCSIZE = *arrays_scopec::Bar_CCSIZE;
*swig_adata_get = *arrays_scopec::Bar_adata_get;
*swig_adata_set = *arrays_scopec::Bar_adata_set;
*swig_bdata_get = *arrays_scopec::Bar_bdata_get;
*swig_bdata_set = *arrays_scopec::Bar_bdata_set;
*swig_cdata_get = *arrays_scopec::Bar_cdata_get;
*swig_cdata_set = *arrays_scopec::Bar_cdata_set;
*blah = *arrays_scopec::Bar_blah;
sub new {
    my $pkg = shift;
    my $self = arrays_scopec::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        arrays_scopec::delete_Bar($self);
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

package arrays_scope;

*ASIZE = *arrays_scopec::ASIZE;
*BBSIZE = *arrays_scopec::BBSIZE;
1;
