/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_carrays;

public class AB {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected AB(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AB obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_carraysJNI.delete_AB(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setA(int value) {
    li_carraysJNI.AB_a_set(swigCPtr, this, value);
  }

  public int getA() {
    return li_carraysJNI.AB_a_get(swigCPtr, this);
  }

  public void setB(int value) {
    li_carraysJNI.AB_b_set(swigCPtr, this, value);
  }

  public int getB() {
    return li_carraysJNI.AB_b_get(swigCPtr, this);
  }

  public AB() {
    this(li_carraysJNI.new_AB(), true);
  }

}
