/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package ignore_parameter;

public class FordAnglia {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FordAnglia(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FordAnglia obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        ignore_parameterJNI.delete_FordAnglia(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public FordAnglia(String aaa, int bbb) {
    this(ignore_parameterJNI.new_FordAnglia(aaa, bbb), true);
  }

}
