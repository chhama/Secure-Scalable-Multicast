/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package class_ignore;

public class Far extends Boo {
  private long swigCPtr;

  protected Far(long cPtr, boolean cMemoryOwn) {
    super(class_ignoreJNI.Far_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Far obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        class_ignoreJNI.delete_Far(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Far() {
    this(class_ignoreJNI.new_Far(), true);
  }

}
