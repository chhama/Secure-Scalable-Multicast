/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_ns;

public class pairii {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected pairii(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(pairii obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_nsJNI.delete_pairii(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setFirst(int value) {
    template_nsJNI.pairii_first_set(swigCPtr, this, value);
  }

  public int getFirst() {
    return template_nsJNI.pairii_first_get(swigCPtr, this);
  }

  public void setSecond(int value) {
    template_nsJNI.pairii_second_set(swigCPtr, this, value);
  }

  public int getSecond() {
    return template_nsJNI.pairii_second_get(swigCPtr, this);
  }

  public pairii(int __a, int __b) {
    this(template_nsJNI.new_pairii__SWIG_0(__a, __b), true);
  }

  public pairii(pairii __p) {
    this(template_nsJNI.new_pairii__SWIG_1(pairii.getCPtr(__p), __p), true);
  }

}