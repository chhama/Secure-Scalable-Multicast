/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package array_typedef_memberin;

public class ExampleDetail {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ExampleDetail(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ExampleDetail obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        array_typedef_memberinJNI.delete_ExampleDetail(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setNode_list(SWIGTYPE_p_short value) {
    array_typedef_memberinJNI.ExampleDetail_node_list_set(swigCPtr, this, SWIGTYPE_p_short.getCPtr(value));
  }

  public SWIGTYPE_p_short getNode_list() {
    long cPtr = array_typedef_memberinJNI.ExampleDetail_node_list_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_short(cPtr, false);
  }

  public SWIGTYPE_p_short getNode_list2() {
    long cPtr = array_typedef_memberinJNI.ExampleDetail_node_list2_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_short(cPtr, false);
  }

  public SWIGTYPE_p_short getNode_list3() {
    long cPtr = array_typedef_memberinJNI.ExampleDetail_node_list3_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_short(cPtr, false);
  }

  public void fn1(SWIGTYPE_p_short a) {
    array_typedef_memberinJNI.ExampleDetail_fn1(swigCPtr, this, SWIGTYPE_p_short.getCPtr(a));
  }

  public void fn2(SWIGTYPE_p_short a) {
    array_typedef_memberinJNI.ExampleDetail_fn2(swigCPtr, this, SWIGTYPE_p_short.getCPtr(a));
  }

  public void fn3(SWIGTYPE_p_short a) {
    array_typedef_memberinJNI.ExampleDetail_fn3(swigCPtr, this, SWIGTYPE_p_short.getCPtr(a));
  }

  public void fn4(SWIGTYPE_p_a_8__short a) {
    array_typedef_memberinJNI.ExampleDetail_fn4(swigCPtr, this, SWIGTYPE_p_a_8__short.getCPtr(a));
  }

  public void fn5(SWIGTYPE_p_a_8__short a) {
    array_typedef_memberinJNI.ExampleDetail_fn5(swigCPtr, this, SWIGTYPE_p_a_8__short.getCPtr(a));
  }

  public void fn6(SWIGTYPE_p_a_8__short a) {
    array_typedef_memberinJNI.ExampleDetail_fn6(swigCPtr, this, SWIGTYPE_p_a_8__short.getCPtr(a));
  }

  public void fn7(SWIGTYPE_p_p_a_8__short a) {
    array_typedef_memberinJNI.ExampleDetail_fn7(swigCPtr, this, SWIGTYPE_p_p_a_8__short.getCPtr(a));
  }

  public void fn8(SWIGTYPE_p_p_a_8__short a) {
    array_typedef_memberinJNI.ExampleDetail_fn8(swigCPtr, this, SWIGTYPE_p_p_a_8__short.getCPtr(a));
  }

  public void fn9(SWIGTYPE_p_p_a_8__short a) {
    array_typedef_memberinJNI.ExampleDetail_fn9(swigCPtr, this, SWIGTYPE_p_p_a_8__short.getCPtr(a));
  }

  public ExampleDetail() {
    this(array_typedef_memberinJNI.new_ExampleDetail(), true);
  }

}
