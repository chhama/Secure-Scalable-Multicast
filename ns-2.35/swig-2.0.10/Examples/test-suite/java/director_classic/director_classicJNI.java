/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_classic;

public class director_classicJNI {
  public final static native String Being_id(long jarg1, Being jarg1_);
  public final static native String Being_idSwigExplicitBeing(long jarg1, Being jarg1_);
  public final static native void delete_Being(long jarg1);
  public final static native long new_Being();
  public final static native void Being_director_connect(Being obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Being_change_ownership(Being obj, long cptr, boolean take_or_release);
  public final static native String Person_id(long jarg1, Person jarg1_);
  public final static native String Person_idSwigExplicitPerson(long jarg1, Person jarg1_);
  public final static native long new_Person();
  public final static native void delete_Person(long jarg1);
  public final static native void Person_director_connect(Person obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Person_change_ownership(Person obj, long cptr, boolean take_or_release);
  public final static native String Child_id(long jarg1, Child jarg1_);
  public final static native String Child_idSwigExplicitChild(long jarg1, Child jarg1_);
  public final static native long new_Child();
  public final static native void delete_Child(long jarg1);
  public final static native void Child_director_connect(Child obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Child_change_ownership(Child obj, long cptr, boolean take_or_release);
  public final static native String GrandChild_id(long jarg1, GrandChild jarg1_);
  public final static native String GrandChild_idSwigExplicitGrandChild(long jarg1, GrandChild jarg1_);
  public final static native long new_GrandChild();
  public final static native void delete_GrandChild(long jarg1);
  public final static native void GrandChild_director_connect(GrandChild obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void GrandChild_change_ownership(GrandChild obj, long cptr, boolean take_or_release);
  public final static native long new_OrphanPerson();
  public final static native void delete_OrphanPerson(long jarg1);
  public final static native void OrphanPerson_director_connect(OrphanPerson obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void OrphanPerson_change_ownership(OrphanPerson obj, long cptr, boolean take_or_release);
  public final static native long new_OrphanChild();
  public final static native void delete_OrphanChild(long jarg1);
  public final static native void OrphanChild_director_connect(OrphanChild obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void OrphanChild_change_ownership(OrphanChild obj, long cptr, boolean take_or_release);
  public final static native long new_Caller();
  public final static native void delete_Caller(long jarg1);
  public final static native void Caller_delCallback(long jarg1, Caller jarg1_);
  public final static native void Caller_setCallback(long jarg1, Caller jarg1_, long jarg2, Person jarg2_);
  public final static native void Caller_resetCallback(long jarg1, Caller jarg1_);
  public final static native String Caller_call(long jarg1, Caller jarg1_);
  public final static native long Caller_baseClass(long jarg1, Caller jarg1_);
  public final static native long Person_SWIGUpcast(long jarg1);
  public final static native long Child_SWIGUpcast(long jarg1);
  public final static native long GrandChild_SWIGUpcast(long jarg1);
  public final static native long OrphanPerson_SWIGUpcast(long jarg1);
  public final static native long OrphanChild_SWIGUpcast(long jarg1);

  public static String SwigDirector_Being_id(Being self) {
    return self.id();
  }
  public static String SwigDirector_Person_id(Person self) {
    return self.id();
  }
  public static String SwigDirector_Child_id(Child self) {
    return self.id();
  }
  public static String SwigDirector_GrandChild_id(GrandChild self) {
    return self.id();
  }
  public static String SwigDirector_OrphanPerson_id(OrphanPerson self) {
    return self.id();
  }
  public static String SwigDirector_OrphanChild_id(OrphanChild self) {
    return self.id();
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}