/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_extend;

public class SpObject {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SpObject(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SpObject obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_extendJNI.delete_SpObject(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public SpObject() {
    this(director_extendJNI.new_SpObject(), true);
  }

  public int getFooBar() {
    return director_extendJNI.SpObject_getFooBar(swigCPtr, this);
  }

  public int dummy() {
    return director_extendJNI.SpObject_dummy(swigCPtr, this);
  }

  public long ExceptionMethod() {
    return director_extendJNI.SpObject_ExceptionMethod(swigCPtr, this);
  }

}
