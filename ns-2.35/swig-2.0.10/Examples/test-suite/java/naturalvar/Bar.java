/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package naturalvar;

public class Bar {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        naturalvarJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setI(int value) {
    naturalvarJNI.Bar_i_set(swigCPtr, this, value);
  }

  public int getI() {
    return naturalvarJNI.Bar_i_get(swigCPtr, this);
  }

  public void setF(Foo value) {
    naturalvarJNI.Bar_f_set(swigCPtr, this, Foo.getCPtr(value), value);
  }

  public Foo getF() {
    return new Foo(naturalvarJNI.Bar_f_get(swigCPtr, this), false);
  }

  public void setS(String value) {
    naturalvarJNI.Bar_s_set(swigCPtr, this, value);
  }

  public String getS() {
    return naturalvarJNI.Bar_s_get(swigCPtr, this);
  }

  public Bar() {
    this(naturalvarJNI.new_Bar(), true);
  }

}