/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_cplx4;

public class ArithUnaryFunction_complex_complex extends UnaryFunction_complex_complex {
  private long swigCPtr;

  protected ArithUnaryFunction_complex_complex(long cPtr, boolean cMemoryOwn) {
    super(template_typedef_cplx4JNI.ArithUnaryFunction_complex_complex_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ArithUnaryFunction_complex_complex obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_cplx4JNI.delete_ArithUnaryFunction_complex_complex(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int get_arith_value() {
    return template_typedef_cplx4JNI.ArithUnaryFunction_complex_complex_get_arith_value(swigCPtr, this);
  }

  public ArithUnaryFunction_complex_complex() {
    this(template_typedef_cplx4JNI.new_ArithUnaryFunction_complex_complex(), true);
  }

}
