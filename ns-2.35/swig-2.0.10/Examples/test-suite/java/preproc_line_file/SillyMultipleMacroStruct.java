/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package preproc_line_file;

public class SillyMultipleMacroStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SillyMultipleMacroStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SillyMultipleMacroStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        preproc_line_fileJNI.delete_SillyMultipleMacroStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setNum(int value) {
    preproc_line_fileJNI.SillyMultipleMacroStruct_num_set(swigCPtr, this, value);
  }

  public int getNum() {
    return preproc_line_fileJNI.SillyMultipleMacroStruct_num_get(swigCPtr, this);
  }

  public SillyMultipleMacroStruct() {
    this(preproc_line_fileJNI.new_SillyMultipleMacroStruct(), true);
  }

  public final static int LINE_NUM = 81;
}