/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package apply_strings;

public class apply_stringsJNI {
  public final static native String UCharFunction(String jarg1);
  public final static native String SCharFunction(String jarg1);
  public final static native long CUCharFunction(long jarg1);
  public final static native long CSCharFunction(long jarg1);
  public final static native long CharFunction(long jarg1);
  public final static native long CCharFunction(long jarg1);
  public final static native void TNumber_DigitsMemberA_set(long jarg1, TNumber jarg1_, String jarg2);
  public final static native String TNumber_DigitsMemberA_get(long jarg1, TNumber jarg1_);
  public final static native void TNumber_DigitsMemberB_set(long jarg1, TNumber jarg1_, String jarg2);
  public final static native String TNumber_DigitsMemberB_get(long jarg1, TNumber jarg1_);
  public final static native long new_TNumber();
  public final static native void delete_TNumber(long jarg1);
  public final static native void DigitsGlobalA_set(String jarg1);
  public final static native String DigitsGlobalA_get();
  public final static native void DigitsGlobalB_set(String jarg1);
  public final static native String DigitsGlobalB_get();
  public final static native void DigitsGlobalC_set(String jarg1);
  public final static native String DigitsGlobalC_get();
  public final static native String DirectorTest_UCharFunction(long jarg1, DirectorTest jarg1_, String jarg2);
  public final static native String DirectorTest_UCharFunctionSwigExplicitDirectorTest(long jarg1, DirectorTest jarg1_, String jarg2);
  public final static native String DirectorTest_SCharFunction(long jarg1, DirectorTest jarg1_, String jarg2);
  public final static native String DirectorTest_SCharFunctionSwigExplicitDirectorTest(long jarg1, DirectorTest jarg1_, String jarg2);
  public final static native long DirectorTest_CUCharFunction(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CUCharFunctionSwigExplicitDirectorTest(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CSCharFunction(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CSCharFunctionSwigExplicitDirectorTest(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CharFunction(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CharFunctionSwigExplicitDirectorTest(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CCharFunction(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native long DirectorTest_CCharFunctionSwigExplicitDirectorTest(long jarg1, DirectorTest jarg1_, long jarg2);
  public final static native void delete_DirectorTest(long jarg1);
  public final static native long new_DirectorTest();
  public final static native void DirectorTest_director_connect(DirectorTest obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void DirectorTest_change_ownership(DirectorTest obj, long cptr, boolean take_or_release);

  public static String SwigDirector_DirectorTest_UCharFunction(DirectorTest self, String str) {
    return self.UCharFunction(str);
  }
  public static String SwigDirector_DirectorTest_SCharFunction(DirectorTest self, String str) {
    return self.SCharFunction(str);
  }
  public static long SwigDirector_DirectorTest_CUCharFunction(DirectorTest self, long str) {
    return SWIGTYPE_p_unsigned_char.getCPtr(self.CUCharFunction((str == 0) ? null : new SWIGTYPE_p_unsigned_char(str, false)));
  }
  public static long SwigDirector_DirectorTest_CSCharFunction(DirectorTest self, long str) {
    return SWIGTYPE_p_signed_char.getCPtr(self.CSCharFunction((str == 0) ? null : new SWIGTYPE_p_signed_char(str, false)));
  }
  public static long SwigDirector_DirectorTest_CharFunction(DirectorTest self, long buffer) {
    return SWIGTYPE_p_char.getCPtr(self.CharFunction((buffer == 0) ? null : new SWIGTYPE_p_char(buffer, false)));
  }
  public static long SwigDirector_DirectorTest_CCharFunction(DirectorTest self, long buffer) {
    return SWIGTYPE_p_char.getCPtr(self.CCharFunction((buffer == 0) ? null : new SWIGTYPE_p_char(buffer, false)));
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}
