/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_namespace;

public class Test4 extends Test3 {
  private long swigCPtr;

  protected Test4(long cPtr, boolean cMemoryOwn) {
    super(cpp_namespaceJNI.Test4_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Test4 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        cpp_namespaceJNI.delete_Test4(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public String method() {
    return cpp_namespaceJNI.Test4_method(swigCPtr, this);
  }

  public Test4() {
    this(cpp_namespaceJNI.new_Test4(), true);
  }

}
