/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_default_arg;

public class Bar extends Hello_int {
  private long swigCPtr;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    super(template_default_argJNI.Bar_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_default_argJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Bar(long n) {
    this(template_default_argJNI.new_Bar(n), true);
  }

}
