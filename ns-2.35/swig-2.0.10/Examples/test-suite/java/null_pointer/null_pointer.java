/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package null_pointer;

public class null_pointer {
  public static boolean func(A a) {
    return null_pointerJNI.func(A.getCPtr(a), a);
  }

  public static A getnull() {
    long cPtr = null_pointerJNI.getnull();
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

}
