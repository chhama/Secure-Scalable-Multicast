# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package operator_overload_break;
use base qw(Exporter);
use base qw(DynaLoader);
package operator_overload_breakc;
bootstrap operator_overload_break;
package operator_overload_break;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package operator_overload_break;

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

package operator_overload_break;


############# Class : operator_overload_break::Op ##############

package operator_overload_break::Op;
use overload
    "-" => sub {  if( not $_[2] ) { $_[0]->__sub__($_[1]) }
        elsif( $_[0]->can('__rsub__') ) { $_[0]->__rsub__($_[1]) }
        else { die("reverse subtraction not supported") }
        },
    "==" => sub { $_[0]->__eq__($_[1])},
    "++" => sub { $_[0]->__plusplus__()},
    "+" => sub { $_[0]->__add__($_[1])},
    "=" => sub { my $class = ref($_[0]); $class->new($_[0]) },
    "fallback" => 1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( operator_overload_break );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = operator_overload_breakc::new_Op(@_);
    bless $self, $pkg if defined($self);
}

*__eq__ = *operator_overload_breakc::Op___eq__;
*__add__ = *operator_overload_breakc::Op___add__;
*__sub__ = *operator_overload_breakc::Op___sub__;
*__rsub__ = *operator_overload_breakc::Op___rsub__;
*__plusplus__ = *operator_overload_breakc::Op___plusplus__;
*PrintK = *operator_overload_breakc::Op_PrintK;
*swig_k_get = *operator_overload_breakc::Op_k_get;
*swig_k_set = *operator_overload_breakc::Op_k_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        operator_overload_breakc::delete_Op($self);
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

package operator_overload_break;

1;