/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_tbase_template;

public class Funktion_dd {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Funktion_dd(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Funktion_dd obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_tbase_templateJNI.delete_Funktion_dd(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public String test() {
    return template_tbase_templateJNI.Funktion_dd_test(swigCPtr, this);
  }

  public Funktion_dd() {
    this(template_tbase_templateJNI.new_Funktion_dd(), true);
  }

}
