#include "jni.h"
#include "SDL_config.h"
#include "SDL_stdinc.h"
 

extern "C" {
    int Java_org_libsdl_app_SDLActivity_nativeInit(JNIEnv* env, jclass cls, jobject obj);
    void Java_org_libsdl_app_SDLActivity_nativeLowMemory(JNIEnv* env, jclass cls);
    void Java_org_libsdl_app_SDLActivity_nativeQuit(JNIEnv* env, jclass cls);
    void Java_org_libsdl_app_SDLActivity_nativePause(JNIEnv* env, jclass cls);
    void Java_org_libsdl_app_SDLActivity_nativeResume(JNIEnv* env, jclass cls);
    void Java_org_libsdl_app_SDLActivity_onNativeDropFile(JNIEnv* env, jclass cls,jstring filename);
    void Java_org_libsdl_app_SDLActivity_onNativeResize(JNIEnv* env, jclass jcls,jint x, jint y, jint format,jfloat rate);
    int Java_org_libsdl_app_SDLActivity_onNativePadDown(JNIEnv* env, jclass jcls,jint device_id,jint keycode);
    int Java_org_libsdl_app_SDLActivity_onNativePadUp(JNIEnv* env, jclass jcls,jint device_id,jint keycode);
    void Java_org_libsdl_app_SDLActivity_onNativeJoy(JNIEnv* env, jclass jcls,jint device_id,jint axis,jfloat value);
    void Java_org_libsdl_app_SDLActivity_onNativeHat(JNIEnv* env, jclass jcls,jint device_id, jint hat_id,jint x, jint y);
    void Java_org_libsdl_app_SDLActivity_onNativeKeyDown(JNIEnv* env, jclass jcls, jint keycode);
    void Java_org_libsdl_app_SDLActivity_onNativeKeyUp(JNIEnv* env, jclass jcls, jint keycode);
    void Java_org_libsdl_app_SDLActivity_onNativeKeyboardFocusLost(JNIEnv* env, jclass jcls);
    void Java_org_libsdl_app_SDLActivity_onNativeMouse(JNIEnv* env, jclass jcls,jint button, jint action, jfloat x, jfloat y);
    void Java_org_libsdl_app_SDLActivity_onNativeTouch(JNIEnv* env, jclass jcls,jint touchDevId, jint pointerFingerId,jint action, jfloat x, jfloat y, jfloat p);
    void Java_org_libsdl_app_SDLActivity_onNativeAccel(JNIEnv* env, jclass jcls,jfloat x, jfloat y, jfloat z);
    void Java_org_libsdl_app_SDLActivity_onNativeSurfaceChanged(JNIEnv* env, jclass jcls);
    void Java_org_libsdl_app_SDLActivity_onNativeSurfaceDestroyed(JNIEnv* env, jclass jcls);
    int Java_org_libsdl_app_SDLActivity_nativeAddJoystick(JNIEnv* env, jclass jcls,jint device_id, jstring name,jint is_accelerometer, jint nbuttons,jint naxes, jint nhats, jint nballs);
    int Java_org_libsdl_app_SDLActivity_nativeRemoveJoystick(JNIEnv* env, jclass jcls,jint device_id);
    jstring Java_org_libsdl_app_SDLActivity_nativeGetHint(JNIEnv* env, jclass jcls,jstring name);
};

extern "C" int Java_ru_vladivanov_game_SDLActivity_nativeInit(JNIEnv* env, jclass cls, jobject obj)
{
	return Java_org_libsdl_app_SDLActivity_nativeInit(env, cls, obj);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_nativeLowMemory(JNIEnv* env, jclass cls)
{
	Java_org_libsdl_app_SDLActivity_nativeLowMemory(env,cls);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_nativeQuit(JNIEnv* env, jclass cls)
{
	Java_org_libsdl_app_SDLActivity_nativeQuit(env,cls);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_nativePause(JNIEnv* env, jclass cls)
{
	Java_org_libsdl_app_SDLActivity_nativePause( env, cls);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_nativeResume(JNIEnv* env, jclass cls)
{
	Java_org_libsdl_app_SDLActivity_nativeResume( env, cls);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeDropFile(JNIEnv* env, jclass cls,jstring filename)
{
	Java_org_libsdl_app_SDLActivity_onNativeDropFile(env, cls, filename);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeResize(JNIEnv* env, jclass jcls,jint x, jint y, jint format,jfloat rate)
{
	Java_org_libsdl_app_SDLActivity_onNativeResize(env,jcls,x,y,format,rate);
}
extern "C" int Java_ru_vladivanov_game_SDLActivity_onNativePadDown(JNIEnv* env, jclass jcls,jint device_id,jint keycode)
{
	return Java_org_libsdl_app_SDLActivity_onNativePadDown(env,jcls,device_id, keycode);
}
extern "C" int Java_ru_vladivanov_game_SDLActivity_onNativePadUp(JNIEnv* env, jclass jcls,jint device_id,jint keycode)
{
	return Java_org_libsdl_app_SDLActivity_onNativePadUp(env,jcls,device_id, keycode);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeJoy(JNIEnv* env, jclass jcls,jint device_id,jint axis,jfloat value)
{
	Java_org_libsdl_app_SDLActivity_onNativeJoy( env, jcls, device_id, axis, value);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeHat(JNIEnv* env, jclass jcls,jint device_id, jint hat_id,jint x, jint y)
{
	Java_org_libsdl_app_SDLActivity_onNativeHat( env, jcls, device_id,  hat_id, x,  y);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeKeyDown(JNIEnv* env, jclass jcls, jint keycode)
{
	Java_org_libsdl_app_SDLActivity_onNativeKeyDown( env,  jcls,  keycode);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeKeyUp(JNIEnv* env, jclass jcls, jint keycode)
{
	Java_org_libsdl_app_SDLActivity_onNativeKeyUp( env,  jcls,  keycode);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeKeyboardFocusLost(JNIEnv* env, jclass cls)
{
	Java_org_libsdl_app_SDLActivity_onNativeKeyboardFocusLost(env,cls);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeMouse(JNIEnv* env, jclass jcls,jint button, jint action, jfloat x, jfloat y)
{
	Java_org_libsdl_app_SDLActivity_onNativeMouse(env,  jcls, button, action,  x,  y);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeTouch(JNIEnv* env, jclass jcls,jint touchDevId, jint pointerFingerId,jint action, jfloat x, jfloat y, jfloat p)
{
	Java_org_libsdl_app_SDLActivity_onNativeTouch( env, jcls, touchDevId, pointerFingerId, action,  x,  y, p);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeAccel(JNIEnv* env, jclass jcls,jfloat x, jfloat y, jfloat z)
{
	Java_org_libsdl_app_SDLActivity_onNativeAccel( env,  jcls, x, y, z);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeSurfaceChanged(JNIEnv* env, jclass jcls)
{
	Java_org_libsdl_app_SDLActivity_onNativeSurfaceChanged(env, jcls);
}
extern "C" void Java_ru_vladivanov_game_SDLActivity_onNativeSurfaceDestroyed(JNIEnv* env, jclass jcls)
{
	Java_org_libsdl_app_SDLActivity_onNativeSurfaceDestroyed(env, jcls);
}
extern "C" int Java_ru_vladivanov_game_SDLActivity_nativeAddJoystick(JNIEnv* env, jclass jcls,jint device_id, jstring name,jint is_accelerometer, jint nbuttons,jint naxes, jint nhats, jint nballs)
{
	return Java_org_libsdl_app_SDLActivity_nativeAddJoystick( env,  jcls, device_id,  name, is_accelerometer,  nbuttons, naxes,  nhats,  nballs);
}
extern "C" int Java_ru_vladivanov_game_SDLActivity_nativeRemoveJoystick(JNIEnv* env, jclass jcls,jint device_id)
{
	return Java_org_libsdl_app_SDLActivity_nativeRemoveJoystick( env,  jcls, device_id);
}
extern "C" jstring Java_ru_vladivanov_game_SDLActivity_nativeGetHint(JNIEnv* env, jclass jcls,jstring name)
{
	return Java_org_libsdl_app_SDLActivity_nativeGetHint( env,  jcls, name);
}

























