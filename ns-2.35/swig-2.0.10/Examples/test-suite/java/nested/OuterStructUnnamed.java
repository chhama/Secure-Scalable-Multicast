/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nested;

public class OuterStructUnnamed {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected OuterStructUnnamed(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OuterStructUnnamed obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        nestedJNI.delete_OuterStructUnnamed(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public OuterStructUnnamed_inner_struct_unnamed getInner_struct_unnamed() {
    long cPtr = nestedJNI.OuterStructUnnamed_inner_struct_unnamed_get(swigCPtr, this);
    return (cPtr == 0) ? null : new OuterStructUnnamed_inner_struct_unnamed(cPtr, false);
  }

  public OuterStructUnnamed_inner_union_unnamed getInner_union_unnamed() {
    long cPtr = nestedJNI.OuterStructUnnamed_inner_union_unnamed_get(swigCPtr, this);
    return (cPtr == 0) ? null : new OuterStructUnnamed_inner_union_unnamed(cPtr, false);
  }

  public OuterStructUnnamed() {
    this(nestedJNI.new_OuterStructUnnamed(), true);
  }

}
