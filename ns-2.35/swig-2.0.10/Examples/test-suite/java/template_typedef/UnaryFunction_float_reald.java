/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef;

public class UnaryFunction_float_reald extends UnaryFunctionBase {
  private long swigCPtr;

  protected UnaryFunction_float_reald(long cPtr, boolean cMemoryOwn) {
    super(template_typedefJNI.UnaryFunction_float_reald_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(UnaryFunction_float_reald obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedefJNI.delete_UnaryFunction_float_reald(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public UnaryFunction_float_reald() {
    this(template_typedefJNI.new_UnaryFunction_float_reald(), true);
  }

}