/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_enum;

public class foo_i {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected foo_i(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(foo_i obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_enumJNI.delete_foo_i(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public foo_i() {
    this(template_enumJNI.new_foo_i(), true);
  }

  public final static int FOO = template_enumJNI.foo_i_FOO_get();
  public final static int BAR = template_enumJNI.foo_i_BAR_get();

}
