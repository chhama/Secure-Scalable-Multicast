/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_using;

public class director_usingJNI {
  public final static native void delete_Foo_int(long jarg1);
  public final static native String Foo_int_advance(long jarg1, Foo_int jarg1_);
  public final static native String Foo_int_do_advance(long jarg1, Foo_int jarg1_);
  public final static native String Foo_int_do_step(long jarg1, Foo_int jarg1_);
  public final static native long new_Foo_int();
  public final static native void Foo_int_director_connect(Foo_int obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Foo_int_change_ownership(Foo_int obj, long cptr, boolean take_or_release);
  public final static native String Bar_step(long jarg1, Bar jarg1_);
  public final static native String Bar_do_step(long jarg1, Bar jarg1_);
  public final static native String Bar_do_advance(long jarg1, Bar jarg1_);
  public final static native String Bar_do_advanceSwigExplicitBar(long jarg1, Bar jarg1_);
  public final static native long new_Bar();
  public final static native void delete_Bar(long jarg1);
  public final static native void Bar_director_connect(Bar obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Bar_change_ownership(Bar obj, long cptr, boolean take_or_release);
  public final static native int FooBar_int_get_value(long jarg1, FooBar_int jarg1_);
  public final static native String FooBar_int_do_advance(long jarg1, FooBar_int jarg1_);
  public final static native String FooBar_int_do_advanceSwigExplicitFooBar_int(long jarg1, FooBar_int jarg1_);
  public final static native long new_FooBar_int();
  public final static native void delete_FooBar_int(long jarg1);
  public final static native void FooBar_int_director_connect(FooBar_int obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void FooBar_int_change_ownership(FooBar_int obj, long cptr, boolean take_or_release);
  public final static native void delete_SomeBase(long jarg1);
  public final static native void SomeBase_method1(long jarg1, SomeBase jarg1_);
  public final static native void SomeBase_method1SwigExplicitSomeBase(long jarg1, SomeBase jarg1_);
  public final static native void SomeBase_method2(long jarg1, SomeBase jarg1_);
  public final static native void SomeBase_method2SwigExplicitSomeBase(long jarg1, SomeBase jarg1_);
  public final static native long new_SomeBase();
  public final static native void SomeBase_director_connect(SomeBase obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void SomeBase_change_ownership(SomeBase obj, long cptr, boolean take_or_release);
  public final static native long new_PrivateDerived();
  public final static native void delete_PrivateDerived(long jarg1);
  public final static native void PrivateDerived_director_connect(PrivateDerived obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void PrivateDerived_change_ownership(PrivateDerived obj, long cptr, boolean take_or_release);
  public final static native long Bar_SWIGUpcast(long jarg1);
  public final static native long FooBar_int_SWIGUpcast(long jarg1);
  public final static native long PrivateDerived_SWIGUpcast(long jarg1);

  public static String SwigDirector_Foo_int_do_advance(Foo_int self) {
    return self.do_advance();
  }
  public static String SwigDirector_Foo_int_do_step(Foo_int self) {
    return self.do_step();
  }
  public static String SwigDirector_Bar_do_advance(Bar self) {
    return self.do_advance();
  }
  public static String SwigDirector_Bar_do_step(Bar self) {
    return self.do_step();
  }
  public static String SwigDirector_FooBar_int_do_advance(FooBar_int self) {
    return self.do_advance();
  }
  public static String SwigDirector_FooBar_int_do_step(FooBar_int self) {
    return self.do_step();
  }
  public static int SwigDirector_FooBar_int_get_value(FooBar_int self) {
    return self.get_value();
  }
  public static void SwigDirector_SomeBase_method1(SomeBase self) {
    self.method1();
  }
  public static void SwigDirector_SomeBase_method2(SomeBase self) {
    self.method2();
  }
  public static void SwigDirector_PrivateDerived_method1(PrivateDerived self) {
    self.method1();
  }
  public static void SwigDirector_PrivateDerived_method2(PrivateDerived self) {
    self.method2();
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}