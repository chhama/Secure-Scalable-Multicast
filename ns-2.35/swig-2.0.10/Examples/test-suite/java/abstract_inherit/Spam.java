/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package abstract_inherit;

public class Spam extends Foo {
  private long swigCPtr;

  protected Spam(long cPtr, boolean cMemoryOwn) {
    super(abstract_inheritJNI.Spam_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Spam obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        abstract_inheritJNI.delete_Spam(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

}