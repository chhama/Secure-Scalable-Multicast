# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package spam;
use base qw(Exporter);
use base qw(DynaLoader);
require bar;
require baseclass;
package spamc;
bootstrap spam;
package spam;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package spam;

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

package spam;


############# Class : spam::Spam ##############

package spam::Spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( bar::Bar spam );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = spamc::new_Spam(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        spamc::delete_Spam($self);
        delete $OWNER{$self};
    }
}

*A = *spamc::Spam_A;
*B = *spamc::Spam_B;
*toBase = *spamc::Spam_toBase;
*toBar = *spamc::Spam_toBar;
*fromBase = *spamc::Spam_fromBase;
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

package spam;

1;
