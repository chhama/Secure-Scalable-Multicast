/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_classic;

public class OrphanChild extends Child {
  private long swigCPtr;

  protected OrphanChild(long cPtr, boolean cMemoryOwn) {
    super(director_classicJNI.OrphanChild_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OrphanChild obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_classicJNI.delete_OrphanChild(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    director_classicJNI.OrphanChild_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_classicJNI.OrphanChild_change_ownership(this, swigCPtr, true);
  }

  public OrphanChild() {
    this(director_classicJNI.new_OrphanChild(), true);
    director_classicJNI.OrphanChild_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
