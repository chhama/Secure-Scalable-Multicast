/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_cplx3;

public class UnaryFunction_double_double extends UnaryFunctionBase {
  private long swigCPtr;

  protected UnaryFunction_double_double(long cPtr, boolean cMemoryOwn) {
    super(template_typedef_cplx3JNI.UnaryFunction_double_double_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(UnaryFunction_double_double obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_cplx3JNI.delete_UnaryFunction_double_double(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int get_value() {
    return template_typedef_cplx3JNI.UnaryFunction_double_double_get_value(swigCPtr, this);
  }

  public UnaryFunction_double_double() {
    this(template_typedef_cplx3JNI.new_UnaryFunction_double_double(), true);
  }

}
