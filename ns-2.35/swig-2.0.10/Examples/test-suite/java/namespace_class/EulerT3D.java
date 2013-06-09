/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_class;

public class EulerT3D {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected EulerT3D(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(EulerT3D obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_classJNI.delete_EulerT3D(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void hello() {
    namespace_classJNI.EulerT3D_hello();
  }

  public static void toFrame(int frame_, int v_, int vRes) {
    namespace_classJNI.EulerT3D_toFrame(frame_, v_, vRes);
  }

  public void callint(SWIGTYPE_p_int x) {
    namespace_classJNI.EulerT3D_callint(swigCPtr, this, SWIGTYPE_p_int.getCPtr(x));
  }

  public void lessint(SWIGTYPE_p_int x) {
    namespace_classJNI.EulerT3D_lessint(swigCPtr, this, SWIGTYPE_p_int.getCPtr(x));
  }

  public void callfooi(FooT_i x) {
    namespace_classJNI.EulerT3D_callfooi(swigCPtr, this, FooT_i.getCPtr(x), x);
  }

  public void lessfooi(FooT_i x) {
    namespace_classJNI.EulerT3D_lessfooi(swigCPtr, this, FooT_i.getCPtr(x), x);
  }

  public EulerT3D() {
    this(namespace_classJNI.new_EulerT3D(), true);
  }

}
