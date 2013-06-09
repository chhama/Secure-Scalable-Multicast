/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_arg_values;

public class Display {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Display(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Display obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_arg_valuesJNI.delete_Display(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public float draw1(float v) {
    return default_arg_valuesJNI.Display_draw1__SWIG_0(swigCPtr, this, v);
  }

  public float draw1() {
    return default_arg_valuesJNI.Display_draw1__SWIG_1(swigCPtr, this);
  }

  public float draw2(SWIGTYPE_p_float v) {
    return default_arg_valuesJNI.Display_draw2__SWIG_0(swigCPtr, this, SWIGTYPE_p_float.getCPtr(v));
  }

  public float draw2() {
    return default_arg_valuesJNI.Display_draw2__SWIG_1(swigCPtr, this);
  }

  public Display() {
    this(default_arg_valuesJNI.new_Display(), true);
  }

}