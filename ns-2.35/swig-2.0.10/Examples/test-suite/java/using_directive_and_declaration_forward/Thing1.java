/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_directive_and_declaration_forward;

public class Thing1 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Thing1(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Thing1 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using_directive_and_declaration_forwardJNI.delete_Thing1(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Thing1() {
    this(using_directive_and_declaration_forwardJNI.new_Thing1(), true);
  }

}