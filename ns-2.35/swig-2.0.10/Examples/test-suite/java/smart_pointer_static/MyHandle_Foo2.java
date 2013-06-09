/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_static;

public class MyHandle_Foo2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MyHandle_Foo2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MyHandle_Foo2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_staticJNI.delete_MyHandle_Foo2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo2 __deref__() {
    long cPtr = smart_pointer_staticJNI.MyHandle_Foo2___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo2(cPtr, false);
  }

  public MyHandle_Foo2() {
    this(smart_pointer_staticJNI.new_MyHandle_Foo2(), true);
  }

  public int sum(int i, int j) {
    return smart_pointer_staticJNI.MyHandle_Foo2_sum__SWIG_0(swigCPtr, this, i, j);
  }

  public int sum(int i, int j, int k) {
    return smart_pointer_staticJNI.MyHandle_Foo2_sum__SWIG_1(swigCPtr, this, i, j, k);
  }

}