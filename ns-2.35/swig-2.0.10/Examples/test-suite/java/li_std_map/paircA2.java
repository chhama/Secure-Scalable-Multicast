/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_map;

public class paircA2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected paircA2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(paircA2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_mapJNI.delete_paircA2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public paircA2() {
    this(li_std_mapJNI.new_paircA2__SWIG_0(), true);
  }

  public paircA2(int first, A second) {
    this(li_std_mapJNI.new_paircA2__SWIG_1(first, A.getCPtr(second), second), true);
  }

  public paircA2(paircA2 p) {
    this(li_std_mapJNI.new_paircA2__SWIG_2(paircA2.getCPtr(p), p), true);
  }

  public int getFirst() {
    return li_std_mapJNI.paircA2_first_get(swigCPtr, this);
  }

  public void setSecond(A value) {
    li_std_mapJNI.paircA2_second_set(swigCPtr, this, A.getCPtr(value), value);
  }

  public A getSecond() {
    long cPtr = li_std_mapJNI.paircA2_second_get(swigCPtr, this);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

}
