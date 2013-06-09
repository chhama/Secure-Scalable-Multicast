/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_finalizer;

public class Foo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_finalizerJNI.delete_Foo(swigCPtr);
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
    director_finalizerJNI.Foo_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_finalizerJNI.Foo_change_ownership(this, swigCPtr, true);
  }

  public void orStatus(int x) {
    if (getClass() == Foo.class) director_finalizerJNI.Foo_orStatus(swigCPtr, this, x); else director_finalizerJNI.Foo_orStatusSwigExplicitFoo(swigCPtr, this, x);
  }

  public Foo() {
    this(director_finalizerJNI.new_Foo(), true);
    director_finalizerJNI.Foo_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}