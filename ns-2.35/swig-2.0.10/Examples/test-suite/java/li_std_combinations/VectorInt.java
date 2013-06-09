/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_combinations;

public class VectorInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected VectorInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(VectorInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_combinationsJNI.delete_VectorInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public VectorInt() {
    this(li_std_combinationsJNI.new_VectorInt__SWIG_0(), true);
  }

  public VectorInt(long n) {
    this(li_std_combinationsJNI.new_VectorInt__SWIG_1(n), true);
  }

  public long size() {
    return li_std_combinationsJNI.VectorInt_size(swigCPtr, this);
  }

  public long capacity() {
    return li_std_combinationsJNI.VectorInt_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    li_std_combinationsJNI.VectorInt_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return li_std_combinationsJNI.VectorInt_isEmpty(swigCPtr, this);
  }

  public void clear() {
    li_std_combinationsJNI.VectorInt_clear(swigCPtr, this);
  }

  public void add(int x) {
    li_std_combinationsJNI.VectorInt_add(swigCPtr, this, x);
  }

  public int get(int i) {
    return li_std_combinationsJNI.VectorInt_get(swigCPtr, this, i);
  }

  public void set(int i, int val) {
    li_std_combinationsJNI.VectorInt_set(swigCPtr, this, i, val);
  }

}