/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_map;

public class pairii {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected pairii(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(pairii obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_mapJNI.delete_pairii(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public pairii() {
    this(li_std_mapJNI.new_pairii__SWIG_0(), true);
  }

  public pairii(int first, int second) {
    this(li_std_mapJNI.new_pairii__SWIG_1(first, second), true);
  }

  public pairii(pairii p) {
    this(li_std_mapJNI.new_pairii__SWIG_2(pairii.getCPtr(p), p), true);
  }

  public void setFirst(int value) {
    li_std_mapJNI.pairii_first_set(swigCPtr, this, value);
  }

  public int getFirst() {
    return li_std_mapJNI.pairii_first_get(swigCPtr, this);
  }

  public void setSecond(int value) {
    li_std_mapJNI.pairii_second_set(swigCPtr, this, value);
  }

  public int getSecond() {
    return li_std_mapJNI.pairii_second_get(swigCPtr, this);
  }

}
