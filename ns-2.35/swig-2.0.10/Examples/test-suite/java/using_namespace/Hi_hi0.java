/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_namespace;

public class Hi_hi0 extends Hello {
  private long swigCPtr;

  protected Hi_hi0(long cPtr, boolean cMemoryOwn) {
    super(using_namespaceJNI.Hi_hi0_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Hi_hi0 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using_namespaceJNI.delete_Hi_hi0(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int value1() {
    return using_namespaceJNI.Hi_hi0_value1(swigCPtr, this);
  }

  public int value2() {
    return using_namespaceJNI.Hi_hi0_value2(swigCPtr, this);
  }

  public Hi_hi0() {
    this(using_namespaceJNI.new_Hi_hi0(), true);
  }

}