/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package allprotected;

public class allprotectedJNI {
  public final static native long new_Klass(String jarg1);
  public final static native String Klass_getName(long jarg1, Klass jarg1_);
  public final static native void delete_Klass(long jarg1);
  public final static native long new_PublicBase(String jarg1);
  public final static native void delete_PublicBase(long jarg1);
  public final static native String PublicBase_virtualMethod(long jarg1, PublicBase jarg1_);
  public final static native String PublicBase_virtualMethodSwigExplicitPublicBase(long jarg1, PublicBase jarg1_);
  public final static native long PublicBase_instanceMethod(long jarg1, PublicBase jarg1_, long jarg2, Klass jarg2_);
  public final static native long PublicBase_instanceOverloaded__SWIG_0(long jarg1, PublicBase jarg1_, long jarg2, Klass jarg2_);
  public final static native long PublicBase_instanceOverloaded__SWIG_1(long jarg1, PublicBase jarg1_, long jarg2, Klass jarg2_, String jarg3);
  public final static native long PublicBase_staticMethod(long jarg1, Klass jarg1_);
  public final static native long PublicBase_staticOverloaded__SWIG_0(long jarg1, Klass jarg1_);
  public final static native long PublicBase_staticOverloaded__SWIG_1(long jarg1, Klass jarg1_, String jarg2);
  public final static native void PublicBase_instanceMemberVariable_set(long jarg1, PublicBase jarg1_, int jarg2);
  public final static native int PublicBase_instanceMemberVariable_get(long jarg1, PublicBase jarg1_);
  public final static native void PublicBase_staticMemberVariable_set(int jarg1);
  public final static native int PublicBase_staticMemberVariable_get();
  public final static native int PublicBase_staticConstMemberVariable_get();
  public final static native void PublicBase_anEnum_set(long jarg1, PublicBase jarg1_, int jarg2);
  public final static native int PublicBase_anEnum_get(long jarg1, PublicBase jarg1_);
  public final static native void PublicBase_stringMember_set(long jarg1, PublicBase jarg1_, String jarg2);
  public final static native String PublicBase_stringMember_get(long jarg1, PublicBase jarg1_);
  public final static native void PublicBase_director_connect(PublicBase obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void PublicBase_change_ownership(PublicBase obj, long cptr, boolean take_or_release);
  public final static native String ProtectedBase_getName(long jarg1, ProtectedBase jarg1_);
  public final static native long new_ProtectedBase(String jarg1);
  public final static native String ProtectedBase_virtualMethod(long jarg1, ProtectedBase jarg1_);
  public final static native String ProtectedBase_virtualMethodSwigExplicitProtectedBase(long jarg1, ProtectedBase jarg1_);
  public final static native long ProtectedBase_instanceMethod(long jarg1, ProtectedBase jarg1_, long jarg2, Klass jarg2_);
  public final static native long ProtectedBase_instanceOverloaded__SWIG_0(long jarg1, ProtectedBase jarg1_, long jarg2, Klass jarg2_);
  public final static native long ProtectedBase_instanceOverloaded__SWIG_1(long jarg1, ProtectedBase jarg1_, long jarg2, Klass jarg2_, String jarg3);
  public final static native long ProtectedBase_staticMethod(long jarg1, Klass jarg1_);
  public final static native long ProtectedBase_staticOverloaded__SWIG_0(long jarg1, Klass jarg1_);
  public final static native long ProtectedBase_staticOverloaded__SWIG_1(long jarg1, Klass jarg1_, String jarg2);
  public final static native void ProtectedBase_instanceMemberVariable_set(long jarg1, ProtectedBase jarg1_, int jarg2);
  public final static native int ProtectedBase_instanceMemberVariable_get(long jarg1, ProtectedBase jarg1_);
  public final static native void ProtectedBase_staticMemberVariable_set(int jarg1);
  public final static native int ProtectedBase_staticMemberVariable_get();
  public final static native int ProtectedBase_staticConstMemberVariable_get();
  public final static native void ProtectedBase_anEnum_set(long jarg1, ProtectedBase jarg1_, int jarg2);
  public final static native int ProtectedBase_anEnum_get(long jarg1, ProtectedBase jarg1_);
  public final static native void ProtectedBase_stringMember_set(long jarg1, ProtectedBase jarg1_, String jarg2);
  public final static native String ProtectedBase_stringMember_get(long jarg1, ProtectedBase jarg1_);
  public final static native void ProtectedBase_director_connect(ProtectedBase obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void ProtectedBase_change_ownership(ProtectedBase obj, long cptr, boolean take_or_release);

  public static String SwigDirector_PublicBase_virtualMethod(PublicBase self) {
    return self.virtualMethod();
  }
  public static String SwigDirector_ProtectedBase_virtualMethod(ProtectedBase self) {
    return self.virtualMethod();
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}
