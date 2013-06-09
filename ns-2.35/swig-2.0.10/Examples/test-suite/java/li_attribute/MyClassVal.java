/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_attribute;

public class MyClassVal {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MyClassVal(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MyClassVal obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_attributeJNI.delete_MyClassVal(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setReadWriteFoo(MyFoo value) {
    li_attributeJNI.MyClassVal_ReadWriteFoo_set(swigCPtr, this, MyFoo.getCPtr(value), value);
  }

  public MyFoo getReadWriteFoo() {
    long cPtr = li_attributeJNI.MyClassVal_ReadWriteFoo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new MyFoo(cPtr, true);
  }

  public MyFoo getReadOnlyFoo() {
    long cPtr = li_attributeJNI.MyClassVal_ReadOnlyFoo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new MyFoo(cPtr, true);
  }

  public MyClassVal() {
    this(li_attributeJNI.new_MyClassVal(), true);
  }

}
