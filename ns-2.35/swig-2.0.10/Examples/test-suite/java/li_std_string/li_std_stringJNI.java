/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_string;

public class li_std_stringJNI {
  public final static native String test_value(String jarg1);
  public final static native String test_const_reference(String jarg1);
  public final static native void test_pointer(long jarg1);
  public final static native long test_pointer_out();
  public final static native void test_const_pointer(long jarg1);
  public final static native long test_const_pointer_out();
  public final static native void test_reference(long jarg1);
  public final static native long test_reference_out();
  public final static native String test_reference_input(long jarg1);
  public final static native void test_reference_inout(long jarg1);
  public final static native void test_throw();
  public final static native void test_const_reference_throw();
  public final static native void test_pointer_throw();
  public final static native void test_const_pointer_throw();
  public final static native void GlobalString_set(String jarg1);
  public final static native String GlobalString_get();
  public final static native void GlobalString2_set(String jarg1);
  public final static native String GlobalString2_get();
  public final static native String ConstGlobalString_get();
  public final static native void Structure_MemberString_set(long jarg1, Structure jarg1_, String jarg2);
  public final static native String Structure_MemberString_get(long jarg1, Structure jarg1_);
  public final static native void Structure_MemberString2_set(long jarg1, Structure jarg1_, String jarg2);
  public final static native String Structure_MemberString2_get(long jarg1, Structure jarg1_);
  public final static native void Structure_StaticMemberString_set(String jarg1);
  public final static native String Structure_StaticMemberString_get();
  public final static native void Structure_StaticMemberString2_set(String jarg1);
  public final static native String Structure_StaticMemberString2_get();
  public final static native String Structure_ConstMemberString_get(long jarg1, Structure jarg1_);
  public final static native String Structure_ConstStaticMemberString_get();
  public final static native long new_Structure();
  public final static native void delete_Structure(long jarg1);
  public final static native java.math.BigInteger Foo_test__SWIG_0(long jarg1, Foo jarg1_, java.math.BigInteger jarg2);
  public final static native String Foo_test__SWIG_1(long jarg1, Foo jarg1_, String jarg2);
  public final static native java.math.BigInteger Foo_testl(long jarg1, Foo jarg1_, java.math.BigInteger jarg2);
  public final static native long new_Foo();
  public final static native void delete_Foo(long jarg1);
  public final static native String stdstring_empty();
  public final static native String c_empty();
  public final static native String c_null();
  public final static native String get_null(String jarg1);
}
