# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_nested_typemaps;
use base qw(Exporter);
use base qw(DynaLoader);
package template_nested_typemapsc;
bootstrap template_nested_typemaps;
package template_nested_typemaps;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_nested_typemaps;

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

package template_nested_typemaps;

*globalInt1 = *template_nested_typemapsc::globalInt1;
*globalShort1 = *template_nested_typemapsc::globalShort1;
*globalInt2 = *template_nested_typemapsc::globalInt2;
*globalShort2 = *template_nested_typemapsc::globalShort2;
*globalInt3 = *template_nested_typemapsc::globalInt3;
*globalShort3 = *template_nested_typemapsc::globalShort3;

############# Class : template_nested_typemaps::BreezeString ##############

package template_nested_typemaps::BreezeString;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_nested_typemaps );
%OWNER = ();
%ITERATORS = ();
*methodInt1 = *template_nested_typemapsc::BreezeString_methodInt1;
*methodInt2 = *template_nested_typemapsc::BreezeString_methodInt2;
*takeIt = *template_nested_typemapsc::BreezeString_takeIt;
*methodShort1 = *template_nested_typemapsc::BreezeString_methodShort1;
*methodShort2 = *template_nested_typemapsc::BreezeString_methodShort2;
sub new {
    my $pkg = shift;
    my $self = template_nested_typemapsc::new_BreezeString(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_nested_typemapsc::delete_BreezeString($self);
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

package template_nested_typemaps;

1;
