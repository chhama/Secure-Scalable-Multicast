/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_namespace;

public final class TheEnum1 {
  public final static TheEnum1 theenum1 = new TheEnum1("theenum1");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static TheEnum1 swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + TheEnum1.class + " with value " + swigValue);
  }

  private TheEnum1(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private TheEnum1(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private TheEnum1(String swigName, TheEnum1 swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static TheEnum1[] swigValues = { theenum1 };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

