/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_specialization_enum;

public class Base_ii {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Base_ii(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Base_ii obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_specialization_enumJNI.delete_Base_ii(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Base_ii() {
    this(template_specialization_enumJNI.new_Base_ii(), true);
  }

}