/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_args;

public class MyClass2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MyClass2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MyClass2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_argsJNI.delete_MyClass2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void set(MyClass1 cl1) {
    default_argsJNI.MyClass2_set(swigCPtr, this, MyClass1.getCPtr(cl1), cl1);
  }

  public void set2(MyClass1 cl1) {
    default_argsJNI.MyClass2_set2__SWIG_0(swigCPtr, this, MyClass1.getCPtr(cl1), cl1);
  }

  public void set2() {
    default_argsJNI.MyClass2_set2__SWIG_1(swigCPtr, this);
  }

  public MyClass2() {
    this(default_argsJNI.new_MyClass2(), true);
  }

}
