# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package template_namespace_forward_declaration;
use base qw(Exporter);
use base qw(DynaLoader);
package template_namespace_forward_declarationc;
bootstrap template_namespace_forward_declaration;
package template_namespace_forward_declaration;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package template_namespace_forward_declaration;

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

package template_namespace_forward_declaration;

*testXXX1 = *template_namespace_forward_declarationc::testXXX1;
*testXXX2 = *template_namespace_forward_declarationc::testXXX2;
*testXXX3 = *template_namespace_forward_declarationc::testXXX3;
*testYYY1 = *template_namespace_forward_declarationc::testYYY1;
*testYYY2 = *template_namespace_forward_declarationc::testYYY2;
*testYYY3 = *template_namespace_forward_declarationc::testYYY3;

############# Class : template_namespace_forward_declaration::XXXInt ##############

package template_namespace_forward_declaration::XXXInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_namespace_forward_declaration );
%OWNER = ();
%ITERATORS = ();
*xxx = *template_namespace_forward_declarationc::XXXInt_xxx;
sub new {
    my $pkg = shift;
    my $self = template_namespace_forward_declarationc::new_XXXInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_namespace_forward_declarationc::delete_XXXInt($self);
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


############# Class : template_namespace_forward_declaration::YYYInt ##############

package template_namespace_forward_declaration::YYYInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( template_namespace_forward_declaration );
%OWNER = ();
%ITERATORS = ();
*yyy = *template_namespace_forward_declarationc::YYYInt_yyy;
sub new {
    my $pkg = shift;
    my $self = template_namespace_forward_declarationc::new_YYYInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        template_namespace_forward_declarationc::delete_YYYInt($self);
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

package template_namespace_forward_declaration;

1;