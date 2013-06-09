# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package namespace_virtual_method;
use base qw(Exporter);
use base qw(DynaLoader);
package namespace_virtual_methodc;
bootstrap namespace_virtual_method;
package namespace_virtual_method;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package namespace_virtual_method;

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

package namespace_virtual_method;


############# Class : namespace_virtual_method::Foo ##############

package namespace_virtual_method::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( namespace_virtual_method );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        namespace_virtual_methodc::delete_Foo($self);
        delete $OWNER{$self};
    }
}

*bar = *namespace_virtual_methodc::Foo_bar;
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


############# Class : namespace_virtual_method::Spam ##############

package namespace_virtual_method::Spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( namespace_virtual_method::Foo namespace_virtual_method );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = namespace_virtual_methodc::new_Spam(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        namespace_virtual_methodc::delete_Spam($self);
        delete $OWNER{$self};
    }
}

*bar = *namespace_virtual_methodc::Spam_bar;
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

package namespace_virtual_method;

1;