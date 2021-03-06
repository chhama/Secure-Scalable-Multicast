/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_combinations;

public class PairDoubleString {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected PairDoubleString(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PairDoubleString obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_combinationsJNI.delete_PairDoubleString(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public PairDoubleString() {
    this(li_std_combinationsJNI.new_PairDoubleString__SWIG_0(), true);
  }

  public PairDoubleString(double first, String second) {
    this(li_std_combinationsJNI.new_PairDoubleString__SWIG_1(first, second), true);
  }

  public PairDoubleString(PairDoubleString p) {
    this(li_std_combinationsJNI.new_PairDoubleString__SWIG_2(PairDoubleString.getCPtr(p), p), true);
  }

  public void setFirst(double value) {
    li_std_combinationsJNI.PairDoubleString_first_set(swigCPtr, this, value);
  }

  public double getFirst() {
    return li_std_combinationsJNI.PairDoubleString_first_get(swigCPtr, this);
  }

  public void setSecond(String value) {
    li_std_combinationsJNI.PairDoubleString_second_set(swigCPtr, this, value);
  }

  public String getSecond() {
    return li_std_combinationsJNI.PairDoubleString_second_get(swigCPtr, this);
  }

}
