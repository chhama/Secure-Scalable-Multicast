/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_default_class_parms;

public class FooAnotherType {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FooAnotherType(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FooAnotherType obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_default_class_parmsJNI.delete_FooAnotherType(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setTType(AnotherType value) {
    template_default_class_parmsJNI.FooAnotherType_TType_set(swigCPtr, this, AnotherType.getCPtr(value), value);
  }

  public AnotherType getTType() {
    long cPtr = template_default_class_parmsJNI.FooAnotherType_TType_get(swigCPtr, this);
    return (cPtr == 0) ? null : new AnotherType(cPtr, false);
  }

  public FooAnotherType(AnotherType t) {
    this(template_default_class_parmsJNI.new_FooAnotherType(AnotherType.getCPtr(t), t), true);
  }

  public AnotherType method(AnotherType t) {
    return new AnotherType(template_default_class_parmsJNI.FooAnotherType_method(swigCPtr, this, AnotherType.getCPtr(t), t), true);
  }

}