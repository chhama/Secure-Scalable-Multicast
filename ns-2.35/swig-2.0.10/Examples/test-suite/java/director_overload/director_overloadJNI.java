/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_overload;

public class director_overloadJNI {
  public final static native void delete_OverloadedClass(long jarg1);
  public final static native void OverloadedClass_method1(long jarg1, OverloadedClass jarg1_);
  public final static native void OverloadedClass_method1SwigExplicitOverloadedClass(long jarg1, OverloadedClass jarg1_);
  public final static native void OverloadedClass_method2__SWIG_0(long jarg1, OverloadedClass jarg1_);
  public final static native void OverloadedClass_method2SwigExplicitOverloadedClass__SWIG_0(long jarg1, OverloadedClass jarg1_);
  public final static native void OverloadedClass_method3(long jarg1, OverloadedClass jarg1_);
  public final static native void OverloadedClass_method3SwigExplicitOverloadedClass(long jarg1, OverloadedClass jarg1_);
  public final static native void OverloadedClass_method2__SWIG_1(long jarg1, OverloadedClass jarg1_, boolean jarg2);
  public final static native void OverloadedClass_method2SwigExplicitOverloadedClass__SWIG_1(long jarg1, OverloadedClass jarg1_, boolean jarg2);
  public final static native long new_OverloadedClass();
  public final static native void OverloadedClass_director_connect(OverloadedClass obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void OverloadedClass_change_ownership(OverloadedClass obj, long cptr, boolean take_or_release);
  public final static native void delete_OverloadedPointers(long jarg1);
  public final static native void OverloadedPointers_method__SWIG_0(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_0(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_method__SWIG_1(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_1(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_method__SWIG_2(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_2(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_method__SWIG_3(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_3(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_method__SWIG_4(long jarg1, OverloadedPointers jarg1_, long jarg2, OverloadedClass jarg2_);
  public final static native void OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_4(long jarg1, OverloadedPointers jarg1_, long jarg2, OverloadedClass jarg2_);
  public final static native void OverloadedPointers_method__SWIG_5(long jarg1, OverloadedPointers jarg1_, long jarg2, OverloadedPointers jarg2_);
  public final static native void OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_5(long jarg1, OverloadedPointers jarg1_, long jarg2, OverloadedPointers jarg2_);
  public final static native void OverloadedPointers_notover(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native void OverloadedPointers_notoverSwigExplicitOverloadedPointers(long jarg1, OverloadedPointers jarg1_, long jarg2);
  public final static native long new_OverloadedPointers();
  public final static native void OverloadedPointers_director_connect(OverloadedPointers obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void OverloadedPointers_change_ownership(OverloadedPointers obj, long cptr, boolean take_or_release);

  public static void SwigDirector_OverloadedClass_method1(OverloadedClass self) {
    self.method1();
  }
  public static void SwigDirector_OverloadedClass_method2__SWIG_0(OverloadedClass self) {
    self.method2();
  }
  public static void SwigDirector_OverloadedClass_method3(OverloadedClass self) {
    self.method3();
  }
  public static void SwigDirector_OverloadedClass_method2__SWIG_1(OverloadedClass self, boolean b) {
    self.method2(b);
  }
  public static void SwigDirector_OverloadedPointers_method__SWIG_0(OverloadedPointers self, long p) {
    self.method((p == 0) ? null : new SWIGTYPE_p_int(p, false));
  }
  public static void SwigDirector_OverloadedPointers_method__SWIG_1(OverloadedPointers self, long p) {
    self.method((p == 0) ? null : new SWIGTYPE_p_double(p, false));
  }
  public static void SwigDirector_OverloadedPointers_method__SWIG_2(OverloadedPointers self, long r) {
    self.method(new SWIGTYPE_p_bool(r, false));
  }
  public static void SwigDirector_OverloadedPointers_method__SWIG_3(OverloadedPointers self, long r) {
    self.method(new SWIGTYPE_p_short(r, false));
  }
  public static void SwigDirector_OverloadedPointers_method__SWIG_4(OverloadedPointers self, long p) {
    self.method((p == 0) ? null : new OverloadedClass(p, false));
  }
  public static void SwigDirector_OverloadedPointers_method__SWIG_5(OverloadedPointers self, long p) {
    self.method((p == 0) ? null : new OverloadedPointers(p, false));
  }
  public static void SwigDirector_OverloadedPointers_notover(OverloadedPointers self, long p) {
    self.notover((p == 0) ? null : new SWIGTYPE_p_int(p, false));
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}