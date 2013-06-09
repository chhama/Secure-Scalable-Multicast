/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package arrays_global;

public final class finger {
  public final static finger One = new finger("One");
  public final static finger Two = new finger("Two");
  public final static finger Three = new finger("Three");
  public final static finger Four = new finger("Four");
  public final static finger Five = new finger("Five");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static finger swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + finger.class + " with value " + swigValue);
  }

  private finger(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private finger(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private finger(String swigName, finger swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static finger[] swigValues = { One, Two, Three, Four, Five };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

