/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_nested;

public class T_NormalTemplateNormalClass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected T_NormalTemplateNormalClass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(T_NormalTemplateNormalClass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_nestedJNI.delete_T_NormalTemplateNormalClass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void tmethod(NormalClass t) {
    template_nestedJNI.T_NormalTemplateNormalClass_tmethod(swigCPtr, this, NormalClass.getCPtr(t), t);
  }

  public T_NormalTemplateNormalClass() {
    this(template_nestedJNI.new_T_NormalTemplateNormalClass(), true);
  }

}
