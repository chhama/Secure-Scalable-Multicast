/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_namespace;

public class Test {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Test(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Test obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        cpp_namespaceJNI.delete_Test(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Test() {
    this(cpp_namespaceJNI.new_Test(), true);
  }

  public String method() {
    return cpp_namespaceJNI.Test_method(swigCPtr, this);
  }

}
