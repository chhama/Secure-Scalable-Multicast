/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_director;

public class QuuxContainer {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected QuuxContainer(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(QuuxContainer obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
//    System.out.println("Finalizing " + this);
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_directorJNI.delete_QuuxContainer(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public QuuxContainer() {
    this(java_directorJNI.new_QuuxContainer(), true);
  }

  public void push(Quux elem) {
    java_directorJNI.QuuxContainer_push(swigCPtr, this, Quux.getCPtr(elem), elem);
  }

  public Quux get(int idx) {
    long cPtr = java_directorJNI.QuuxContainer_get(swigCPtr, this, idx);
    return (cPtr == 0) ? null : new Quux(cPtr, false);
  }

  public String invoke(int idx) {
    return java_directorJNI.QuuxContainer_invoke(swigCPtr, this, idx);
  }

  public long size() {
    return java_directorJNI.QuuxContainer_size(swigCPtr, this);
  }

}
