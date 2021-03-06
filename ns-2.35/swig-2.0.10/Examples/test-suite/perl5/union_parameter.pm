# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package union_parameter;
use base qw(Exporter);
use base qw(DynaLoader);
package union_parameterc;
bootstrap union_parameter;
package union_parameter;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package union_parameter;

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

package union_parameter;

*SDL_PollEvent = *union_parameterc::SDL_PollEvent;

############# Class : union_parameter::SDL_ActiveEvent ##############

package union_parameter::SDL_ActiveEvent;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( union_parameter );
%OWNER = ();
%ITERATORS = ();
*swig_type_get = *union_parameterc::SDL_ActiveEvent_type_get;
*swig_type_set = *union_parameterc::SDL_ActiveEvent_type_set;
*swig_gain_get = *union_parameterc::SDL_ActiveEvent_gain_get;
*swig_gain_set = *union_parameterc::SDL_ActiveEvent_gain_set;
*swig_state_get = *union_parameterc::SDL_ActiveEvent_state_get;
*swig_state_set = *union_parameterc::SDL_ActiveEvent_state_set;
sub new {
    my $pkg = shift;
    my $self = union_parameterc::new_SDL_ActiveEvent(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        union_parameterc::delete_SDL_ActiveEvent($self);
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


############# Class : union_parameter::SDL_KeyboardEvent ##############

package union_parameter::SDL_KeyboardEvent;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( union_parameter );
%OWNER = ();
%ITERATORS = ();
*swig_type_get = *union_parameterc::SDL_KeyboardEvent_type_get;
*swig_type_set = *union_parameterc::SDL_KeyboardEvent_type_set;
*swig_which_get = *union_parameterc::SDL_KeyboardEvent_which_get;
*swig_which_set = *union_parameterc::SDL_KeyboardEvent_which_set;
*swig_state_get = *union_parameterc::SDL_KeyboardEvent_state_get;
*swig_state_set = *union_parameterc::SDL_KeyboardEvent_state_set;
sub new {
    my $pkg = shift;
    my $self = union_parameterc::new_SDL_KeyboardEvent(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        union_parameterc::delete_SDL_KeyboardEvent($self);
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


############# Class : union_parameter::SDL_Event ##############

package union_parameter::SDL_Event;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( union_parameter );
%OWNER = ();
%ITERATORS = ();
*swig_type_get = *union_parameterc::SDL_Event_type_get;
*swig_type_set = *union_parameterc::SDL_Event_type_set;
*swig_active_get = *union_parameterc::SDL_Event_active_get;
*swig_active_set = *union_parameterc::SDL_Event_active_set;
*swig_key_get = *union_parameterc::SDL_Event_key_get;
*swig_key_set = *union_parameterc::SDL_Event_key_set;
sub new {
    my $pkg = shift;
    my $self = union_parameterc::new_SDL_Event(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        union_parameterc::delete_SDL_Event($self);
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

package union_parameter;

1;
