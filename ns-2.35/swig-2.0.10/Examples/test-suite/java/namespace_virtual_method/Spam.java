/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_virtual_method;

public class Spam extends Foo {
  private long swigCPtr;

  protected Spam(long cPtr, boolean cMemoryOwn) {
    super(namespace_virtual_methodJNI.Spam_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Spam obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_virtual_methodJNI.delete_Spam(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Spam() {
    this(namespace_virtual_methodJNI.new_Spam(), true);
  }

  public int bar(SWIGTYPE_p_A__B__Foo x) {
    return namespace_virtual_methodJNI.Spam_bar(swigCPtr, this, SWIGTYPE_p_A__B__Foo.getCPtr(x));
  }

}
