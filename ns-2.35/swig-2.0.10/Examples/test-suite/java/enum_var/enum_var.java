/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_var;

public class enum_var {
  public static void setTest(Fruit value) {
    enum_varJNI.test_set(value.swigValue());
  }

  public static Fruit getTest() {
    return Fruit.swigToEnum(enum_varJNI.test_get());
  }

}
