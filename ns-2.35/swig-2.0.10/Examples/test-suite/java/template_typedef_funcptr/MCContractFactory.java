/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_funcptr;

public class MCContractFactory {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MCContractFactory(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MCContractFactory obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_funcptrJNI.delete_MCContractFactory(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static MCContractFactory getInstance() {
    return new MCContractFactory(template_typedef_funcptrJNI.MCContractFactory_getInstance(), false);
  }

  public MCContractFactory() {
    this(template_typedef_funcptrJNI.new_MCContractFactory(), true);
  }

}
