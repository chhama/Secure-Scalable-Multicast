/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_namespace;

public class AnEnumMethods {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected AnEnumMethods(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AnEnumMethods obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        global_namespaceJNI.delete_AnEnumMethods(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void methodA(AnEnum1 v, AnEnum2 cv, AnEnum3 cr) {
    global_namespaceJNI.AnEnumMethods_methodA(v.swigValue(), cv.swigValue(), cr.swigValue());
  }

  public static void methodB(AnEnum1 v, AnEnum2 cv, AnEnum3 cr) {
    global_namespaceJNI.AnEnumMethods_methodB(v.swigValue(), cv.swigValue(), cr.swigValue());
  }

  public AnEnumMethods() {
    this(global_namespaceJNI.new_AnEnumMethods(), true);
  }

}
