/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_class;

public class Bor {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bor(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bor obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_classJNI.delete_Bor(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Hello foo(Hello h) {
    return Hello.swigToEnum(namespace_classJNI.Bor_foo(swigCPtr, this, h.swigValue()));
  }

  public Bor() {
    this(namespace_classJNI.new_Bor(), true);
  }

}