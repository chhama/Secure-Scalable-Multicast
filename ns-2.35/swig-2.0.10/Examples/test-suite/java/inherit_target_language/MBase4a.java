/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package inherit_target_language;

public class MBase4a extends TargetLanguageBase {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MBase4a(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MBase4a obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        inherit_target_languageJNI.delete_MBase4a(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void g() {
    inherit_target_languageJNI.MBase4a_g(swigCPtr, this);
  }

  public MBase4a() {
    this(inherit_target_languageJNI.new_MBase4a(), true);
  }

}