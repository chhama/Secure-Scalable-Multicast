/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package simple_array;

public class BarArray {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BarArray(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BarArray obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        simple_arrayJNI.delete_BarArray(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setI(int value) {
    simple_arrayJNI.BarArray_i_set(swigCPtr, this, value);
  }

  public int getI() {
    return simple_arrayJNI.BarArray_i_get(swigCPtr, this);
  }

  public void setD(double value) {
    simple_arrayJNI.BarArray_d_set(swigCPtr, this, value);
  }

  public double getD() {
    return simple_arrayJNI.BarArray_d_get(swigCPtr, this);
  }

  public BarArray() {
    this(simple_arrayJNI.new_BarArray(), true);
  }

}
