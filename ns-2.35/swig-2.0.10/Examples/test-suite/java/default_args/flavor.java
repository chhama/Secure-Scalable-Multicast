/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_args;

public final class flavor {
  public final static flavor BITTER = new flavor("BITTER");
  public final static flavor SWEET = new flavor("SWEET");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static flavor swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + flavor.class + " with value " + swigValue);
  }

  private flavor(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private flavor(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private flavor(String swigName, flavor swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static flavor[] swigValues = { BITTER, SWEET };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

