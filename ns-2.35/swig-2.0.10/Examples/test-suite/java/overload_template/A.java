/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package overload_template;

public class A {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        overload_templateJNI.delete_A(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void foo(double y) {
    overload_templateJNI.A_foo__SWIG_0(y);
  }

  public static void foo(int y) {
    overload_templateJNI.A_foo__SWIG_1(y);
  }

  public static void foo(char y) {
    overload_templateJNI.A_foo__SWIG_2(y);
  }

  public A() {
    this(overload_templateJNI.new_A(), true);
  }

}