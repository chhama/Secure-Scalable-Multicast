/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename_pcre_enum;

public enum Foo {
  First(rename_pcre_enumJNI.First_get()),
  Second;

  public final int swigValue() {
    return swigValue;
  }

  public static Foo swigToEnum(int swigValue) {
    Foo[] swigValues = Foo.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (Foo swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + Foo.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private Foo() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private Foo(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private Foo(Foo swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

