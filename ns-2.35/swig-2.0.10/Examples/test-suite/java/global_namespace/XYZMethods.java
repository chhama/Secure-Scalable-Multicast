/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_namespace;

public class XYZMethods {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XYZMethods(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XYZMethods obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        global_namespaceJNI.delete_XYZMethods(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void methodA(XYZ1 v, XYZ2 cv, XYZ3 cp, XYZ4 p, XYZ5 cr, XYZ6 r, XYZ7 pr) {
    global_namespaceJNI.XYZMethods_methodA(XYZ1.getCPtr(v), v, XYZ2.getCPtr(cv), cv, XYZ3.getCPtr(cp), cp, XYZ4.getCPtr(p), p, XYZ5.getCPtr(cr), cr, XYZ6.getCPtr(r), r, XYZ7.getCPtr(pr), pr);
  }

  public static void methodB(XYZ1 v, XYZ2 cv, XYZ3 cp, XYZ4 p, XYZ5 cr, XYZ6 r, XYZ7 pr) {
    global_namespaceJNI.XYZMethods_methodB(XYZ1.getCPtr(v), v, XYZ2.getCPtr(cv), cv, XYZ3.getCPtr(cp), cp, XYZ4.getCPtr(p), p, XYZ5.getCPtr(cr), cr, XYZ6.getCPtr(r), r, XYZ7.getCPtr(pr), pr);
  }

  public XYZMethods() {
    this(global_namespaceJNI.new_XYZMethods(), true);
  }

}
