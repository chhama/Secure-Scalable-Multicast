/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package evil_diamond_prop;

public class bar extends foo {
  private long swigCPtr;

  protected bar(long cPtr, boolean cMemoryOwn) {
    super(evil_diamond_propJNI.bar_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        evil_diamond_propJNI.delete_bar(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public void set_bar(int value) {
    evil_diamond_propJNI.bar__bar_set(swigCPtr, this, value);
  }

  public int get_bar() {
    return evil_diamond_propJNI.bar__bar_get(swigCPtr, this);
  }

  public bar() {
    this(evil_diamond_propJNI.new_bar(), true);
  }

}
