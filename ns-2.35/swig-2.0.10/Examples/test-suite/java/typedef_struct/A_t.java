/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typedef_struct;

public class A_t {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A_t(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A_t obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        typedef_structJNI.delete_A_t(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setA(int value) {
    typedef_structJNI.A_t_a_set(swigCPtr, this, value);
  }

  public int getA() {
    return typedef_structJNI.A_t_a_get(swigCPtr, this);
  }

  public void setB(int value) {
    typedef_structJNI.A_t_b_set(swigCPtr, this, value);
  }

  public int getB() {
    return typedef_structJNI.A_t_b_get(swigCPtr, this);
  }

  public A_t() {
    this(typedef_structJNI.new_A_t(), true);
  }

}