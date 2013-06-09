# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package conversion_ns_template;
use base qw(Exporter);
use base qw(DynaLoader);
package conversion_ns_templatec;
bootstrap conversion_ns_template;
package conversion_ns_template;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package conversion_ns_template;

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

package conversion_ns_template;


############# Class : conversion_ns_template::Hi ##############

package conversion_ns_template::Hi;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( conversion_ns_template );
%OWNER = ();
%ITERATORS = ();
sub new_create {
    my $pkg = shift;
    my $self = conversion_ns_templatec::new_create(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        conversion_ns_templatec::delete_Hi($self);
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


############# Class : conversion_ns_template::Foo_One ##############

package conversion_ns_template::Foo_One;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( conversion_ns_template );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = conversion_ns_templatec::new_Foo_One(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        conversion_ns_templatec::delete_Foo_One($self);
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


############# Class : conversion_ns_template::Bar_One ##############

package conversion_ns_template::Bar_One;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( conversion_ns_template );
%OWNER = ();
%ITERATORS = ();
sub new_Bar_create {
    my $pkg = shift;
    my $self = conversion_ns_templatec::new_Bar_create(@_);
    bless $self, $pkg if defined($self);
}

*hello1 = *conversion_ns_templatec::Bar_One_hello1;
*hello2 = *conversion_ns_templatec::Bar_One_hello2;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        conversion_ns_templatec::delete_Bar_One($self);
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

package conversion_ns_template;

*One = *conversion_ns_templatec::One;
*Two = *conversion_ns_templatec::Two;
1;
