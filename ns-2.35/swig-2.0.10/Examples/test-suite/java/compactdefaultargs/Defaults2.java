/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package compactdefaultargs;

public class Defaults2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Defaults2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Defaults2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        compactdefaultargsJNI.delete_Defaults2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static double getPUBLIC_DEFAULT() {
    return compactdefaultargsJNI.Defaults2_PUBLIC_DEFAULT_get();
  }

  public Defaults2(int a) {
    this(compactdefaultargsJNI.new_Defaults2__SWIG_0(a), true);
  }

  public Defaults2() {
    this(compactdefaultargsJNI.new_Defaults2__SWIG_1(), true);
  }

  public double ret(double d) {
    return compactdefaultargsJNI.Defaults2_ret(swigCPtr, this, d);
  }

}