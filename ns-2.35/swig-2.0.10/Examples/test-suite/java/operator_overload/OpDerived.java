/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package operator_overload;

public class OpDerived extends Op {
  private long swigCPtr;

  protected OpDerived(long cPtr, boolean cMemoryOwn) {
    super(operator_overloadJNI.OpDerived_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OpDerived obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        operator_overloadJNI.delete_OpDerived(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public OpDerived(int a) {
    this(operator_overloadJNI.new_OpDerived__SWIG_0(a), true);
  }

  public OpDerived() {
    this(operator_overloadJNI.new_OpDerived__SWIG_1(), true);
  }

  public int IntCast() {
    return operator_overloadJNI.OpDerived_IntCast(swigCPtr, this);
  }

}
