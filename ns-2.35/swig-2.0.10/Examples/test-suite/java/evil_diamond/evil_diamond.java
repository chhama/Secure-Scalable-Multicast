/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package evil_diamond;

public class evil_diamond {
  public static foo test(foo f) {
    long cPtr = evil_diamondJNI.test(foo.getCPtr(f), f);
    return (cPtr == 0) ? null : new foo(cPtr, false);
  }

}