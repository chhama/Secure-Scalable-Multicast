/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_typemaps_typewrapper;

public class WasCrashing {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected WasCrashing(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(WasCrashing obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_typemaps_typewrapperJNI.delete_WasCrashing(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public WasCrashing() {
    this(java_typemaps_typewrapperJNI.new_WasCrashing(), true);
  }

}
