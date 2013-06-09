# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package typedef_inherit;
use base qw(Exporter);
use base qw(DynaLoader);
package typedef_inheritc;
bootstrap typedef_inherit;
package typedef_inherit;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package typedef_inherit;

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

package typedef_inherit;

*do_blah = *typedef_inheritc::do_blah;
*do_blah2 = *typedef_inheritc::do_blah2;

############# Class : typedef_inherit::Foo ##############

package typedef_inherit::Foo;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typedef_inherit );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typedef_inheritc::delete_Foo($self);
        delete $OWNER{$self};
    }
}

*blah = *typedef_inheritc::Foo_blah;
sub new {
    my $pkg = shift;
    my $self = typedef_inheritc::new_Foo(@_);
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


############# Class : typedef_inherit::Bar ##############

package typedef_inherit::Bar;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typedef_inherit::Foo typedef_inherit );
%OWNER = ();
%ITERATORS = ();
*blah = *typedef_inheritc::Bar_blah;
sub new {
    my $pkg = shift;
    my $self = typedef_inheritc::new_Bar(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typedef_inheritc::delete_Bar($self);
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


############# Class : typedef_inherit::Spam ##############

package typedef_inherit::Spam;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typedef_inherit );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typedef_inheritc::delete_Spam($self);
        delete $OWNER{$self};
    }
}

*blah = *typedef_inheritc::Spam_blah;
sub new {
    my $pkg = shift;
    my $self = typedef_inheritc::new_Spam(@_);
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


############# Class : typedef_inherit::Grok ##############

package typedef_inherit::Grok;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typedef_inherit::Spam typedef_inherit );
%OWNER = ();
%ITERATORS = ();
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typedef_inheritc::delete_Grok($self);
        delete $OWNER{$self};
    }
}

*blah = *typedef_inheritc::Grok_blah;
sub new {
    my $pkg = shift;
    my $self = typedef_inheritc::new_Grok(@_);
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


# ------- VARIABLE STUBS --------

package typedef_inherit;

1;