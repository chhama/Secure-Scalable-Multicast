/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package operator_overload;

public class operator_overload {
  public static Op And(Op a, Op b) {
    return new Op(operator_overloadJNI.And(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static Op Or(Op a, Op b) {
    return new Op(operator_overloadJNI.Or(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static Op Plus(Op a, Op b) {
    return new Op(operator_overloadJNI.Plus(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static Op Minus(Op a, Op b) {
    return new Op(operator_overloadJNI.Minus(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static Op Multiply(Op a, Op b) {
    return new Op(operator_overloadJNI.Multiply(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static Op Divide(Op a, Op b) {
    return new Op(operator_overloadJNI.Divide(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static Op Percent(Op a, Op b) {
    return new Op(operator_overloadJNI.Percent(Op.getCPtr(a), a, Op.getCPtr(b), b), true);
  }

  public static boolean EqualEqual(Op a, Op b) {
    return operator_overloadJNI.EqualEqual(Op.getCPtr(a), a, Op.getCPtr(b), b);
  }

  public static boolean NotEqual(Op a, Op b) {
    return operator_overloadJNI.NotEqual(Op.getCPtr(a), a, Op.getCPtr(b), b);
  }

  public static boolean LessThan(Op a, Op b) {
    return operator_overloadJNI.LessThan(Op.getCPtr(a), a, Op.getCPtr(b), b);
  }

  public static boolean LessThanEqual(Op a, Op b) {
    return operator_overloadJNI.LessThanEqual(Op.getCPtr(a), a, Op.getCPtr(b), b);
  }

  public static boolean GreaterThan(Op a, Op b) {
    return operator_overloadJNI.GreaterThan(Op.getCPtr(a), a, Op.getCPtr(b), b);
  }

  public static boolean GreaterThanEqual(Op a, Op b) {
    return operator_overloadJNI.GreaterThanEqual(Op.getCPtr(a), a, Op.getCPtr(b), b);
  }

}