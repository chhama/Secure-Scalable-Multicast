/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package class_scope_weird;

public class Quat {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Quat(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Quat obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        class_scope_weirdJNI.delete_Quat(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Quat() {
    this(class_scope_weirdJNI.new_Quat__SWIG_0(), true);
  }

  public Quat(float in_w, float x, float y, float z) {
    this(class_scope_weirdJNI.new_Quat__SWIG_1(in_w, x, y, z), true);
  }

  public Quat(SWIGTYPE_p_tacka3 axis, float angle) {
    this(class_scope_weirdJNI.new_Quat__SWIG_2(SWIGTYPE_p_tacka3.getCPtr(axis), angle), true);
  }

  public Quat(SWIGTYPE_p_matrix4 m) {
    this(class_scope_weirdJNI.new_Quat__SWIG_3(SWIGTYPE_p_matrix4.getCPtr(m)), true);
  }

}
