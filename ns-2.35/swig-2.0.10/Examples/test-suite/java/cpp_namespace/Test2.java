/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_namespace;

public class Test2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Test2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Test2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        cpp_namespaceJNI.delete_Test2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public String method() {
    return cpp_namespaceJNI.Test2_method(swigCPtr, this);
  }

  public Test2() {
    this(cpp_namespaceJNI.new_Test2(), true);
  }

}
