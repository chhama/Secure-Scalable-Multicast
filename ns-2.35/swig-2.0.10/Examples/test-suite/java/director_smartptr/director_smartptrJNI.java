/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_smartptr;

public class director_smartptrJNI {
  public final static native long new_FooBar__SWIG_0();
  public final static native long new_FooBar__SWIG_1(long jarg1, FooBar jarg1_);
  public final static native void delete_FooBar(long jarg1);
  public final static native String FooBar_FooBarDo(long jarg1, FooBar jarg1_);
  public final static native void delete_Foo(long jarg1);
  public final static native String Foo_ping(long jarg1, Foo jarg1_);
  public final static native String Foo_pingSwigExplicitFoo(long jarg1, Foo jarg1_);
  public final static native String Foo_pong(long jarg1, Foo jarg1_);
  public final static native String Foo_pongSwigExplicitFoo(long jarg1, Foo jarg1_);
  public final static native String Foo_fooBar(long jarg1, Foo jarg1_, long jarg2, FooBar jarg2_);
  public final static native String Foo_fooBarSwigExplicitFoo(long jarg1, Foo jarg1_, long jarg2, FooBar jarg2_);
  public final static native long Foo_makeFoo(long jarg1, Foo jarg1_);
  public final static native long Foo_makeFooSwigExplicitFoo(long jarg1, Foo jarg1_);
  public final static native long Foo_makeFooBar(long jarg1, Foo jarg1_);
  public final static native long Foo_makeFooBarSwigExplicitFoo(long jarg1, Foo jarg1_);
  public final static native long Foo_get_self(long jarg1, Foo jarg1_);
  public final static native long new_Foo();
  public final static native void Foo_director_connect(Foo obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Foo_change_ownership(Foo obj, long cptr, boolean take_or_release);

  public static String SwigDirector_Foo_ping(Foo self) {
    return self.ping();
  }
  public static String SwigDirector_Foo_pong(Foo self) {
    return self.pong();
  }
  public static String SwigDirector_Foo_fooBar(Foo self, long fooBarPtr) {
    return self.fooBar((fooBarPtr == 0) ? null : new FooBar(fooBarPtr, false));
  }
  public static long SwigDirector_Foo_makeFoo(Foo self) {
    return Foo.getCPtr(self.makeFoo());
  }
  public static long SwigDirector_Foo_makeFooBar(Foo self) {
    return FooBar.getCPtr(self.makeFooBar());
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}
