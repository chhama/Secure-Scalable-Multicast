/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_cplx4;

public class Sin extends ArithUnaryFunction_double_double {
  private long swigCPtr;

  protected Sin(long cPtr, boolean cMemoryOwn) {
    super(template_typedef_cplx4JNI.Sin_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Sin obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_cplx4JNI.delete_Sin(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Sin() {
    this(template_typedef_cplx4JNI.new_Sin(), true);
  }

}