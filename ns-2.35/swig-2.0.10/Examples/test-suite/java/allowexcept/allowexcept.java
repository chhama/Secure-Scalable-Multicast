/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package allowexcept;

public class allowexcept {
  public static void setUvw_global_variable(UVW value) {
    allowexceptJNI.uvw_global_variable_set(UVW.getCPtr(value), value);
  }

  public static UVW getUvw_global_variable() {
    long cPtr = allowexceptJNI.uvw_global_variable_get();
    return (cPtr == 0) ? null : new UVW(cPtr, false);
  }

  public static void setGlobal_variable(XYZ value) {
    allowexceptJNI.global_variable_set(XYZ.getCPtr(value), value);
  }

  public static XYZ getGlobal_variable() {
    long cPtr = allowexceptJNI.global_variable_get();
    return (cPtr == 0) ? null : new XYZ(cPtr, false);
  }

}
