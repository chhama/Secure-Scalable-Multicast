/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package name_cxx;

public class B extends AA {
  private long swigCPtr;

  protected B(long cPtr, boolean cMemoryOwn) {
    super(name_cxxJNI.B_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(B obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        name_cxxJNI.delete_B(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public B() {
    this(name_cxxJNI.new_B(), true);
  }

}
