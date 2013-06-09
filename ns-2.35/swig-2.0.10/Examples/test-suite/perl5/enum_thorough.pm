# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package enum_thorough;
use base qw(Exporter);
use base qw(DynaLoader);
package enum_thoroughc;
bootstrap enum_thorough;
package enum_thorough;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package enum_thorough;

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

package enum_thorough;

*colourTest1 = *enum_thoroughc::colourTest1;
*colourTest2 = *enum_thoroughc::colourTest2;
*colourTest3 = *enum_thoroughc::colourTest3;
*colourTest4 = *enum_thoroughc::colourTest4;
*speedTest0 = *enum_thoroughc::speedTest0;
*speedTest1 = *enum_thoroughc::speedTest1;
*speedTest2 = *enum_thoroughc::speedTest2;
*speedTest3 = *enum_thoroughc::speedTest3;
*speedTest4 = *enum_thoroughc::speedTest4;
*speedTest5 = *enum_thoroughc::speedTest5;
*namedanonTest1 = *enum_thoroughc::namedanonTest1;
*twonamesTest1 = *enum_thoroughc::twonamesTest1;
*twonamesTest2 = *enum_thoroughc::twonamesTest2;
*twonamesTest3 = *enum_thoroughc::twonamesTest3;
*namedanonspaceTest1 = *enum_thoroughc::namedanonspaceTest1;
*namedanonspaceTest2 = *enum_thoroughc::namedanonspaceTest2;
*namedanonspaceTest3 = *enum_thoroughc::namedanonspaceTest3;
*namedanonspaceTest4 = *enum_thoroughc::namedanonspaceTest4;
*scientistsTest1 = *enum_thoroughc::scientistsTest1;
*scientistsTest2 = *enum_thoroughc::scientistsTest2;
*scientistsTest3 = *enum_thoroughc::scientistsTest3;
*scientistsTest4 = *enum_thoroughc::scientistsTest4;
*scientistsTest5 = *enum_thoroughc::scientistsTest5;
*scientistsTest6 = *enum_thoroughc::scientistsTest6;
*scientistsTest7 = *enum_thoroughc::scientistsTest7;
*scientistsTest8 = *enum_thoroughc::scientistsTest8;
*scientistsNameTest1 = *enum_thoroughc::scientistsNameTest1;
*scientistsNameTest2 = *enum_thoroughc::scientistsNameTest2;
*scientistsNameTest3 = *enum_thoroughc::scientistsNameTest3;
*scientistsNameTest4 = *enum_thoroughc::scientistsNameTest4;
*scientistsNameTest5 = *enum_thoroughc::scientistsNameTest5;
*scientistsNameTest6 = *enum_thoroughc::scientistsNameTest6;
*scientistsNameTest7 = *enum_thoroughc::scientistsNameTest7;
*scientistsNameSpaceTest1 = *enum_thoroughc::scientistsNameSpaceTest1;
*scientistsNameSpaceTest2 = *enum_thoroughc::scientistsNameSpaceTest2;
*scientistsNameSpaceTest3 = *enum_thoroughc::scientistsNameSpaceTest3;
*scientistsNameSpaceTest4 = *enum_thoroughc::scientistsNameSpaceTest4;
*scientistsNameSpaceTest5 = *enum_thoroughc::scientistsNameSpaceTest5;
*scientistsNameSpaceTest6 = *enum_thoroughc::scientistsNameSpaceTest6;
*scientistsNameSpaceTest7 = *enum_thoroughc::scientistsNameSpaceTest7;
*scientistsNameSpaceTest8 = *enum_thoroughc::scientistsNameSpaceTest8;
*scientistsNameSpaceTest9 = *enum_thoroughc::scientistsNameSpaceTest9;
*scientistsNameSpaceTestA = *enum_thoroughc::scientistsNameSpaceTestA;
*scientistsNameSpaceTestB = *enum_thoroughc::scientistsNameSpaceTestB;
*scientistsNameSpaceTestC = *enum_thoroughc::scientistsNameSpaceTestC;
*scientistsNameSpaceTestD = *enum_thoroughc::scientistsNameSpaceTestD;
*scientistsNameSpaceTestE = *enum_thoroughc::scientistsNameSpaceTestE;
*scientistsNameSpaceTestF = *enum_thoroughc::scientistsNameSpaceTestF;
*scientistsNameSpaceTestG = *enum_thoroughc::scientistsNameSpaceTestG;
*scientistsNameSpaceTestH = *enum_thoroughc::scientistsNameSpaceTestH;
*scientistsNameSpaceTestI = *enum_thoroughc::scientistsNameSpaceTestI;
*scientistsNameSpaceTestJ = *enum_thoroughc::scientistsNameSpaceTestJ;
*scientistsNameSpaceTestK = *enum_thoroughc::scientistsNameSpaceTestK;
*scientistsNameSpaceTestL = *enum_thoroughc::scientistsNameSpaceTestL;
*renameTest1 = *enum_thoroughc::renameTest1;
*renameTest2 = *enum_thoroughc::renameTest2;
*renameTest3 = *enum_thoroughc::renameTest3;
*renameTest4 = *enum_thoroughc::renameTest4;
*renameTest5 = *enum_thoroughc::renameTest5;
*renameTest6 = *enum_thoroughc::renameTest6;
*renameTest7 = *enum_thoroughc::renameTest7;
*treesTest1 = *enum_thoroughc::treesTest1;
*treesTest2 = *enum_thoroughc::treesTest2;
*treesTest3 = *enum_thoroughc::treesTest3;
*treesTest4 = *enum_thoroughc::treesTest4;
*treesTest5 = *enum_thoroughc::treesTest5;
*treesTest6 = *enum_thoroughc::treesTest6;
*treesTest7 = *enum_thoroughc::treesTest7;
*treesTest8 = *enum_thoroughc::treesTest8;
*treesTest9 = *enum_thoroughc::treesTest9;
*treesTestA = *enum_thoroughc::treesTestA;
*treesTestB = *enum_thoroughc::treesTestB;
*treesTestC = *enum_thoroughc::treesTestC;
*treesTestD = *enum_thoroughc::treesTestD;
*treesTestE = *enum_thoroughc::treesTestE;
*treesTestF = *enum_thoroughc::treesTestF;
*treesTestG = *enum_thoroughc::treesTestG;
*treesTestH = *enum_thoroughc::treesTestH;
*treesTestI = *enum_thoroughc::treesTestI;
*treesTestJ = *enum_thoroughc::treesTestJ;
*treesTestK = *enum_thoroughc::treesTestK;
*treesTestL = *enum_thoroughc::treesTestL;
*treesTestM = *enum_thoroughc::treesTestM;
*treesTestO = *enum_thoroughc::treesTestO;
*treesTestP = *enum_thoroughc::treesTestP;
*treesTestQ = *enum_thoroughc::treesTestQ;
*treesTestR = *enum_thoroughc::treesTestR;
*hairTest1 = *enum_thoroughc::hairTest1;
*hairTest2 = *enum_thoroughc::hairTest2;
*hairTest3 = *enum_thoroughc::hairTest3;
*hairTest4 = *enum_thoroughc::hairTest4;
*hairTest5 = *enum_thoroughc::hairTest5;
*hairTest6 = *enum_thoroughc::hairTest6;
*hairTest7 = *enum_thoroughc::hairTest7;
*hairTest8 = *enum_thoroughc::hairTest8;
*hairTest9 = *enum_thoroughc::hairTest9;
*hairTestA = *enum_thoroughc::hairTestA;
*hairTestB = *enum_thoroughc::hairTestB;
*hairTestC = *enum_thoroughc::hairTestC;
*hairTestA1 = *enum_thoroughc::hairTestA1;
*hairTestA2 = *enum_thoroughc::hairTestA2;
*hairTestA3 = *enum_thoroughc::hairTestA3;
*hairTestA4 = *enum_thoroughc::hairTestA4;
*hairTestA5 = *enum_thoroughc::hairTestA5;
*hairTestA6 = *enum_thoroughc::hairTestA6;
*hairTestA7 = *enum_thoroughc::hairTestA7;
*hairTestA8 = *enum_thoroughc::hairTestA8;
*hairTestA9 = *enum_thoroughc::hairTestA9;
*hairTestAA = *enum_thoroughc::hairTestAA;
*hairTestAB = *enum_thoroughc::hairTestAB;
*hairTestAC = *enum_thoroughc::hairTestAC;
*hairTestB1 = *enum_thoroughc::hairTestB1;
*hairTestB2 = *enum_thoroughc::hairTestB2;
*hairTestB3 = *enum_thoroughc::hairTestB3;
*hairTestB4 = *enum_thoroughc::hairTestB4;
*hairTestB5 = *enum_thoroughc::hairTestB5;
*hairTestB6 = *enum_thoroughc::hairTestB6;
*hairTestB7 = *enum_thoroughc::hairTestB7;
*hairTestB8 = *enum_thoroughc::hairTestB8;
*hairTestB9 = *enum_thoroughc::hairTestB9;
*hairTestBA = *enum_thoroughc::hairTestBA;
*hairTestBB = *enum_thoroughc::hairTestBB;
*hairTestBC = *enum_thoroughc::hairTestBC;
*hairTestC1 = *enum_thoroughc::hairTestC1;
*hairTestC2 = *enum_thoroughc::hairTestC2;
*hairTestC3 = *enum_thoroughc::hairTestC3;
*hairTestC4 = *enum_thoroughc::hairTestC4;
*hairTestC5 = *enum_thoroughc::hairTestC5;
*hairTestC6 = *enum_thoroughc::hairTestC6;
*hairTestC7 = *enum_thoroughc::hairTestC7;
*hairTestC8 = *enum_thoroughc::hairTestC8;
*hairTestC9 = *enum_thoroughc::hairTestC9;
*hairTestCA = *enum_thoroughc::hairTestCA;
*hairTestCB = *enum_thoroughc::hairTestCB;
*hairTestCC = *enum_thoroughc::hairTestCC;
*ignoreATest = *enum_thoroughc::ignoreATest;
*ignoreBTest = *enum_thoroughc::ignoreBTest;
*ignoreCTest = *enum_thoroughc::ignoreCTest;
*ignoreDTest = *enum_thoroughc::ignoreDTest;
*ignoreETest = *enum_thoroughc::ignoreETest;
*repeatTest = *enum_thoroughc::repeatTest;
*differentTypesTest = *enum_thoroughc::differentTypesTest;
*globalDifferentTypesTest = *enum_thoroughc::globalDifferentTypesTest;

############# Class : enum_thorough::AnonStruct ##############

package enum_thorough::AnonStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*AnonStructEnum1 = *enum_thoroughc::AnonStruct_AnonStructEnum1;
*AnonStructEnum2 = *enum_thoroughc::AnonStruct_AnonStructEnum2;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_AnonStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_AnonStruct($self);
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


############# Class : enum_thorough::SpeedClass ##############

package enum_thorough::SpeedClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*slow = *enum_thoroughc::SpeedClass_slow;
*medium = *enum_thoroughc::SpeedClass_medium;
*fast = *enum_thoroughc::SpeedClass_fast;
*lightning = *enum_thoroughc::SpeedClass_lightning;
*speedTest0 = *enum_thoroughc::SpeedClass_speedTest0;
*speedTest1 = *enum_thoroughc::SpeedClass_speedTest1;
*speedTest2 = *enum_thoroughc::SpeedClass_speedTest2;
*speedTest3 = *enum_thoroughc::SpeedClass_speedTest3;
*speedTest4 = *enum_thoroughc::SpeedClass_speedTest4;
*speedTest5 = *enum_thoroughc::SpeedClass_speedTest5;
*speedTest6 = *enum_thoroughc::SpeedClass_speedTest6;
*speedTest7 = *enum_thoroughc::SpeedClass_speedTest7;
*speedTest8 = *enum_thoroughc::SpeedClass_speedTest8;
*swig_myColour2_get = *enum_thoroughc::SpeedClass_myColour2_get;
*swig_myColour2_set = *enum_thoroughc::SpeedClass_myColour2_set;
*swig_mySpeedtd1_get = *enum_thoroughc::SpeedClass_mySpeedtd1_get;
*swig_mySpeedtd1_set = *enum_thoroughc::SpeedClass_mySpeedtd1_set;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_SpeedClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_SpeedClass($self);
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


############# Class : enum_thorough::TwoNamesStruct ##############

package enum_thorough::TwoNamesStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*TwoNamesStruct1 = *enum_thoroughc::TwoNamesStruct_TwoNamesStruct1;
*TwoNamesStruct2 = *enum_thoroughc::TwoNamesStruct_TwoNamesStruct2;
*twonamesTest1 = *enum_thoroughc::TwoNamesStruct_twonamesTest1;
*twonamesTest2 = *enum_thoroughc::TwoNamesStruct_twonamesTest2;
*twonamesTest3 = *enum_thoroughc::TwoNamesStruct_twonamesTest3;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_TwoNamesStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_TwoNamesStruct($self);
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


############# Class : enum_thorough::TemplateClassInt ##############

package enum_thorough::TemplateClassInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*einstein = *enum_thoroughc::TemplateClassInt_einstein;
*galileo = *enum_thoroughc::TemplateClassInt_galileo;
*scientistsTest1 = *enum_thoroughc::TemplateClassInt_scientistsTest1;
*scientistsTest2 = *enum_thoroughc::TemplateClassInt_scientistsTest2;
*scientistsTest3 = *enum_thoroughc::TemplateClassInt_scientistsTest3;
*scientistsTest4 = *enum_thoroughc::TemplateClassInt_scientistsTest4;
*scientistsTest5 = *enum_thoroughc::TemplateClassInt_scientistsTest5;
*scientistsTest6 = *enum_thoroughc::TemplateClassInt_scientistsTest6;
*scientistsTest7 = *enum_thoroughc::TemplateClassInt_scientistsTest7;
*scientistsTest8 = *enum_thoroughc::TemplateClassInt_scientistsTest8;
*scientistsTest9 = *enum_thoroughc::TemplateClassInt_scientistsTest9;
*scientistsTestB = *enum_thoroughc::TemplateClassInt_scientistsTestB;
*scientistsTestD = *enum_thoroughc::TemplateClassInt_scientistsTestD;
*scientistsTestE = *enum_thoroughc::TemplateClassInt_scientistsTestE;
*scientistsTestF = *enum_thoroughc::TemplateClassInt_scientistsTestF;
*scientistsTestG = *enum_thoroughc::TemplateClassInt_scientistsTestG;
*scientistsTestH = *enum_thoroughc::TemplateClassInt_scientistsTestH;
*scientistsTestI = *enum_thoroughc::TemplateClassInt_scientistsTestI;
*scientistsTestJ = *enum_thoroughc::TemplateClassInt_scientistsTestJ;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_TemplateClassInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_TemplateClassInt($self);
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


############# Class : enum_thorough::TClassInt ##############

package enum_thorough::TClassInt;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*faraday = *enum_thoroughc::TClassInt_faraday;
*bell = *enum_thoroughc::TClassInt_bell;
*scientistsNameTest1 = *enum_thoroughc::TClassInt_scientistsNameTest1;
*scientistsNameTest2 = *enum_thoroughc::TClassInt_scientistsNameTest2;
*scientistsNameTest3 = *enum_thoroughc::TClassInt_scientistsNameTest3;
*scientistsNameTest4 = *enum_thoroughc::TClassInt_scientistsNameTest4;
*scientistsNameTest5 = *enum_thoroughc::TClassInt_scientistsNameTest5;
*scientistsNameTest6 = *enum_thoroughc::TClassInt_scientistsNameTest6;
*scientistsNameTest7 = *enum_thoroughc::TClassInt_scientistsNameTest7;
*scientistsNameTest8 = *enum_thoroughc::TClassInt_scientistsNameTest8;
*scientistsNameTest9 = *enum_thoroughc::TClassInt_scientistsNameTest9;
*scientistsNameTestB = *enum_thoroughc::TClassInt_scientistsNameTestB;
*scientistsNameTestD = *enum_thoroughc::TClassInt_scientistsNameTestD;
*scientistsNameTestE = *enum_thoroughc::TClassInt_scientistsNameTestE;
*scientistsNameTestF = *enum_thoroughc::TClassInt_scientistsNameTestF;
*scientistsNameTestG = *enum_thoroughc::TClassInt_scientistsNameTestG;
*scientistsNameTestH = *enum_thoroughc::TClassInt_scientistsNameTestH;
*scientistsNameTestI = *enum_thoroughc::TClassInt_scientistsNameTestI;
*scientistsNameSpaceTest1 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest1;
*scientistsNameSpaceTest2 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest2;
*scientistsNameSpaceTest3 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest3;
*scientistsNameSpaceTest4 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest4;
*scientistsNameSpaceTest5 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest5;
*scientistsNameSpaceTest6 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest6;
*scientistsNameSpaceTest7 = *enum_thoroughc::TClassInt_scientistsNameSpaceTest7;
*scientistsOtherTest1 = *enum_thoroughc::TClassInt_scientistsOtherTest1;
*scientistsOtherTest2 = *enum_thoroughc::TClassInt_scientistsOtherTest2;
*scientistsOtherTest3 = *enum_thoroughc::TClassInt_scientistsOtherTest3;
*scientistsOtherTest4 = *enum_thoroughc::TClassInt_scientistsOtherTest4;
*scientistsOtherTest5 = *enum_thoroughc::TClassInt_scientistsOtherTest5;
*scientistsOtherTest6 = *enum_thoroughc::TClassInt_scientistsOtherTest6;
*scientistsOtherTest7 = *enum_thoroughc::TClassInt_scientistsOtherTest7;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_TClassInt(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_TClassInt($self);
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


############# Class : enum_thorough::NewNameStruct ##############

package enum_thorough::NewNameStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*whizz = *enum_thoroughc::NewNameStruct_whizz;
*bang = *enum_thoroughc::NewNameStruct_bang;
*pop = *enum_thoroughc::NewNameStruct_pop;
*renameTest1 = *enum_thoroughc::NewNameStruct_renameTest1;
*renameTest2 = *enum_thoroughc::NewNameStruct_renameTest2;
*simple1 = *enum_thoroughc::NewNameStruct_simple1;
*doublename1 = *enum_thoroughc::NewNameStruct_doublename1;
*singlename1 = *enum_thoroughc::NewNameStruct_singlename1;
*renameTest3 = *enum_thoroughc::NewNameStruct_renameTest3;
*renameTest4 = *enum_thoroughc::NewNameStruct_renameTest4;
*renameTest5 = *enum_thoroughc::NewNameStruct_renameTest5;
*renameTest6 = *enum_thoroughc::NewNameStruct_renameTest6;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_NewNameStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_NewNameStruct($self);
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


############# Class : enum_thorough::TreesClass ##############

package enum_thorough::TreesClass;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*oak = *enum_thoroughc::TreesClass_oak;
*fir = *enum_thoroughc::TreesClass_fir;
*pine = *enum_thoroughc::TreesClass_pine;
*treesTest1 = *enum_thoroughc::TreesClass_treesTest1;
*treesTest2 = *enum_thoroughc::TreesClass_treesTest2;
*treesTest3 = *enum_thoroughc::TreesClass_treesTest3;
*treesTest4 = *enum_thoroughc::TreesClass_treesTest4;
*treesTest5 = *enum_thoroughc::TreesClass_treesTest5;
*treesTest6 = *enum_thoroughc::TreesClass_treesTest6;
*treesTest7 = *enum_thoroughc::TreesClass_treesTest7;
*treesTest8 = *enum_thoroughc::TreesClass_treesTest8;
*treesTest9 = *enum_thoroughc::TreesClass_treesTest9;
*treesTestA = *enum_thoroughc::TreesClass_treesTestA;
*treesTestB = *enum_thoroughc::TreesClass_treesTestB;
*treesTestC = *enum_thoroughc::TreesClass_treesTestC;
*treesTestD = *enum_thoroughc::TreesClass_treesTestD;
*treesTestE = *enum_thoroughc::TreesClass_treesTestE;
*treesTestF = *enum_thoroughc::TreesClass_treesTestF;
*treesTestG = *enum_thoroughc::TreesClass_treesTestG;
*treesTestH = *enum_thoroughc::TreesClass_treesTestH;
*treesTestI = *enum_thoroughc::TreesClass_treesTestI;
*treesTestJ = *enum_thoroughc::TreesClass_treesTestJ;
*treesTestK = *enum_thoroughc::TreesClass_treesTestK;
*treesTestL = *enum_thoroughc::TreesClass_treesTestL;
*treesTestM = *enum_thoroughc::TreesClass_treesTestM;
*treesTestN = *enum_thoroughc::TreesClass_treesTestN;
*treesTestO = *enum_thoroughc::TreesClass_treesTestO;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_TreesClass(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_TreesClass($self);
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


############# Class : enum_thorough::HairStruct ##############

package enum_thorough::HairStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*blonde = *enum_thoroughc::HairStruct_blonde;
*ginger = *enum_thoroughc::HairStruct_ginger;
*hairTest1 = *enum_thoroughc::HairStruct_hairTest1;
*hairTest2 = *enum_thoroughc::HairStruct_hairTest2;
*hairTest3 = *enum_thoroughc::HairStruct_hairTest3;
*hairTest4 = *enum_thoroughc::HairStruct_hairTest4;
*hairTest5 = *enum_thoroughc::HairStruct_hairTest5;
*hairTest6 = *enum_thoroughc::HairStruct_hairTest6;
*hairTest7 = *enum_thoroughc::HairStruct_hairTest7;
*hairTest8 = *enum_thoroughc::HairStruct_hairTest8;
*hairTest9 = *enum_thoroughc::HairStruct_hairTest9;
*hairTestA = *enum_thoroughc::HairStruct_hairTestA;
*hairTestB = *enum_thoroughc::HairStruct_hairTestB;
*colourTest1 = *enum_thoroughc::HairStruct_colourTest1;
*colourTest2 = *enum_thoroughc::HairStruct_colourTest2;
*namedanonTest1 = *enum_thoroughc::HairStruct_namedanonTest1;
*namedanonspaceTest1 = *enum_thoroughc::HairStruct_namedanonspaceTest1;
*treesGlobalTest1 = *enum_thoroughc::HairStruct_treesGlobalTest1;
*treesGlobalTest2 = *enum_thoroughc::HairStruct_treesGlobalTest2;
*treesGlobalTest3 = *enum_thoroughc::HairStruct_treesGlobalTest3;
*treesGlobalTest4 = *enum_thoroughc::HairStruct_treesGlobalTest4;
*treesGlobalTest5 = *enum_thoroughc::HairStruct_treesGlobalTest5;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_HairStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_HairStruct($self);
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


############# Class : enum_thorough::FirStruct ##############

package enum_thorough::FirStruct;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough::HairStruct enum_thorough );
%OWNER = ();
%ITERATORS = ();
*hairTestFir1 = *enum_thoroughc::FirStruct_hairTestFir1;
*hairTestFir2 = *enum_thoroughc::FirStruct_hairTestFir2;
*hairTestFir3 = *enum_thoroughc::FirStruct_hairTestFir3;
*hairTestFir4 = *enum_thoroughc::FirStruct_hairTestFir4;
*hairTestFir5 = *enum_thoroughc::FirStruct_hairTestFir5;
*hairTestFir6 = *enum_thoroughc::FirStruct_hairTestFir6;
*hairTestFir7 = *enum_thoroughc::FirStruct_hairTestFir7;
*hairTestFir8 = *enum_thoroughc::FirStruct_hairTestFir8;
*hairTestFir9 = *enum_thoroughc::FirStruct_hairTestFir9;
*hairTestFirA = *enum_thoroughc::FirStruct_hairTestFirA;
*hairTestFirB = *enum_thoroughc::FirStruct_hairTestFirB;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_FirStruct(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_FirStruct($self);
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


############# Class : enum_thorough::Obscure ##############

package enum_thorough::Obscure;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*one = *enum_thoroughc::Obscure_one;
*two = *enum_thoroughc::Obscure_two;
*twoagain = *enum_thoroughc::Obscure_twoagain;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_Obscure(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_Obscure($self);
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


############# Class : enum_thorough::Instances ##############

package enum_thorough::Instances;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*memberinstance1 = *enum_thoroughc::Instances_memberinstance1;
*memberinstance2 = *enum_thoroughc::Instances_memberinstance2;
*memberinstance3 = *enum_thoroughc::Instances_memberinstance3;
*swig_MemberInstance_get = *enum_thoroughc::Instances_MemberInstance_get;
*swig_MemberInstance_set = *enum_thoroughc::Instances_MemberInstance_set;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_Instances(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_Instances($self);
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


############# Class : enum_thorough::IgnoreTest ##############

package enum_thorough::IgnoreTest;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( enum_thorough );
%OWNER = ();
%ITERATORS = ();
*ignoreA_zero = *enum_thoroughc::IgnoreTest_ignoreA_zero;
*ignoreA_three = *enum_thoroughc::IgnoreTest_ignoreA_three;
*ignoreA_ten = *enum_thoroughc::IgnoreTest_ignoreA_ten;
*ignoreA_eleven = *enum_thoroughc::IgnoreTest_ignoreA_eleven;
*ignoreA_thirteen = *enum_thoroughc::IgnoreTest_ignoreA_thirteen;
*ignoreA_fourteen = *enum_thoroughc::IgnoreTest_ignoreA_fourteen;
*ignoreA_twenty = *enum_thoroughc::IgnoreTest_ignoreA_twenty;
*ignoreA_thirty = *enum_thoroughc::IgnoreTest_ignoreA_thirty;
*ignoreA_thirty_two = *enum_thoroughc::IgnoreTest_ignoreA_thirty_two;
*ignoreA_thirty_three = *enum_thoroughc::IgnoreTest_ignoreA_thirty_three;
*ignoreB_eleven = *enum_thoroughc::IgnoreTest_ignoreB_eleven;
*ignoreB_twelve = *enum_thoroughc::IgnoreTest_ignoreB_twelve;
*ignoreB_thirty_one = *enum_thoroughc::IgnoreTest_ignoreB_thirty_one;
*ignoreB_thirty_two = *enum_thoroughc::IgnoreTest_ignoreB_thirty_two;
*ignoreB_forty_one = *enum_thoroughc::IgnoreTest_ignoreB_forty_one;
*ignoreB_forty_two = *enum_thoroughc::IgnoreTest_ignoreB_forty_two;
*ignoreC_ten = *enum_thoroughc::IgnoreTest_ignoreC_ten;
*ignoreC_twelve = *enum_thoroughc::IgnoreTest_ignoreC_twelve;
*ignoreC_twenty = *enum_thoroughc::IgnoreTest_ignoreC_twenty;
*ignoreC_thirty = *enum_thoroughc::IgnoreTest_ignoreC_thirty;
*ignoreC_thirty_two = *enum_thoroughc::IgnoreTest_ignoreC_thirty_two;
*ignoreC_forty = *enum_thoroughc::IgnoreTest_ignoreC_forty;
*ignoreC_forty_two = *enum_thoroughc::IgnoreTest_ignoreC_forty_two;
*ignoreD_twenty_one = *enum_thoroughc::IgnoreTest_ignoreD_twenty_one;
*ignoreD_twenty_two = *enum_thoroughc::IgnoreTest_ignoreD_twenty_two;
*ignoreE_zero = *enum_thoroughc::IgnoreTest_ignoreE_zero;
*ignoreE_twenty_one = *enum_thoroughc::IgnoreTest_ignoreE_twenty_one;
*ignoreE_twenty_two = *enum_thoroughc::IgnoreTest_ignoreE_twenty_two;
sub new {
    my $pkg = shift;
    my $self = enum_thoroughc::new_IgnoreTest(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        enum_thoroughc::delete_IgnoreTest($self);
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

package enum_thorough;

*AnonEnum1 = *enum_thoroughc::AnonEnum1;
*AnonEnum2 = *enum_thoroughc::AnonEnum2;
*ReallyAnInteger = *enum_thoroughc::ReallyAnInteger;
*AnonSpaceEnum1 = *enum_thoroughc::AnonSpaceEnum1;
*AnonSpaceEnum2 = *enum_thoroughc::AnonSpaceEnum2;
*red = *enum_thoroughc::red;
*blue = *enum_thoroughc::blue;
*green = *enum_thoroughc::green;
*myColour = *enum_thoroughc::myColour;
*NamedAnon1 = *enum_thoroughc::NamedAnon1;
*NamedAnon2 = *enum_thoroughc::NamedAnon2;
*TwoNames1 = *enum_thoroughc::TwoNames1;
*TwoNames2 = *enum_thoroughc::TwoNames2;
*TwoNames3 = *enum_thoroughc::TwoNames3;
*NamedAnonSpace1 = *enum_thoroughc::NamedAnonSpace1;
*NamedAnonSpace2 = *enum_thoroughc::NamedAnonSpace2;
*argh = *enum_thoroughc::argh;
*eek = *enum_thoroughc::eek;
*globalinstance1 = *enum_thoroughc::globalinstance1;
*globalinstance2 = *enum_thoroughc::globalinstance2;
*globalinstance3 = *enum_thoroughc::globalinstance3;
*GlobalInstance = *enum_thoroughc::GlobalInstance;
*one = *enum_thoroughc::one;
*initial = *enum_thoroughc::initial;
*two = *enum_thoroughc::two;
*three = *enum_thoroughc::three;
*llast = *enum_thoroughc::llast;
*end = *enum_thoroughc::end;
*typeint = *enum_thoroughc::typeint;
*typeboolfalse = *enum_thoroughc::typeboolfalse;
*typebooltrue = *enum_thoroughc::typebooltrue;
*typebooltwo = *enum_thoroughc::typebooltwo;
*typechar = *enum_thoroughc::typechar;
*typedefaultint = *enum_thoroughc::typedefaultint;
*global_typeint = *enum_thoroughc::global_typeint;
*global_typeboolfalse = *enum_thoroughc::global_typeboolfalse;
*global_typebooltrue = *enum_thoroughc::global_typebooltrue;
*global_typebooltwo = *enum_thoroughc::global_typebooltwo;
*global_typechar = *enum_thoroughc::global_typechar;
*global_typedefaultint = *enum_thoroughc::global_typedefaultint;
*typeint_noconst = *enum_thoroughc::typeint_noconst;
*typeboolfalse_noconst = *enum_thoroughc::typeboolfalse_noconst;
*typebooltrue_noconst = *enum_thoroughc::typebooltrue_noconst;
*typebooltwo_noconst = *enum_thoroughc::typebooltwo_noconst;
*typechar_noconst = *enum_thoroughc::typechar_noconst;
*typedefaultint_noconst = *enum_thoroughc::typedefaultint_noconst;
*global_typeint_noconst = *enum_thoroughc::global_typeint_noconst;
*global_typeboolfalse_noconst = *enum_thoroughc::global_typeboolfalse_noconst;
*global_typebooltrue_noconst = *enum_thoroughc::global_typebooltrue_noconst;
*global_typebooltwo_noconst = *enum_thoroughc::global_typebooltwo_noconst;
*global_typechar_noconst = *enum_thoroughc::global_typechar_noconst;
*global_typedefaultint_noconst = *enum_thoroughc::global_typedefaultint_noconst;
1;
