/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_inherit;

public class DescriptionImplementation extends StringPersistentCollection {
  private long swigCPtr;

  protected DescriptionImplementation(long cPtr, boolean cMemoryOwn) {
    super(template_typedef_inheritJNI.DescriptionImplementation_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DescriptionImplementation obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_inheritJNI.delete_DescriptionImplementation(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public DescriptionImplementation() {
    this(template_typedef_inheritJNI.new_DescriptionImplementation(), true);
  }

}
