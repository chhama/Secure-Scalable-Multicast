/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector;

public class ShortVector {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ShortVector(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ShortVector obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_vectorJNI.delete_ShortVector(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ShortVector() {
    this(li_std_vectorJNI.new_ShortVector__SWIG_0(), true);
  }

  public ShortVector(long n) {
    this(li_std_vectorJNI.new_ShortVector__SWIG_1(n), true);
  }

  public long size() {
    return li_std_vectorJNI.ShortVector_size(swigCPtr, this);
  }

  public long capacity() {
    return li_std_vectorJNI.ShortVector_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    li_std_vectorJNI.ShortVector_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return li_std_vectorJNI.ShortVector_isEmpty(swigCPtr, this);
  }

  public void clear() {
    li_std_vectorJNI.ShortVector_clear(swigCPtr, this);
  }

  public void add(short x) {
    li_std_vectorJNI.ShortVector_add(swigCPtr, this, x);
  }

  public short get(int i) {
    return li_std_vectorJNI.ShortVector_get(swigCPtr, this, i);
  }

  public void set(int i, short val) {
    li_std_vectorJNI.ShortVector_set(swigCPtr, this, i, val);
  }

}
