/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_frob;

public class Prims {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Prims(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Prims obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_frobJNI.delete_Prims(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    director_frobJNI.Prims_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_frobJNI.Prims_change_ownership(this, swigCPtr, true);
  }

  public java.math.BigInteger ull(java.math.BigInteger i, java.math.BigInteger j) {
    return (getClass() == Prims.class) ? director_frobJNI.Prims_ull(swigCPtr, this, i, j) : director_frobJNI.Prims_ullSwigExplicitPrims(swigCPtr, this, i, j);
  }

  public java.math.BigInteger callull(int i, int j) {
    return director_frobJNI.Prims_callull(swigCPtr, this, i, j);
  }

  public Prims() {
    this(director_frobJNI.new_Prims(), true);
    director_frobJNI.Prims_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
