/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_namespace;

public class Klass6 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Klass6(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Klass6 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        global_namespaceJNI.delete_Klass6(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Klass6() {
    this(global_namespaceJNI.new_Klass6(), true);
  }

}
