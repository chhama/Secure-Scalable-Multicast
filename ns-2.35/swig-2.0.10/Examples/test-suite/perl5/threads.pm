# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package threads;
use base qw(Exporter);
use base qw(DynaLoader);
package threadsc;
bootstrap threads;
package threads;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package threads;

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

package threads;


############# Class : threads::Kerfuffle ##############

package threads::Kerfuffle;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( threads );
%OWNER = ();
%ITERATORS = ();
*StdString = *threadsc::Kerfuffle_StdString;
*CharString = *threadsc::Kerfuffle_CharString;
sub new {
    my $pkg = shift;
    my $self = threadsc::new_Kerfuffle(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        threadsc::delete_Kerfuffle($self);
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

package threads;

1;
