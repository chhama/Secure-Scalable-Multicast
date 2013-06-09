/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_basic;

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
        director_basicJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    director_basicJNI.Bar_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return director_basicJNI.Bar_x_get(swigCPtr, this);
  }

  public Bar(int _x) {
    this(director_basicJNI.new_Bar__SWIG_0(_x), true);
  }

  public Bar() {
    this(director_basicJNI.new_Bar__SWIG_1(), true);
  }

}