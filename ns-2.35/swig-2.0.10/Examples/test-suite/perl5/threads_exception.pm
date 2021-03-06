# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package threads_exception;
use base qw(Exporter);
use base qw(DynaLoader);
package threads_exceptionc;
bootstrap threads_exception;
package threads_exception;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package threads_exception;

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

package threads_exception;


############# Class : threads_exception::Exc ##############

package threads_exception::Exc;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( threads_exception );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = threads_exceptionc::new_Exc(@_);
    bless $self, $pkg if defined($self);
}

*swig_code_get = *threads_exceptionc::Exc_code_get;
*swig_code_set = *threads_exceptionc::Exc_code_set;
*swig_msg_get = *threads_exceptionc::Exc_msg_get;
*swig_msg_set = *threads_exceptionc::Exc_msg_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        threads_exceptionc::delete_Exc($self);
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


############# Class : threads_exception::Test ##############

package threads_exception::Test;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( threads_exception );
%OWNER = ();
%ITERATORS = ();
*simple = *threads_exceptionc::Test_simple;
*message = *threads_exceptionc::Test_message;
*hosed = *threads_exceptionc::Test_hosed;
*unknown = *threads_exceptionc::Test_unknown;
*multi = *threads_exceptionc::Test_multi;
sub new {
    my $pkg = shift;
    my $self = threads_exceptionc::new_Test(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        threads_exceptionc::delete_Test($self);
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

package threads_exception;

1;
