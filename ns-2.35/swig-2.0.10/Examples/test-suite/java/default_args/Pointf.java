/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_args;

public class Pointf {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Pointf(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Pointf obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_argsJNI.delete_Pointf(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(double value) {
    default_argsJNI.Pointf_x_set(swigCPtr, this, value);
  }

  public double getX() {
    return default_argsJNI.Pointf_x_get(swigCPtr, this);
  }

  public void setY(double value) {
    default_argsJNI.Pointf_y_set(swigCPtr, this, value);
  }

  public double getY() {
    return default_argsJNI.Pointf_y_get(swigCPtr, this);
  }

  public Pointf() {
    this(default_argsJNI.new_Pointf(), true);
  }

}