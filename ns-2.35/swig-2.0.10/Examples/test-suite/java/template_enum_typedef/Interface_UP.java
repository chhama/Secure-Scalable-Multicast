/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_enum_typedef;

public class Interface_UP {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Interface_UP(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Interface_UP obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_enum_typedefJNI.delete_Interface_UP(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Interface_UP() {
    this(template_enum_typedefJNI.new_Interface_UP(), true);
  }

}
