/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_const_ref;

public class Foob {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foob(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foob obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_const_refJNI.delete_Foob(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public String bar(Bar obj) {
    return template_const_refJNI.Foob_bar(swigCPtr, this, Bar.getCPtr(obj), obj);
  }

  public Foob() {
    this(template_const_refJNI.new_Foob(), true);
  }

}
