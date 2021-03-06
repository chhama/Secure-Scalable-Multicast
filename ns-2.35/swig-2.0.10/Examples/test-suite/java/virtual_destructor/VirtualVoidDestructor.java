/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package virtual_destructor;

public class VirtualVoidDestructor {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected VirtualVoidDestructor(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(VirtualVoidDestructor obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        virtual_destructorJNI.delete_VirtualVoidDestructor(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public VirtualVoidDestructor() {
    this(virtual_destructorJNI.new_VirtualVoidDestructor(), true);
  }

}
