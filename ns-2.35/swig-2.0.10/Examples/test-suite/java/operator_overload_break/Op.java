/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package operator_overload_break;

public class Op {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Op(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Op obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        operator_overload_breakJNI.delete_Op(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Op(int n) {
    this(operator_overload_breakJNI.new_Op__SWIG_0(n), true);
  }

  public Op(Op other) {
    this(operator_overload_breakJNI.new_Op__SWIG_1(Op.getCPtr(other), other), true);
  }

  public boolean EqualEqual(Op rhs) {
    return operator_overload_breakJNI.Op_EqualEqual__SWIG_0(swigCPtr, this, Op.getCPtr(rhs), rhs);
  }

  public boolean EqualEqual(int i) {
    return operator_overload_breakJNI.Op_EqualEqual__SWIG_1(swigCPtr, this, i);
  }

  public Op Plus(Op rhs) {
    return new Op(operator_overload_breakJNI.Op_Plus__SWIG_0(swigCPtr, this, Op.getCPtr(rhs), rhs), true);
  }

  public Op Plus(int rhs) {
    return new Op(operator_overload_breakJNI.Op_Plus__SWIG_1(swigCPtr, this, rhs), true);
  }

  public Op Minus(Op rhs) {
    return new Op(operator_overload_breakJNI.Op_Minus__SWIG_0(swigCPtr, this, Op.getCPtr(rhs), rhs), true);
  }

  public Op Minus(int rhs) {
    return new Op(operator_overload_breakJNI.Op_Minus__SWIG_1(swigCPtr, this, rhs), true);
  }

  public Op __rsub__(int lhs) {
    return new Op(operator_overload_breakJNI.Op___rsub__(swigCPtr, this, lhs), true);
  }

  public Op PlusPlusPrefix() {
    return new Op(operator_overload_breakJNI.Op_PlusPlusPrefix(swigCPtr, this), false);
  }

  public void PrintK() {
    operator_overload_breakJNI.Op_PrintK(swigCPtr, this);
  }

  public void setK(int value) {
    operator_overload_breakJNI.Op_k_set(swigCPtr, this, value);
  }

  public int getK() {
    return operator_overload_breakJNI.Op_k_get(swigCPtr, this);
  }

}
