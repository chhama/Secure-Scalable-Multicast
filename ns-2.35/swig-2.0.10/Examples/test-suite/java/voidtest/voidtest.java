/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package voidtest;

public class voidtest {
  public static void globalfunc() {
    voidtestJNI.globalfunc();
  }

  public static SWIGTYPE_p_void vfunc1(SWIGTYPE_p_void f) {
    long cPtr = voidtestJNI.vfunc1(SWIGTYPE_p_void.getCPtr(f));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static SWIGTYPE_p_void vfunc2(Foo f) {
    long cPtr = voidtestJNI.vfunc2(Foo.getCPtr(f), f);
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static Foo vfunc3(SWIGTYPE_p_void f) {
    long cPtr = voidtestJNI.vfunc3(SWIGTYPE_p_void.getCPtr(f));
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

  public static Foo vfunc4(Foo f) {
    long cPtr = voidtestJNI.vfunc4(Foo.getCPtr(f), f);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

}