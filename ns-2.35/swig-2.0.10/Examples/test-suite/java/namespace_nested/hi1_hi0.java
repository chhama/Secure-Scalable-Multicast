/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_nested;

public class hi1_hi0 extends Hi_hi0 {
  private long swigCPtr;

  protected hi1_hi0(long cPtr, boolean cMemoryOwn) {
    super(namespace_nestedJNI.hi1_hi0_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(hi1_hi0 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_nestedJNI.delete_hi1_hi0(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public hi1_hi0() {
    this(namespace_nestedJNI.new_hi1_hi0(), true);
  }

}
