/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package union_parameter;

public class union_parameterJNI {
  public final static native void SDL_ActiveEvent_type_set(long jarg1, SDL_ActiveEvent jarg1_, short jarg2);
  public final static native short SDL_ActiveEvent_type_get(long jarg1, SDL_ActiveEvent jarg1_);
  public final static native void SDL_ActiveEvent_gain_set(long jarg1, SDL_ActiveEvent jarg1_, short jarg2);
  public final static native short SDL_ActiveEvent_gain_get(long jarg1, SDL_ActiveEvent jarg1_);
  public final static native void SDL_ActiveEvent_state_set(long jarg1, SDL_ActiveEvent jarg1_, short jarg2);
  public final static native short SDL_ActiveEvent_state_get(long jarg1, SDL_ActiveEvent jarg1_);
  public final static native long new_SDL_ActiveEvent();
  public final static native void delete_SDL_ActiveEvent(long jarg1);
  public final static native void SDL_KeyboardEvent_type_set(long jarg1, SDL_KeyboardEvent jarg1_, short jarg2);
  public final static native short SDL_KeyboardEvent_type_get(long jarg1, SDL_KeyboardEvent jarg1_);
  public final static native void SDL_KeyboardEvent_which_set(long jarg1, SDL_KeyboardEvent jarg1_, int jarg2);
  public final static native int SDL_KeyboardEvent_which_get(long jarg1, SDL_KeyboardEvent jarg1_);
  public final static native void SDL_KeyboardEvent_state_set(long jarg1, SDL_KeyboardEvent jarg1_, int jarg2);
  public final static native int SDL_KeyboardEvent_state_get(long jarg1, SDL_KeyboardEvent jarg1_);
  public final static native long new_SDL_KeyboardEvent();
  public final static native void delete_SDL_KeyboardEvent(long jarg1);
  public final static native void SDL_Event_type_set(long jarg1, SDL_Event jarg1_, short jarg2);
  public final static native short SDL_Event_type_get(long jarg1, SDL_Event jarg1_);
  public final static native void SDL_Event_active_set(long jarg1, SDL_Event jarg1_, long jarg2, SDL_ActiveEvent jarg2_);
  public final static native long SDL_Event_active_get(long jarg1, SDL_Event jarg1_);
  public final static native void SDL_Event_key_set(long jarg1, SDL_Event jarg1_, long jarg2, SDL_KeyboardEvent jarg2_);
  public final static native long SDL_Event_key_get(long jarg1, SDL_Event jarg1_);
  public final static native long new_SDL_Event();
  public final static native void delete_SDL_Event(long jarg1);
  public final static native int SDL_PollEvent(long jarg1, SDL_Event jarg1_);
}
