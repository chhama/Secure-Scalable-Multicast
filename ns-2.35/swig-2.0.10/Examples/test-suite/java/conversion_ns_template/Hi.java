/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package conversion_ns_template;

public class Hi {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Hi(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Hi obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        conversion_ns_templateJNI.delete_Hi(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Hi(int arg0) {
    this(conversion_ns_templateJNI.new_create(arg0), true);
  }

}