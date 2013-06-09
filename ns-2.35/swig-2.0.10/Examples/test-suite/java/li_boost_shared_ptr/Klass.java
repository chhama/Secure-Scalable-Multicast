/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr;

public class Klass {
  private long swigCPtr;
  private boolean swigCMemOwn;

  protected Klass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Klass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_boost_shared_ptrJNI.delete_Klass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Klass() {
    this(li_boost_shared_ptrJNI.new_Klass__SWIG_0(), true);
  }

  public Klass(String val) {
    this(li_boost_shared_ptrJNI.new_Klass__SWIG_1(val), true);
  }

  public String getValue() {
    return li_boost_shared_ptrJNI.Klass_getValue(swigCPtr, this);
  }

  public void append(String s) {
    li_boost_shared_ptrJNI.Klass_append(swigCPtr, this, s);
  }

  public Klass(Klass other) {
    this(li_boost_shared_ptrJNI.new_Klass__SWIG_2(Klass.getCPtr(other), other), true);
  }

  public static int getTotal_count() {
    return li_boost_shared_ptrJNI.Klass_getTotal_count();
  }

}
