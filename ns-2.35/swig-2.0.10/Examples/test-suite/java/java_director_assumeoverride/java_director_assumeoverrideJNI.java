/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_director_assumeoverride;

public class java_director_assumeoverrideJNI {
  public final static native void delete_OverrideMe(long jarg1);
  public final static native void OverrideMe_func(long jarg1, OverrideMe jarg1_);
  public final static native void OverrideMe_funcSwigExplicitOverrideMe(long jarg1, OverrideMe jarg1_);
  public final static native long new_OverrideMe();
  public final static native void OverrideMe_director_connect(OverrideMe obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void OverrideMe_change_ownership(OverrideMe obj, long cptr, boolean take_or_release);
  public final static native boolean isFuncOverridden(long jarg1, OverrideMe jarg1_);

  public static void SwigDirector_OverrideMe_func(OverrideMe self) {
    self.func();
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}