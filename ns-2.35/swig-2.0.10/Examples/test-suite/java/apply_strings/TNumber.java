/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package apply_strings;

public class TNumber {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TNumber(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TNumber obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        apply_stringsJNI.delete_TNumber(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setDigitsMemberA(String value) {
    apply_stringsJNI.TNumber_DigitsMemberA_set(swigCPtr, this, value);
  }

  public String getDigitsMemberA() {
    return apply_stringsJNI.TNumber_DigitsMemberA_get(swigCPtr, this);
  }

  public void setDigitsMemberB(String value) {
    apply_stringsJNI.TNumber_DigitsMemberB_set(swigCPtr, this, value);
  }

  public String getDigitsMemberB() {
    return apply_stringsJNI.TNumber_DigitsMemberB_get(swigCPtr, this);
  }

  public TNumber() {
    this(apply_stringsJNI.new_TNumber(), true);
  }

}