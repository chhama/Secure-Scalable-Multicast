/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package static_const_member_2;

public class Test_int extends CavityPackFlags {
  private long swigCPtr;

  protected Test_int(long cPtr, boolean cMemoryOwn) {
    super(static_const_member_2JNI.Test_int_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Test_int obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        static_const_member_2JNI.delete_Test_int(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Test_int() {
    this(static_const_member_2JNI.new_Test_int(), true);
  }

  public final static int LeftIndex = static_const_member_2JNI.Test_int_LeftIndex_get();
  public final static int RightIndex = static_const_member_2JNI.Test_int_RightIndex_get();

  public final static long current_profile = static_const_member_2JNI.Test_int_current_profile_get();
}
