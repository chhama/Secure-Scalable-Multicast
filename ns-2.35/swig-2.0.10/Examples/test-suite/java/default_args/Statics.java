/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_args;

public class Statics {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Statics(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Statics obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_argsJNI.delete_Statics(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static int staticmethod(int a, int b, int c) {
    return default_argsJNI.Statics_staticmethod__SWIG_0(a, b, c);
  }

  public static int staticmethod(int a, int b) {
    return default_argsJNI.Statics_staticmethod__SWIG_1(a, b);
  }

  public static int staticmethod(int a) {
    return default_argsJNI.Statics_staticmethod__SWIG_2(a);
  }

  public static int staticmethod() {
    return default_argsJNI.Statics_staticmethod__SWIG_3();
  }

  public Statics() {
    this(default_argsJNI.new_Statics(), true);
  }

}
