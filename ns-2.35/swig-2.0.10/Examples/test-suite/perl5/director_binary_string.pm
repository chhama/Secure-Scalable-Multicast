# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package director_binary_string;
use base qw(Exporter);
use base qw(DynaLoader);
package director_binary_stringc;
bootstrap director_binary_string;
package director_binary_string;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package director_binary_string;

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

package director_binary_string;


############# Class : director_binary_string::Callback ##############

package director_binary_string::Callback;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_binary_string );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_binary_stringc::delete_Callback($self);
        delete $OWNER{$self};
    }
}

*run = *director_binary_stringc::Callback_run;
sub new {
    my $pkg = shift;
    my $self = director_binary_stringc::new_Callback(@_);
    bless $self, $pkg if defined($self);
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


############# Class : director_binary_string::Caller ##############

package director_binary_string::Caller;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( director_binary_string );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = director_binary_stringc::new_Caller(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        director_binary_stringc::delete_Caller($self);
        delete $OWNER{$self};
    }
}

*delCallback = *director_binary_stringc::Caller_delCallback;
*setCallback = *director_binary_stringc::Caller_setCallback;
*call = *director_binary_stringc::Caller_call;
*call_null = *director_binary_stringc::Caller_call_null;
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

package director_binary_string;

*BUFFER_SIZE_AA = *director_binary_stringc::BUFFER_SIZE_AA;
*BUFFER_SIZE_BB = *director_binary_stringc::BUFFER_SIZE_BB;
1;