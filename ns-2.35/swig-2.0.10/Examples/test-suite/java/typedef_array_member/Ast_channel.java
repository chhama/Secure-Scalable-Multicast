/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typedef_array_member;

public class Ast_channel {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Ast_channel(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Ast_channel obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        typedef_array_memberJNI.delete_Ast_channel(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setJmp(SWIGTYPE_p_a_1__jbuf_tag value) {
    typedef_array_memberJNI.Ast_channel_jmp_set(swigCPtr, this, SWIGTYPE_p_a_1__jbuf_tag.getCPtr(value));
  }

  public SWIGTYPE_p_a_1__jbuf_tag getJmp() {
    long cPtr = typedef_array_memberJNI.Ast_channel_jmp_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_1__jbuf_tag(cPtr, false);
  }

  public Ast_channel() {
    this(typedef_array_memberJNI.new_Ast_channel(), true);
  }

}
