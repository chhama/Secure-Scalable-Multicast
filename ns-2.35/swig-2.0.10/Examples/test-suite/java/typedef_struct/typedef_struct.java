/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typedef_struct;

public class typedef_struct implements typedef_structConstants {
  public static A_t make_a() {
    long cPtr = typedef_structJNI.make_a();
    return (cPtr == 0) ? null : new A_t(cPtr, false);
  }

  public static SWIGTYPE_p_B_t make_b() {
    return new SWIGTYPE_p_B_t(typedef_structJNI.make_b(), true);
  }

}
