/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_basic;

public class template_basic {
  public static int maxint(int a, int b) {
    return template_basicJNI.maxint(a, b);
  }

  public static double maxdouble(double a, double b) {
    return template_basicJNI.maxdouble(a, b);
  }

  public static SWIGTYPE_p_a_10__int maxintp(SWIGTYPE_p_a_10__int a, SWIGTYPE_p_a_10__int b) {
    long cPtr = template_basicJNI.maxintp(SWIGTYPE_p_a_10__int.getCPtr(a), SWIGTYPE_p_a_10__int.getCPtr(b));
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_10__int(cPtr, false);
  }

}
