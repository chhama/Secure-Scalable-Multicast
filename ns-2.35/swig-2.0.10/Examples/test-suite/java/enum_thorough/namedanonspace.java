/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough;

public final class namedanonspace {
  public final static namedanonspace NamedAnonSpace1 = new namedanonspace("NamedAnonSpace1");
  public final static namedanonspace NamedAnonSpace2 = new namedanonspace("NamedAnonSpace2");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static namedanonspace swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + namedanonspace.class + " with value " + swigValue);
  }

  private namedanonspace(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private namedanonspace(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private namedanonspace(String swigName, namedanonspace swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static namedanonspace[] swigValues = { NamedAnonSpace1, NamedAnonSpace2 };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}
