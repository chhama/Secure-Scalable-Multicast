/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package autodoc;

public class autodoc implements autodocConstants {
  public static int funk(A e, short arg1, int c, int d) {
    return autodocJNI.funk(A.getCPtr(e), e, arg1, c, d);
  }

  public static int funkdefaults(A e, short arg1, int c, int d, double f) {
    return autodocJNI.funkdefaults__SWIG_0(A.getCPtr(e), e, arg1, c, d, f);
  }

  public static int funkdefaults(A e, short arg1, int c, int d) {
    return autodocJNI.funkdefaults__SWIG_1(A.getCPtr(e), e, arg1, c, d);
  }

  public static int func_input(int INPUT) {
    return autodocJNI.func_input(INPUT);
  }

  public static int func_output(int[] OUTPUT) {
    return autodocJNI.func_output(OUTPUT);
  }

  public static int func_inout(int[] INOUT) {
    return autodocJNI.func_inout(INOUT);
  }

  public static int func_cb(int c, int d) {
    return autodocJNI.func_cb(c, d);
  }

  public static void banana(S a, S b, int c, int d) {
    autodocJNI.banana(S.getCPtr(a), a, S.getCPtr(b), b, c, d);
  }

}
