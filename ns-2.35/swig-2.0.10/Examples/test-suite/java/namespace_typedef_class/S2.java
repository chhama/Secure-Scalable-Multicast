/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_typedef_class;

public class S2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected S2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(S2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_typedef_classJNI.delete_S2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setN(int value) {
    namespace_typedef_classJNI.S2_n_set(swigCPtr, this, value);
  }

  public int getN() {
    return namespace_typedef_classJNI.S2_n_get(swigCPtr, this);
  }

  public S2() {
    this(namespace_typedef_classJNI.new_S2(), true);
  }

}
