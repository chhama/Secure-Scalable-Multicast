/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package evil_diamond;

public class spam extends bar {
  private long swigCPtr;

  protected spam(long cPtr, boolean cMemoryOwn) {
    super(evil_diamondJNI.spam_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(spam obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        evil_diamondJNI.delete_spam(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public spam() {
    this(evil_diamondJNI.new_spam(), true);
  }

}