/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_basic;

public class cpp_basicJNI {
  public final static native long new_Foo(int jarg1);
  public final static native void Foo_num_set(long jarg1, Foo jarg1_, int jarg2);
  public final static native int Foo_num_get(long jarg1, Foo jarg1_);
  public final static native int Foo_func1(long jarg1, Foo jarg1_, int jarg2);
  public final static native int Foo_func2(long jarg1, Foo jarg1_, int jarg2);
  public final static native void Foo_func_ptr_set(long jarg1, Foo jarg1_, String jarg2);
  public final static native String Foo_func_ptr_get(long jarg1, Foo jarg1_);
  public final static native void delete_Foo(long jarg1);
  public final static native long new_Bar();
  public final static native void Bar_fptr_set(long jarg1, Bar jarg1_, long jarg2, Foo jarg2_);
  public final static native long Bar_fptr_get(long jarg1, Bar jarg1_);
  public final static native void Bar_fref_set(long jarg1, Bar jarg1_, long jarg2, Foo jarg2_);
  public final static native long Bar_fref_get(long jarg1, Bar jarg1_);
  public final static native void Bar_fval_set(long jarg1, Bar jarg1_, long jarg2, Foo jarg2_);
  public final static native long Bar_fval_get(long jarg1, Bar jarg1_);
  public final static native int Bar_cint_get(long jarg1, Bar jarg1_);
  public final static native int Bar_global_cint_get();
  public final static native void Bar_global_fptr_set(long jarg1, Foo jarg1_);
  public final static native long Bar_global_fptr_get();
  public final static native void Bar_global_fref_set(long jarg1, Foo jarg1_);
  public final static native long Bar_global_fref_get();
  public final static native void Bar_global_fval_set(long jarg1, Foo jarg1_);
  public final static native long Bar_global_fval_get();
  public final static native int Bar_test(long jarg1, Bar jarg1_, int jarg2, long jarg3, Foo jarg3_);
  public final static native long Bar_testFoo(long jarg1, Bar jarg1_, int jarg2, long jarg3, Foo jarg3_);
  public final static native void delete_Bar(long jarg1);
  public final static native String get_func1_ptr();
  public final static native String get_func2_ptr();
  public final static native int test_func_ptr(long jarg1, Foo jarg1_, int jarg2);
  public final static native long new_Fl_Window();
  public final static native void delete_Fl_Window(long jarg1);
  public final static native void Fl_Window_show__SWIG_0(long jarg1, Fl_Window jarg1_, long jarg2, long jarg3);
  public final static native void Fl_Window_show__SWIG_1(long jarg1, Fl_Window jarg1_, long jarg2);
  public final static native void Fl_Window_show__SWIG_2(long jarg1, Fl_Window jarg1_);
}
