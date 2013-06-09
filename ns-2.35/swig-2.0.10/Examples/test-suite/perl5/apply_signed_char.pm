# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package apply_signed_char;
use base qw(Exporter);
use base qw(DynaLoader);
package apply_signed_charc;
bootstrap apply_signed_char;
package apply_signed_char;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package apply_signed_char;

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

package apply_signed_char;

*CharValFunction = *apply_signed_charc::CharValFunction;
*CCharValFunction = *apply_signed_charc::CCharValFunction;
*CCharRefFunction = *apply_signed_charc::CCharRefFunction;

############# Class : apply_signed_char::DirectorTest ##############

package apply_signed_char::DirectorTest;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( apply_signed_char );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = apply_signed_charc::new_DirectorTest(@_);
    bless $self, $pkg if defined($self);
}

*CharValFunction = *apply_signed_charc::DirectorTest_CharValFunction;
*CCharValFunction = *apply_signed_charc::DirectorTest_CCharValFunction;
*CCharRefFunction = *apply_signed_charc::DirectorTest_CCharRefFunction;
*swig_memberchar_get = *apply_signed_charc::DirectorTest_memberchar_get;
*swig_memberchar_set = *apply_signed_charc::DirectorTest_memberchar_set;
*swig_memberconstchar_get = *apply_signed_charc::DirectorTest_memberconstchar_get;
*swig_memberconstchar_set = *apply_signed_charc::DirectorTest_memberconstchar_set;
sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        apply_signed_charc::delete_DirectorTest($self);
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

package apply_signed_char;

*globalchar = *apply_signed_charc::globalchar;
*globalconstchar = *apply_signed_charc::globalconstchar;
1;
