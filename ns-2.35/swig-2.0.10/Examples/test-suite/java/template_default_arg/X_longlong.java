/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_default_arg;

public class X_longlong {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected X_longlong(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(X_longlong obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_default_argJNI.delete_X_longlong(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public X_longlong(long t) {
    this(template_default_argJNI.new_X_longlong__SWIG_0(t), true);
  }

  public X_longlong() {
    this(template_default_argJNI.new_X_longlong__SWIG_1(), true);
  }

  public X_longlong(double a, long t) {
    this(template_default_argJNI.new_X_longlong__SWIG_2(a, t), true);
  }

  public X_longlong(double a) {
    this(template_default_argJNI.new_X_longlong__SWIG_3(a), true);
  }

  public long meth(double a, long t) {
    return template_default_argJNI.X_longlong_meth__SWIG_0(swigCPtr, this, a, t);
  }

  public long meth(double a) {
    return template_default_argJNI.X_longlong_meth__SWIG_1(swigCPtr, this, a);
  }

  public long meth(long t) {
    return template_default_argJNI.X_longlong_meth__SWIG_2(swigCPtr, this, t);
  }

  public long meth() {
    return template_default_argJNI.X_longlong_meth__SWIG_3(swigCPtr, this);
  }

}
