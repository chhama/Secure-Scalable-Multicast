/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package inherit_target_language;

public class Derived2 extends TargetLanguageBase {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Derived2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Derived2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        inherit_target_languageJNI.delete_Derived2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Derived2() {
    this(inherit_target_languageJNI.new_Derived2(), true);
  }

}
