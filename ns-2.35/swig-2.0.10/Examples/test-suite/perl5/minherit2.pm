# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package minherit2;
use base qw(Exporter);
use base qw(DynaLoader);
package minherit2c;
bootstrap minherit2;
package minherit2;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package minherit2;

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

package minherit2;


############# Class : minherit2::IRemoteSyncIO ##############

package minherit2::IRemoteSyncIO;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit2 );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minherit2c::delete_IRemoteSyncIO($self);
        delete $OWNER{$self};
    }
}

*syncmethod = *minherit2c::IRemoteSyncIO_syncmethod;
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


############# Class : minherit2::IRemoteAsyncIO ##############

package minherit2::IRemoteAsyncIO;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit2 );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minherit2c::delete_IRemoteAsyncIO($self);
        delete $OWNER{$self};
    }
}

*asyncmethod = *minherit2c::IRemoteAsyncIO_asyncmethod;
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


############# Class : minherit2::RemoteMpe ##############

package minherit2::RemoteMpe;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( minherit2::IRemoteSyncIO minherit2::IRemoteAsyncIO minherit2 );
%OWNER = ();
%ITERATORS = ();
*syncmethod = *minherit2c::RemoteMpe_syncmethod;
*asyncmethod = *minherit2c::RemoteMpe_asyncmethod;
sub new {
    my $pkg = shift;
    my $self = minherit2c::new_RemoteMpe(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        minherit2c::delete_RemoteMpe($self);
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

package minherit2;

1;