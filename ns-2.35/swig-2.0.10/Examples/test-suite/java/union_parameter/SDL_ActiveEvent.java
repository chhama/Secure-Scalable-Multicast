/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package union_parameter;

public class SDL_ActiveEvent {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SDL_ActiveEvent(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SDL_ActiveEvent obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        union_parameterJNI.delete_SDL_ActiveEvent(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setType(short value) {
    union_parameterJNI.SDL_ActiveEvent_type_set(swigCPtr, this, value);
  }

  public short getType() {
    return union_parameterJNI.SDL_ActiveEvent_type_get(swigCPtr, this);
  }

  public void setGain(short value) {
    union_parameterJNI.SDL_ActiveEvent_gain_set(swigCPtr, this, value);
  }

  public short getGain() {
    return union_parameterJNI.SDL_ActiveEvent_gain_get(swigCPtr, this);
  }

  public void setState(short value) {
    union_parameterJNI.SDL_ActiveEvent_state_set(swigCPtr, this, value);
  }

  public short getState() {
    return union_parameterJNI.SDL_ActiveEvent_state_get(swigCPtr, this);
  }

  public SDL_ActiveEvent() {
    this(union_parameterJNI.new_SDL_ActiveEvent(), true);
  }

}
