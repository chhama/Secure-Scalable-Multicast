/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package lextype;

public class lextype implements lextypeConstants {
  public static void eat(SWIGTYPE_p_void g) {
    lextypeJNI.eat(SWIGTYPE_p_void.getCPtr(g));
  }

  public static void drink(SWIGTYPE_p_p_void g) {
    lextypeJNI.drink(SWIGTYPE_p_p_void.getCPtr(g));
  }

  public static SWIGTYPE_p_void mate(SWIGTYPE_p_p_void g) {
    long cPtr = lextypeJNI.mate(SWIGTYPE_p_p_void.getCPtr(g));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

}