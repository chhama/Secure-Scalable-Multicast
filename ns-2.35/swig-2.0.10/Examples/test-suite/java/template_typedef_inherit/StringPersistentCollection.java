/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_inherit;

public class StringPersistentCollection {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected StringPersistentCollection(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(StringPersistentCollection obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typedef_inheritJNI.delete_StringPersistentCollection(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void add(String elt) {
    template_typedef_inheritJNI.StringPersistentCollection_add(swigCPtr, this, elt);
  }

  public StringPersistentCollection() {
    this(template_typedef_inheritJNI.new_StringPersistentCollection(), true);
  }

}
