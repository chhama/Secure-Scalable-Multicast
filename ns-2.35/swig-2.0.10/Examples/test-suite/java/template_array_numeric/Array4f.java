/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_array_numeric;

public class Array4f {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Array4f(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Array4f obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_array_numericJNI.delete_Array4f(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Array4f() {
    this(template_array_numericJNI.new_Array4f__SWIG_0(), true);
  }

  public Array4f(SWIGTYPE_p_float l) {
    this(template_array_numericJNI.new_Array4f__SWIG_1(SWIGTYPE_p_float.getCPtr(l)), true);
  }

}
