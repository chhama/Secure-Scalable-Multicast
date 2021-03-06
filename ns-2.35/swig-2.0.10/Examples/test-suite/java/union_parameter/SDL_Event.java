/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package union_parameter;

public class SDL_Event {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SDL_Event(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SDL_Event obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        union_parameterJNI.delete_SDL_Event(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setType(short value) {
    union_parameterJNI.SDL_Event_type_set(swigCPtr, this, value);
  }

  public short getType() {
    return union_parameterJNI.SDL_Event_type_get(swigCPtr, this);
  }

  public void setActive(SDL_ActiveEvent value) {
    union_parameterJNI.SDL_Event_active_set(swigCPtr, this, SDL_ActiveEvent.getCPtr(value), value);
  }

  public SDL_ActiveEvent getActive() {
    long cPtr = union_parameterJNI.SDL_Event_active_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SDL_ActiveEvent(cPtr, false);
  }

  public void setKey(SDL_KeyboardEvent value) {
    union_parameterJNI.SDL_Event_key_set(swigCPtr, this, SDL_KeyboardEvent.getCPtr(value), value);
  }

  public SDL_KeyboardEvent getKey() {
    long cPtr = union_parameterJNI.SDL_Event_key_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SDL_KeyboardEvent(cPtr, false);
  }

  public SDL_Event() {
    this(union_parameterJNI.new_SDL_Event(), true);
  }

}
