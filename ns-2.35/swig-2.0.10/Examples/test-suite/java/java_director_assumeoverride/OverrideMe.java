/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_director_assumeoverride;

public class OverrideMe {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected OverrideMe(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OverrideMe obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_director_assumeoverrideJNI.delete_OverrideMe(swigCPtr);
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
    java_director_assumeoverrideJNI.OverrideMe_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    java_director_assumeoverrideJNI.OverrideMe_change_ownership(this, swigCPtr, true);
  }

  public void func() {
    if (getClass() == OverrideMe.class) java_director_assumeoverrideJNI.OverrideMe_func(swigCPtr, this); else java_director_assumeoverrideJNI.OverrideMe_funcSwigExplicitOverrideMe(swigCPtr, this);
  }

  public OverrideMe() {
    this(java_director_assumeoverrideJNI.new_OverrideMe(), true);
    java_director_assumeoverrideJNI.OverrideMe_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
