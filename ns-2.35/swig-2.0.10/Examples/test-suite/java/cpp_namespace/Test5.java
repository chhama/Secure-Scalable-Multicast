/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_namespace;

public class Test5 extends Test3 {
  private long swigCPtr;

  protected Test5(long cPtr, boolean cMemoryOwn) {
    super(cpp_namespaceJNI.Test5_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Test5 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        cpp_namespaceJNI.delete_Test5(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public String method() {
    return cpp_namespaceJNI.Test5_method(swigCPtr, this);
  }

  public Test5() {
    this(cpp_namespaceJNI.new_Test5(), true);
  }

}
