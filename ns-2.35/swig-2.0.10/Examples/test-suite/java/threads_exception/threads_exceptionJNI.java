/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package threads_exception;

public class threads_exceptionJNI {
  public final static native long new_Exc(int jarg1, String jarg2);
  public final static native void Exc_code_set(long jarg1, Exc jarg1_, int jarg2);
  public final static native int Exc_code_get(long jarg1, Exc jarg1_);
  public final static native void Exc_msg_set(long jarg1, Exc jarg1_, String jarg2);
  public final static native String Exc_msg_get(long jarg1, Exc jarg1_);
  public final static native void delete_Exc(long jarg1);
  public final static native int Test_simple(long jarg1, Test jarg1_);
  public final static native int Test_message(long jarg1, Test jarg1_);
  public final static native int Test_hosed(long jarg1, Test jarg1_);
  public final static native int Test_unknown(long jarg1, Test jarg1_);
  public final static native int Test_multi(long jarg1, Test jarg1_, int jarg2);
  public final static native long new_Test();
  public final static native void delete_Test(long jarg1);
}