# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package abstract_inherit_ok;
use base qw(Exporter);
use base qw(DynaLoader);
package abstract_inherit_okc;
bootstrap abstract_inherit_ok;
package abstract_inherit_ok;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package abstract_inherit_ok;

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

package abstract_inherit_ok;


############# Class : abstract_inherit_ok::Foo ##############

package abstract_inherit_ok::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( abstract_inherit_ok );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        abstract_inherit_okc::delete_Foo($self);
        delete $OWNER{$self};
    }
}

*blah = *abstract_inherit_okc::Foo_blah;
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


############# Class : abstract_inherit_ok::Spam ##############

package abstract_inherit_ok::Spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( abstract_inherit_ok::Foo abstract_inherit_ok );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = abstract_inherit_okc::new_Spam(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        abstract_inherit_okc::delete_Spam($self);
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

package abstract_inherit_ok;

1;
