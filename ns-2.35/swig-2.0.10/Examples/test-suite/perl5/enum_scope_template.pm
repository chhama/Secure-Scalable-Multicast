# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package enum_scope_template;
use base qw(Exporter);
use base qw(DynaLoader);
package enum_scope_templatec;
bootstrap enum_scope_template;
package enum_scope_template;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package enum_scope_template;

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

package enum_scope_template;

*chop = *enum_scope_templatec::chop;

############# Class : enum_scope_template::TreeInt ##############

package enum_scope_template::TreeInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_scope_template );
%OWNER = ();
%ITERATORS = ();
*Oak = *enum_scope_templatec::TreeInt_Oak;
*Fir = *enum_scope_templatec::TreeInt_Fir;
*Cedar = *enum_scope_templatec::TreeInt_Cedar;
*chop = *enum_scope_templatec::TreeInt_chop;
sub new {
    my $pkg = shift;
    my $self = enum_scope_templatec::new_TreeInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_scope_templatec::delete_TreeInt($self);
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

package enum_scope_template;

1;