/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_class;

public class FooT_d {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FooT_d(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FooT_d obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_classJNI.delete_FooT_d(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public double moo(double h) {
    return namespace_classJNI.FooT_d_moo(swigCPtr, this, h);
  }

  public FooT_d() {
    this(namespace_classJNI.new_FooT_d(), true);
  }

}
