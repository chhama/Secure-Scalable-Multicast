/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_ns4;

public class Class_DD extends ArithFunction_DD {
  private long swigCPtr;

  protected Class_DD(long cPtr, boolean cMemoryOwn) {
    super(template_ns4JNI.Class_DD_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Class_DD obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_ns4JNI.delete_Class_DD(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Class_DD() {
    this(template_ns4JNI.new_Class_DD(), true);
  }

}