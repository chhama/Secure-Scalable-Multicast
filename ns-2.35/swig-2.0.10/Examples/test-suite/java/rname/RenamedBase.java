/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rname;

public class RenamedBase {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected RenamedBase(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(RenamedBase obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rnameJNI.delete_RenamedBase(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public RenamedBase() {
    this(rnameJNI.new_RenamedBase(), true);
  }

  public void fn(RenamedBase baseValue, RenamedBase basePtr, RenamedBase baseRef) {
    rnameJNI.RenamedBase_fn(swigCPtr, this, RenamedBase.getCPtr(baseValue), baseValue, RenamedBase.getCPtr(basePtr), basePtr, RenamedBase.getCPtr(baseRef), baseRef);
  }

  public String newname(double d) {
    return rnameJNI.RenamedBase_newname(swigCPtr, this, d);
  }

}