/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constover;

public class constoverJNI {
  public final static native String test(String jarg1);
  public final static native String test_pconst(String jarg1);
  public final static native long new_Foo();
  public final static native String Foo_test(long jarg1, Foo jarg1_, String jarg2);
  public final static native String Foo_test_pconst(long jarg1, Foo jarg1_, String jarg2);
  public final static native String Foo_test_constm(long jarg1, Foo jarg1_, String jarg2);
  public final static native String Foo_test_pconstm(long jarg1, Foo jarg1_, String jarg2);
  public final static native void delete_Foo(long jarg1);
}
