/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_copy;

public class Flow {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Flow(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Flow obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        constructor_copyJNI.delete_Flow(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Flow(int i) {
    this(constructor_copyJNI.new_Flow__SWIG_0(i), true);
  }

  public Flow(Flow other) {
    this(constructor_copyJNI.new_Flow__SWIG_1(Flow.getCPtr(other), other), true);
  }

}
