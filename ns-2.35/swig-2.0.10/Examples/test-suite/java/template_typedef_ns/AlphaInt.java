/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_ns;

public class AlphaInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected AlphaInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AlphaInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_nsJNI.delete_AlphaInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    template_typedef_nsJNI.AlphaInt_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return template_typedef_nsJNI.AlphaInt_x_get(swigCPtr, this);
  }

  public AlphaInt() {
    this(template_typedef_nsJNI.new_AlphaInt(), true);
  }

}
