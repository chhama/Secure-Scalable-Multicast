/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package threads;

public class Kerfuffle {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Kerfuffle(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Kerfuffle obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        threadsJNI.delete_Kerfuffle(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public String StdString(String str) {
    return threadsJNI.Kerfuffle_StdString(swigCPtr, this, str);
  }

  public String CharString(String str) {
    return threadsJNI.Kerfuffle_CharString(swigCPtr, this, str);
  }

  public Kerfuffle() {
    this(threadsJNI.new_Kerfuffle(), true);
  }

}