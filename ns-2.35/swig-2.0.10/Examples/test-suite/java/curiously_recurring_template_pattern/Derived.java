/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package curiously_recurring_template_pattern;

public class Derived extends basederived {
  private long swigCPtr;

  protected Derived(long cPtr, boolean cMemoryOwn) {
    super(curiously_recurring_template_patternJNI.Derived_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Derived obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        curiously_recurring_template_patternJNI.delete_Derived(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Derived() {
    this(curiously_recurring_template_patternJNI.new_Derived(), true);
  }

  public int getDerived1Param() {
    return curiously_recurring_template_patternJNI.Derived_getDerived1Param(swigCPtr, this);
  }

  public Derived setDerived1Param(int value) {
    return new Derived(curiously_recurring_template_patternJNI.Derived_setDerived1Param(swigCPtr, this, value), false);
  }

  public int getDerived2Param() {
    return curiously_recurring_template_patternJNI.Derived_getDerived2Param(swigCPtr, this);
  }

  public Derived setDerived2Param(int value) {
    return new Derived(curiously_recurring_template_patternJNI.Derived_setDerived2Param(swigCPtr, this, value), false);
  }

}
