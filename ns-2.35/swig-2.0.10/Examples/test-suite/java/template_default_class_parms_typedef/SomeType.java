/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_default_class_parms_typedef;

public class SomeType {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SomeType(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SomeType obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_default_class_parms_typedefJNI.delete_SomeType(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public SomeType() {
    this(template_default_class_parms_typedefJNI.new_SomeType(), true);
  }

}
