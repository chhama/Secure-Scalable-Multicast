# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package global_scope_types;
use base qw(Exporter);
use base qw(DynaLoader);
package global_scope_typesc;
bootstrap global_scope_types;
package global_scope_types;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package global_scope_types;

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

package global_scope_types;

*funcptrtest = *global_scope_typesc::funcptrtest;

############# Class : global_scope_types::Dingaling ##############

package global_scope_types::Dingaling;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( global_scope_types );
%OWNER = ();
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


############# Class : global_scope_types::Ting ##############

package global_scope_types::Ting;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( global_scope_types );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = global_scope_typesc::new_Ting(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        global_scope_typesc::delete_Ting($self);
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


############# Class : global_scope_types::Test ##############

package global_scope_types::Test;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( global_scope_types );
%OWNER = ();
%ITERATORS = ();
*something = *global_scope_typesc::Test_something;
*tsomething = *global_scope_typesc::Test_tsomething;
*nothing = *global_scope_typesc::Test_nothing;
sub new {
    my $pkg = shift;
    my $self = global_scope_typesc::new_Test(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        global_scope_typesc::delete_Test($self);
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

package global_scope_types;

1;
