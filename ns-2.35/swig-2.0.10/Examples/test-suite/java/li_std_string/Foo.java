/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_string;

public class Foo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_stringJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public java.math.BigInteger test(java.math.BigInteger l) {
    return li_std_stringJNI.Foo_test__SWIG_0(swigCPtr, this, l);
  }

  public String test(String l) {
    return li_std_stringJNI.Foo_test__SWIG_1(swigCPtr, this, l);
  }

  public java.math.BigInteger testl(java.math.BigInteger l) {
    return li_std_stringJNI.Foo_testl(swigCPtr, this, l);
  }

  public Foo() {
    this(li_std_stringJNI.new_Foo(), true);
  }

}