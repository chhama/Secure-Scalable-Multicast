/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_args;

public class ConstMethods {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ConstMethods(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ConstMethods obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_argsJNI.delete_ConstMethods(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int coo(double d) {
    return default_argsJNI.ConstMethods_coo__SWIG_0(swigCPtr, this, d);
  }

  public int coo() {
    return default_argsJNI.ConstMethods_coo__SWIG_1(swigCPtr, this);
  }

  public ConstMethods() {
    this(default_argsJNI.new_ConstMethods(), true);
  }

}
