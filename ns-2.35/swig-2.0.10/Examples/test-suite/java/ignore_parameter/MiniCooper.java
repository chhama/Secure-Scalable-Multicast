/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package ignore_parameter;

public class MiniCooper {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MiniCooper(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MiniCooper obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        ignore_parameterJNI.delete_MiniCooper(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public MiniCooper(int b, double c) {
    this(ignore_parameterJNI.new_MiniCooper(b, c), true);
  }

}
