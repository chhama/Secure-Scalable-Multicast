/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef;

public class ArithUnaryFunction_float_float extends UnaryFunction_float_float {
  private long swigCPtr;

  protected ArithUnaryFunction_float_float(long cPtr, boolean cMemoryOwn) {
    super(template_typedefJNI.ArithUnaryFunction_float_float_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ArithUnaryFunction_float_float obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedefJNI.delete_ArithUnaryFunction_float_float(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public ArithUnaryFunction_float_float() {
    this(template_typedefJNI.new_ArithUnaryFunction_float_float(), true);
  }

}
