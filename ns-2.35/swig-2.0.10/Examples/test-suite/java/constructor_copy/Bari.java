/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_copy;

public class Bari {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bari(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bari obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        constructor_copyJNI.delete_Bari(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    constructor_copyJNI.Bari_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return constructor_copyJNI.Bari_x_get(swigCPtr, this);
  }

  public Bari(int _x) {
    this(constructor_copyJNI.new_Bari__SWIG_0(_x), true);
  }

  public Bari() {
    this(constructor_copyJNI.new_Bari__SWIG_1(), true);
  }

  public Bari(Bari other) {
    this(constructor_copyJNI.new_Bari__SWIG_2(Bari.getCPtr(other), other), true);
  }

}