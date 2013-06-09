/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typedef_class;

public class BB {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BB(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BB obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        typedef_classJNI.delete_BB(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public BB() {
    this(typedef_classJNI.new_BB__SWIG_0(), true);
  }

  public BB(int x) {
    this(typedef_classJNI.new_BB__SWIG_1(x), true);
  }

  public void setAa_var(int value) {
    typedef_classJNI.BB_aa_var_set(swigCPtr, this, value);
  }

  public int getAa_var() {
    return typedef_classJNI.BB_aa_var_get(swigCPtr, this);
  }

  public SWIGTYPE_p_int aa_method(double d) {
    long cPtr = typedef_classJNI.BB_aa_method(swigCPtr, this, d);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static SWIGTYPE_p_int aa_static_method(boolean b) {
    long cPtr = typedef_classJNI.BB_aa_static_method(b);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

}
