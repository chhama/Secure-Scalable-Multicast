/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_class;

public class PropertiesFree extends AudioProperties {
  private long swigCPtr;

  protected PropertiesFree(long cPtr, boolean cMemoryOwn) {
    super(namespace_classJNI.PropertiesFree_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PropertiesFree obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_classJNI.delete_PropertiesFree(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public PropertiesFree(FLACFile arg0) {
    this(namespace_classJNI.new_PropertiesFree(FLACFile.getCPtr(arg0), arg0), true);
  }

}
