/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_args;

public class MyClass1 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MyClass1(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MyClass1 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_argsJNI.delete_MyClass1(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public MyClass1(MyType myType) {
    this(default_argsJNI.new_MyClass1(myType.swigValue()), true);
  }

}
