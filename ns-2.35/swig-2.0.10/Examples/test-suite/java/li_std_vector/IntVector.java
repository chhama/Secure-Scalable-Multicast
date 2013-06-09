/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector;

public class IntVector {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected IntVector(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(IntVector obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_vectorJNI.delete_IntVector(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public IntVector() {
    this(li_std_vectorJNI.new_IntVector__SWIG_0(), true);
  }

  public IntVector(long n) {
    this(li_std_vectorJNI.new_IntVector__SWIG_1(n), true);
  }

  public long size() {
    return li_std_vectorJNI.IntVector_size(swigCPtr, this);
  }

  public long capacity() {
    return li_std_vectorJNI.IntVector_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    li_std_vectorJNI.IntVector_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return li_std_vectorJNI.IntVector_isEmpty(swigCPtr, this);
  }

  public void clear() {
    li_std_vectorJNI.IntVector_clear(swigCPtr, this);
  }

  public void add(int x) {
    li_std_vectorJNI.IntVector_add(swigCPtr, this, x);
  }

  public int get(int i) {
    return li_std_vectorJNI.IntVector_get(swigCPtr, this, i);
  }

  public void set(int i, int val) {
    li_std_vectorJNI.IntVector_set(swigCPtr, this, i, val);
  }

}