/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nspacePackage.Outer;

public class namespce {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  public namespce(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  public static long getCPtr(namespce obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        nspacePackage.nspaceJNI.delete_Outer_namespce(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public namespce() {
    this(nspacePackage.nspaceJNI.new_Outer_namespce__SWIG_0(), true);
  }

  public namespce(nspacePackage.Outer.namespce other) {
    this(nspacePackage.nspaceJNI.new_Outer_namespce__SWIG_1(nspacePackage.Outer.namespce.getCPtr(other), other), true);
  }

}