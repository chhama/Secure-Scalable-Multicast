/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package exception_order;

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
        exception_orderJNI.delete_A(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void setSfoovar(int value) {
    exception_orderJNI.A_sfoovar_set(value);
  }

  public static int getSfoovar() {
    return exception_orderJNI.A_sfoovar_get();
  }

  public void setFoovar(int value) {
    exception_orderJNI.A_foovar_set(swigCPtr, this, value);
  }

  public int getFoovar() {
    return exception_orderJNI.A_foovar_get(swigCPtr, this);
  }

  public void setEfoovar(int value) {
    exception_orderJNI.A_efoovar_set(swigCPtr, this, value);
  }

  public int getEfoovar() {
    return exception_orderJNI.A_efoovar_get(swigCPtr, this);
  }

  public int foo() {
    return exception_orderJNI.A_foo(swigCPtr, this);
  }

  public int bar() {
    return exception_orderJNI.A_bar(swigCPtr, this);
  }

  public int foobar() {
    return exception_orderJNI.A_foobar(swigCPtr, this);
  }

  public int barfoo(int i) {
    return exception_orderJNI.A_barfoo(swigCPtr, this, i);
  }

  public A() {
    this(exception_orderJNI.new_A(), true);
  }

  public final static int CSFOOVAR = exception_orderJNI.A_CSFOOVAR_get();
}