/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typemaps_typedef2;

public class PairAInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected PairAInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PairAInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typemaps_typedef2JNI.delete_PairAInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setFirst(A value) {
    template_typemaps_typedef2JNI.PairAInt_first_set(swigCPtr, this, A.getCPtr(value), value);
  }

  public A getFirst() {
    long cPtr = template_typemaps_typedef2JNI.PairAInt_first_get(swigCPtr, this);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public void setSecond(int value) {
    template_typemaps_typedef2JNI.PairAInt_second_set(swigCPtr, this, value);
  }

  public int getSecond() {
    return template_typemaps_typedef2JNI.PairAInt_second_get(swigCPtr, this);
  }

  public PairAInt() {
    this(template_typemaps_typedef2JNI.new_PairAInt(), true);
  }

}
