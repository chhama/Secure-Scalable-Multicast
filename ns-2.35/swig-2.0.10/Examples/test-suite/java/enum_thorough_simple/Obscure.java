/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_simple;

public class Obscure {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Obscure(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Obscure obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thorough_simpleJNI.delete_Obscure(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Obscure() {
    this(enum_thorough_simpleJNI.new_Obscure(), true);
  }

  // Zero 

  // One 
  public final static int one = enum_thorough_simpleJNI.Obscure_one_get();

  // Two 
  public final static int two = enum_thorough_simpleJNI.Obscure_two_get();
  public final static int twoagain = enum_thorough_simpleJNI.Obscure_twoagain_get();

  // Empty 

  // AlsoEmpty 

}