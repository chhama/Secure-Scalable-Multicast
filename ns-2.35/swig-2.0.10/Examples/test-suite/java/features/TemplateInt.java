/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package features;

public class TemplateInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TemplateInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TemplateInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        featuresJNI.delete_TemplateInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TemplateInt() {
    this(featuresJNI.new_TemplateInt__SWIG_0(), true);
  }

  public TemplateInt(TemplateInt arg0) {
    this(featuresJNI.new_TemplateInt__SWIG_1(TemplateInt.getCPtr(arg0), arg0), true);
  }

  public void foo() {
    featuresJNI.TemplateInt_foo(swigCPtr, this);
  }

  public void bar(int t) {
    featuresJNI.TemplateInt_bar(swigCPtr, this, t);
  }

  public SWIGTYPE_p_int get(int i) {
    return new SWIGTYPE_p_int(featuresJNI.TemplateInt_get(swigCPtr, this, i), false);
  }

  public void set(int t) {
    featuresJNI.TemplateInt_set(swigCPtr, this, t);
  }

}
