/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_directive_and_declaration;

public class Thing3 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Thing3(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Thing3 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using_directive_and_declarationJNI.delete_Thing3(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Thing3() {
    this(using_directive_and_declarationJNI.new_Thing3(), true);
  }

}
