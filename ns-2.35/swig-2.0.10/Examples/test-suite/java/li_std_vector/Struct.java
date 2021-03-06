/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector;

public class Struct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Struct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Struct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_vectorJNI.delete_Struct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setNum(double value) {
    li_std_vectorJNI.Struct_num_set(swigCPtr, this, value);
  }

  public double getNum() {
    return li_std_vectorJNI.Struct_num_get(swigCPtr, this);
  }

  public Struct() {
    this(li_std_vectorJNI.new_Struct__SWIG_0(), true);
  }

  public Struct(double d) {
    this(li_std_vectorJNI.new_Struct__SWIG_1(d), true);
  }

}
