/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_class_template;

public class A {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_class_templateJNI.delete_A(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setVal(int value) {
    template_typedef_class_templateJNI.A_val_set(swigCPtr, this, value);
  }

  public int getVal() {
    return template_typedef_class_templateJNI.A_val_get(swigCPtr, this);
  }

  public A(int v) {
    this(template_typedef_class_templateJNI.new_A__SWIG_0(v), true);
  }

  public A() {
    this(template_typedef_class_templateJNI.new_A__SWIG_1(), true);
  }

}
