/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package valuewrapper_opaque;

public class AA {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected AA(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AA obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        valuewrapper_opaqueJNI.delete_AA(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public AA() {
    this(valuewrapper_opaqueJNI.new_AA(), true);
  }

  public void setInnerObj(SWIGTYPE_p_BB value) {
    valuewrapper_opaqueJNI.AA_innerObj_set(swigCPtr, this, SWIGTYPE_p_BB.getCPtr(value));
  }

  public SWIGTYPE_p_BB getInnerObj() {
    long cPtr = valuewrapper_opaqueJNI.AA_innerObj_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_BB(cPtr, false);
  }

}