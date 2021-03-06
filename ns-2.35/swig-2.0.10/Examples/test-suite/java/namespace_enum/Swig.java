/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_enum;

public final class Swig {
  public final static Swig LAGER = new Swig("LAGER");
  public final static Swig STOUT = new Swig("STOUT");
  public final static Swig ALE = new Swig("ALE");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static Swig swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + Swig.class + " with value " + swigValue);
  }

  private Swig(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private Swig(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private Swig(String swigName, Swig swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static Swig[] swigValues = { LAGER, STOUT, ALE };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

