/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_retvalue;

public class A_Hi {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A_Hi(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A_Hi obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_retvalueJNI.delete_A_Hi(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public A_Hi(int arg0) {
    this(template_retvalueJNI.new_A_Hi(arg0), true);
  }

}
