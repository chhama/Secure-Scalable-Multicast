/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_enum_typedef;

public class Module_UP {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Module_UP(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Module_UP obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_enum_typedefJNI.delete_Module_UP(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void get(Interface_UP arg) {
    template_enum_typedefJNI.Module_UP_get(swigCPtr, this, Interface_UP.getCPtr(arg), arg);
  }

  public Module_UP() {
    this(template_enum_typedefJNI.new_Module_UP(), true);
  }

  public final static Polarization P = Polarization.swigToEnum(template_enum_typedefJNI.Module_UP_P_get());
}