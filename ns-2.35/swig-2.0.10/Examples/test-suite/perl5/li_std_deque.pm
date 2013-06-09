# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package li_std_deque;
use base qw(Exporter);
use base qw(DynaLoader);
package li_std_dequec;
bootstrap li_std_deque;
package li_std_deque;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package li_std_deque;

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

package li_std_deque;

*average = *li_std_dequec::average;
*half = *li_std_dequec::half;
*halve_in_place = *li_std_dequec::halve_in_place;

############# Class : li_std_deque::IntDeque ##############

package li_std_deque::IntDeque;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_deque );
%OWNER = ();
%ITERATORS = ();
*empty = *li_std_dequec::IntDeque_empty;
sub new {
    my $pkg = shift;
    my $self = li_std_dequec::new_IntDeque(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_dequec::delete_IntDeque($self);
        delete $OWNER{$self};
    }
}

*assign = *li_std_dequec::IntDeque_assign;
*swap = *li_std_dequec::IntDeque_swap;
*size = *li_std_dequec::IntDeque_size;
*max_size = *li_std_dequec::IntDeque_max_size;
*resize = *li_std_dequec::IntDeque_resize;
*front = *li_std_dequec::IntDeque_front;
*back = *li_std_dequec::IntDeque_back;
*push_front = *li_std_dequec::IntDeque_push_front;
*push_back = *li_std_dequec::IntDeque_push_back;
*pop_front = *li_std_dequec::IntDeque_pop_front;
*pop_back = *li_std_dequec::IntDeque_pop_back;
*clear = *li_std_dequec::IntDeque_clear;
*getitem = *li_std_dequec::IntDeque_getitem;
*setitem = *li_std_dequec::IntDeque_setitem;
*delitem = *li_std_dequec::IntDeque_delitem;
*getslice = *li_std_dequec::IntDeque_getslice;
*setslice = *li_std_dequec::IntDeque_setslice;
*delslice = *li_std_dequec::IntDeque_delslice;
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


############# Class : li_std_deque::DoubleDeque ##############

package li_std_deque::DoubleDeque;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_deque );
%OWNER = ();
%ITERATORS = ();
*empty = *li_std_dequec::DoubleDeque_empty;
sub new {
    my $pkg = shift;
    my $self = li_std_dequec::new_DoubleDeque(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_dequec::delete_DoubleDeque($self);
        delete $OWNER{$self};
    }
}

*assign = *li_std_dequec::DoubleDeque_assign;
*swap = *li_std_dequec::DoubleDeque_swap;
*size = *li_std_dequec::DoubleDeque_size;
*max_size = *li_std_dequec::DoubleDeque_max_size;
*resize = *li_std_dequec::DoubleDeque_resize;
*front = *li_std_dequec::DoubleDeque_front;
*back = *li_std_dequec::DoubleDeque_back;
*push_front = *li_std_dequec::DoubleDeque_push_front;
*push_back = *li_std_dequec::DoubleDeque_push_back;
*pop_front = *li_std_dequec::DoubleDeque_pop_front;
*pop_back = *li_std_dequec::DoubleDeque_pop_back;
*clear = *li_std_dequec::DoubleDeque_clear;
*getitem = *li_std_dequec::DoubleDeque_getitem;
*setitem = *li_std_dequec::DoubleDeque_setitem;
*delitem = *li_std_dequec::DoubleDeque_delitem;
*getslice = *li_std_dequec::DoubleDeque_getslice;
*setslice = *li_std_dequec::DoubleDeque_setslice;
*delslice = *li_std_dequec::DoubleDeque_delslice;
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


############# Class : li_std_deque::RealDeque ##############

package li_std_deque::RealDeque;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( li_std_deque );
%OWNER = ();
%ITERATORS = ();
*empty = *li_std_dequec::RealDeque_empty;
sub new {
    my $pkg = shift;
    my $self = li_std_dequec::new_RealDeque(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        li_std_dequec::delete_RealDeque($self);
        delete $OWNER{$self};
    }
}

*assign = *li_std_dequec::RealDeque_assign;
*swap = *li_std_dequec::RealDeque_swap;
*size = *li_std_dequec::RealDeque_size;
*max_size = *li_std_dequec::RealDeque_max_size;
*resize = *li_std_dequec::RealDeque_resize;
*front = *li_std_dequec::RealDeque_front;
*back = *li_std_dequec::RealDeque_back;
*push_front = *li_std_dequec::RealDeque_push_front;
*push_back = *li_std_dequec::RealDeque_push_back;
*pop_front = *li_std_dequec::RealDeque_pop_front;
*pop_back = *li_std_dequec::RealDeque_pop_back;
*clear = *li_std_dequec::RealDeque_clear;
*getitem = *li_std_dequec::RealDeque_getitem;
*setitem = *li_std_dequec::RealDeque_setitem;
*delitem = *li_std_dequec::RealDeque_delitem;
*getslice = *li_std_dequec::RealDeque_getslice;
*setslice = *li_std_dequec::RealDeque_setslice;
*delslice = *li_std_dequec::RealDeque_delslice;
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

package li_std_deque;

1;