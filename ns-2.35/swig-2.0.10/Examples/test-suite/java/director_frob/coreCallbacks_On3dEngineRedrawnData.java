/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_frob;

public class coreCallbacks_On3dEngineRedrawnData {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected coreCallbacks_On3dEngineRedrawnData(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(coreCallbacks_On3dEngineRedrawnData obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_frobJNI.delete_coreCallbacks_On3dEngineRedrawnData(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void set_eye(corePoint3d value) {
    director_frobJNI.coreCallbacks_On3dEngineRedrawnData__eye_set(swigCPtr, this, corePoint3d.getCPtr(value), value);
  }

  public corePoint3d get_eye() {
    long cPtr = director_frobJNI.coreCallbacks_On3dEngineRedrawnData__eye_get(swigCPtr, this);
    return (cPtr == 0) ? null : new corePoint3d(cPtr, false);
  }

  public void set_at(corePoint3d value) {
    director_frobJNI.coreCallbacks_On3dEngineRedrawnData__at_set(swigCPtr, this, corePoint3d.getCPtr(value), value);
  }

  public corePoint3d get_at() {
    long cPtr = director_frobJNI.coreCallbacks_On3dEngineRedrawnData__at_get(swigCPtr, this);
    return (cPtr == 0) ? null : new corePoint3d(cPtr, false);
  }

  public coreCallbacks_On3dEngineRedrawnData() {
    this(director_frobJNI.new_coreCallbacks_On3dEngineRedrawnData(), true);
  }

}
