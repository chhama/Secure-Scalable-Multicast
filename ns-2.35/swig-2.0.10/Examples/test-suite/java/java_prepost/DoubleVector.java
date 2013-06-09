/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_prepost;

public class DoubleVector {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected DoubleVector(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DoubleVector obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_prepostJNI.delete_DoubleVector(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public DoubleVector() {
    this(java_prepostJNI.new_DoubleVector__SWIG_0(), true);
  }

  public DoubleVector(long n) {
    this(java_prepostJNI.new_DoubleVector__SWIG_1(n), true);
  }

  public long size() {
    return java_prepostJNI.DoubleVector_size(swigCPtr, this);
  }

  public long capacity() {
    return java_prepostJNI.DoubleVector_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    java_prepostJNI.DoubleVector_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return java_prepostJNI.DoubleVector_isEmpty(swigCPtr, this);
  }

  public void clear() {
    java_prepostJNI.DoubleVector_clear(swigCPtr, this);
  }

  public void add(double x) {
    java_prepostJNI.DoubleVector_add(swigCPtr, this, x);
  }

  public double get(int i) {
    return java_prepostJNI.DoubleVector_get(swigCPtr, this, i);
  }

  public void set(int i, double val) {
    java_prepostJNI.DoubleVector_set(swigCPtr, this, i, val);
  }

}