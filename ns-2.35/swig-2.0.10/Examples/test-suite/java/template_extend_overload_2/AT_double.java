/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_extend_overload_2;

public class AT_double {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected AT_double(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AT_double obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_extend_overload_2JNI.delete_AT_double(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public AT_double() {
    this(template_extend_overload_2JNI.new_AT_double__SWIG_0(), true);
  }

  public AT_double(int arg0) {
    this(template_extend_overload_2JNI.new_AT_double__SWIG_1(arg0), true);
  }

  public int hi() {
    return template_extend_overload_2JNI.AT_double_hi__SWIG_0(swigCPtr, this);
  }

  public int hi(int arg0) {
    return template_extend_overload_2JNI.AT_double_hi__SWIG_1(swigCPtr, this, arg0);
  }

  public AT_double(double i) {
    this(template_extend_overload_2JNI.new_AT_double__SWIG_2(i), true);
  }

}