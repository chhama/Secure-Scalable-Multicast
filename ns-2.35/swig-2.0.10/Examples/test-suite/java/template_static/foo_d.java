/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_static;

public class foo_d {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected foo_d(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(foo_d obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_staticJNI.delete_foo_d(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void setTest(int value) {
    template_staticJNI.foo_d_test_set(value);
  }

  public static int getTest() {
    return template_staticJNI.foo_d_test_get();
  }

  public foo_d() {
    this(template_staticJNI.new_foo_d(), true);
  }

}
