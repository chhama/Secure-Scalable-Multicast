/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_typemaps_proxy;
import java.math.*;
public class With {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected With(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(With obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_typemaps_proxyJNI.delete_With(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public With(With p) {
    this(java_typemaps_proxyJNI.new_With(With.getCPtr(p), p), true);
  }

  public static void static_method(With p) {
    java_typemaps_proxyJNI.With_static_method(With.getCPtr(p), p);
  }

  public void member_method(With p) {
    java_typemaps_proxyJNI.With_member_method(swigCPtr, this, With.getCPtr(p), p);
  }

}
