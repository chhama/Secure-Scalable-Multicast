/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_class;

public class PropertiesFile extends AudioPropertiesFile {
  private long swigCPtr;

  protected PropertiesFile(long cPtr, boolean cMemoryOwn) {
    super(namespace_classJNI.PropertiesFile_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PropertiesFile obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_classJNI.delete_PropertiesFile(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public PropertiesFile(File arg0) {
    this(namespace_classJNI.new_PropertiesFile__SWIG_0(File.getCPtr(arg0), arg0), true);
  }

  public PropertiesFile() {
    this(namespace_classJNI.new_PropertiesFile__SWIG_1(), true);
  }

}
