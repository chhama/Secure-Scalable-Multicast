/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_map;

public class pairA {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected pairA(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(pairA obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_mapJNI.delete_pairA(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public pairA() {
    this(li_std_mapJNI.new_pairA__SWIG_0(), true);
  }

  public pairA(int first, A second) {
    this(li_std_mapJNI.new_pairA__SWIG_1(first, A.getCPtr(second), second), true);
  }

  public pairA(pairA p) {
    this(li_std_mapJNI.new_pairA__SWIG_2(pairA.getCPtr(p), p), true);
  }

  public void setFirst(int value) {
    li_std_mapJNI.pairA_first_set(swigCPtr, this, value);
  }

  public int getFirst() {
    return li_std_mapJNI.pairA_first_get(swigCPtr, this);
  }

  public void setSecond(A value) {
    li_std_mapJNI.pairA_second_set(swigCPtr, this, A.getCPtr(value), value);
  }

  public A getSecond() {
    long cPtr = li_std_mapJNI.pairA_second_get(swigCPtr, this);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

}
