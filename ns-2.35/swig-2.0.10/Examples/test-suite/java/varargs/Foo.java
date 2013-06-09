/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package varargs;

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
        varargsJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setStr(String value) {
    varargsJNI.Foo_str_set(swigCPtr, this, value);
  }

  public String getStr() {
    return varargsJNI.Foo_str_get(swigCPtr, this);
  }

  public Foo() {
    this(varargsJNI.new_Foo__SWIG_0(), true);
  }

  public Foo(String fmt, int mode) {
    this(varargsJNI.new_Foo__SWIG_1(fmt, mode), true);
  }

  public Foo(String fmt) {
    this(varargsJNI.new_Foo__SWIG_2(fmt), true);
  }

  public String test(String fmt) {
    return varargsJNI.Foo_test(swigCPtr, this, fmt);
  }

  public static String statictest(String fmt, int mode) {
    return varargsJNI.Foo_statictest__SWIG_0(fmt, mode);
  }

  public static String statictest(String fmt) {
    return varargsJNI.Foo_statictest__SWIG_1(fmt);
  }

}
