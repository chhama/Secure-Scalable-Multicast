/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_int_const;

public class ExtModule1 extends Module_1 {
  private long swigCPtr;

  protected ExtModule1(long cPtr, boolean cMemoryOwn) {
    super(template_int_constJNI.ExtModule1_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ExtModule1 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_int_constJNI.delete_ExtModule1(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public ExtModule1() {
    this(template_int_constJNI.new_ExtModule1(), true);
  }

}