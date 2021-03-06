/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_macro;

public final class Greeks6 {
  public final static Greeks6 alpha6 = new Greeks6("alpha6");
  public final static Greeks6 beta6 = new Greeks6("beta6");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static Greeks6 swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + Greeks6.class + " with value " + swigValue);
  }

  private Greeks6(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private Greeks6(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private Greeks6(String swigName, Greeks6 swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static Greeks6[] swigValues = { alpha6, beta6 };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

