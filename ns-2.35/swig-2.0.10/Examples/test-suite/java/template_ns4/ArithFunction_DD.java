/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_ns4;

public class ArithFunction_DD extends Function_DD {
  private long swigCPtr;

  protected ArithFunction_DD(long cPtr, boolean cMemoryOwn) {
    super(template_ns4JNI.ArithFunction_DD_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ArithFunction_DD obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_ns4JNI.delete_ArithFunction_DD(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public ArithFunction_DD() {
    this(template_ns4JNI.new_ArithFunction_DD(), true);
  }

}
