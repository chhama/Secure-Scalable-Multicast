/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enums;

public final class foo3 {
  public final static foo3 ABCDE = new foo3("ABCDE", enumsJNI.ABCDE_get());
  public final static foo3 FGHJI = new foo3("FGHJI", enumsJNI.FGHJI_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static foo3 swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + foo3.class + " with value " + swigValue);
  }

  private foo3(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private foo3(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private foo3(String swigName, foo3 swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static foo3[] swigValues = { ABCDE, FGHJI };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

