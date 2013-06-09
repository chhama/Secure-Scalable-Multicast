# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package typemap_directorout;
use base qw(Exporter);
use base qw(DynaLoader);
package typemap_directoroutc;
bootstrap typemap_directorout;
package typemap_directorout;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package typemap_directorout;

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

package typemap_directorout;


############# Class : typemap_directorout::Class1 ##############

package typemap_directorout::Class1;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( typemap_directorout );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = typemap_directoroutc::new_Class1(@_);
    bless $self, $pkg if defined($self);
}

*foo1 = *typemap_directoroutc::Class1_foo1;
*foo2 = *typemap_directoroutc::Class1_foo2;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        typemap_directoroutc::delete_Class1($self);
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

package typemap_directorout;

1;
