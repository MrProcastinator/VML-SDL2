/* SDL2# - C# Wrapper for SDL2
 *
 * Copyright (c) 2013-2024 Ethan Lee.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software in a
 * product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * Ethan "flibitijibibo" Lee <flibitijibibo@flibitijibibo.com>
 *
 */
#include <vitasdk.h>

#include <mono/metadata/appdomain.h>
#include <mono/mini/jit.h>

#include <VML/VMLTools.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_stdinc.h>

extern void** mono_aot_module_SDL2_info;

/* Array marshal functions */

int SDL_GetWindowGammaRamp_wrapped(SDL_Window *window, Uint16 *red, Uint16 *green, Uint16 *blue)
{
    return SDL_GetWindowGammaRamp(window, VML_MARSHAL_ARRAY(Uint16, red), VML_MARSHAL_ARRAY(Uint16, green), VML_MARSHAL_ARRAY(Uint16, blue));
}

int SDL_SetWindowGammaRamp_wrapped(SDL_Window *window, const Uint16 *red, const Uint16 *green, const Uint16 *blue)
{
    return SDL_SetWindowGammaRamp(window, VML_MARSHAL_ARRAY(Uint16, red), VML_MARSHAL_ARRAY(Uint16, green), VML_MARSHAL_ARRAY(Uint16, blue));
}

int SDL_UpdateWindowSurfaceRects_wrapped(SDL_Window *window, const SDL_Rect *rects, int numrects)
{
    return SDL_UpdateWindowSurfaceRects(window, VML_MARSHAL_ARRAY(SDL_Rect, rects), numrects);
}

int SDL_RenderDrawLines_wrapped(SDL_Renderer *renderer, const SDL_Point *points, int count)
{
    return SDL_RenderDrawLines(renderer, VML_MARSHAL_ARRAY(SDL_Point, points), count);
}

int SDL_RenderDrawPoints_wrapped(SDL_Renderer *renderer, const SDL_Point *points, int count)
{
    return SDL_RenderDrawPoints(renderer, VML_MARSHAL_ARRAY(SDL_Point, points), count);
}

int SDL_RenderDrawRects_wrapped(SDL_Renderer *renderer, const SDL_Rect *rects, int count)
{
    return SDL_RenderDrawRects(renderer, VML_MARSHAL_ARRAY(SDL_Rect, rects), count);
}

int SDL_RenderFillRects_wrapped(SDL_Renderer *renderer, const SDL_Rect *rects, int count)
{
    return SDL_RenderFillRects(renderer, VML_MARSHAL_ARRAY(SDL_Rect, rects), count);
}

int SDL_RenderGeometry_wrapped(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Vertex *verts, int numverts, const int *indices, int numindices)
{
    return SDL_RenderGeometry(renderer, texture, VML_MARSHAL_ARRAY(SDL_Vertex, verts), numverts, VML_MARSHAL_ARRAY(int, indices), numindices);
}

int SDL_RenderGeometryRaw_wrapped(SDL_Renderer *renderer, SDL_Texture *texture, const float *xy, int xy_stride, const SDL_Color *color, int color_stride, const float *uv, int uv_stride, int numverts, const void *indices, int numindices, int size_indices)
{
    return SDL_RenderGeometryRaw(renderer, texture, VML_MARSHAL_ARRAY(float, xy), xy_stride, VML_MARSHAL_ARRAY(SDL_Color, color), color_stride, VML_MARSHAL_ARRAY(float, uv), uv_stride, numverts, VML_MARSHAL_ARRAY(void, indices), numindices, size_indices);
}

int SDL_RenderDrawPointsF_wrapped(SDL_Renderer *renderer, const SDL_FPoint *points, int count)
{
    return SDL_RenderDrawPointsF(renderer, VML_MARSHAL_ARRAY(SDL_FPoint, points), count);
}

int SDL_RenderDrawLinesF_wrapped(SDL_Renderer *renderer, const SDL_FPoint *points, int count)
{
    return SDL_RenderDrawLinesF(renderer, VML_MARSHAL_ARRAY(SDL_FPoint, points), count);
}

int SDL_RenderDrawRectsF_wrapped(SDL_Renderer *renderer, const SDL_FRect *rects, int count)
{
    return SDL_RenderDrawRectsF(renderer, VML_MARSHAL_ARRAY(SDL_FRect, rects), count);
}

int SDL_RenderFillRectsF_wrapped(SDL_Renderer *renderer, const SDL_FRect *rects, int count)
{
    return SDL_RenderFillRectsF(renderer, VML_MARSHAL_ARRAY(SDL_FRect, rects), count);
}

void SDL_CalculateGammaRamp_wrapped(float gamma, Uint16 *ramp)
{
    SDL_CalculateGammaRamp(gamma, VML_MARSHAL_ARRAY(Uint16, ramp));
}

int SDL_SetPaletteColors_wrapped(SDL_Palette *palette, const SDL_Color *colors, int firstcolor, int ncolors)
{
    return SDL_SetPaletteColors(palette, VML_MARSHAL_ARRAY(SDL_Color, colors), firstcolor, ncolors);
}

SDL_bool SDL_EnclosePoints_wrapped(const SDL_Point *points, int count, const SDL_Rect *clip, SDL_Rect *result)
{
    return SDL_EnclosePoints(VML_MARSHAL_ARRAY(SDL_Point, points), count, VML_MARSHAL_ARRAY(SDL_Rect, clip), result);
}

int SDL_FillRects_wrapped(SDL_Surface *dst, const SDL_Rect *rects, int count, Uint32 color)
{
    return SDL_FillRects(dst, VML_MARSHAL_ARRAY(SDL_Rect, rects), count, color);
}

int SDL_PeepEvents_wrapped(SDL_Event *events, int numevents, SDL_eventaction action, Uint32 minType, Uint32 maxType)
{
    return SDL_PeepEvents(VML_MARSHAL_ARRAY(SDL_Event, events), numevents, action, minType, maxType);
}

void SDL_JoystickGetGUIDString_wrapped(SDL_JoystickGUID guid, char *pszGUID, int cbGUID)
{
    SDL_JoystickGetGUIDString(guid, VML_MARSHAL_ARRAY(char, pszGUID), cbGUID);
}

int SDL_GameControllerGetSensorData_wrapped(SDL_GameController *gamecontroller, SDL_SensorType type, float *data, int numValues)
{
    return SDL_GameControllerGetSensorData(gamecontroller, type, VML_MARSHAL_ARRAY(float, data), numValues);
}

int SDL_SensorGetData_wrapped(SDL_Sensor *sensor, float *data, int numValues)
{
    return SDL_SensorGetData(sensor, VML_MARSHAL_ARRAY(float, data), numValues);
}

void SDL_MixAudio_wrapped(Uint8 *dst, const Uint8 *src, Uint32 len, int volume)
{
    SDL_MixAudio(VML_MARSHAL_ARRAY(Uint8, dst), VML_MARSHAL_ARRAY(Uint8, src), len, volume);
}

void SDL_MixAudioFormat_wrapped(Uint8 *dst, const Uint8 *src, SDL_AudioFormat format, Uint32 len, int volume)
{
    SDL_MixAudioFormat(VML_MARSHAL_ARRAY(Uint8, dst), VML_MARSHAL_ARRAY(Uint8, src), format, len, volume);
}

void VMLSDL2Register()
{
	mono_aot_register_module(mono_aot_module_SDL2_info);

	mono_add_internal_call("SDL2.SDL::SDL_malloc", SDL_malloc);
	mono_add_internal_call("SDL2.SDL::SDL_free", SDL_free);
	mono_add_internal_call("SDL2.SDL::SDL_memcpy", SDL_memcpy);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_RWFromFile", SDL_RWFromFile);
	mono_add_internal_call("SDL2.SDL::SDL_AllocRW", SDL_AllocRW);
	mono_add_internal_call("SDL2.SDL::SDL_FreeRW", SDL_FreeRW);
	mono_add_internal_call("SDL2.SDL::SDL_RWFromFP", SDL_RWFromFP);
	mono_add_internal_call("SDL2.SDL::SDL_RWFromMem", SDL_RWFromMem);
	mono_add_internal_call("SDL2.SDL::SDL_RWFromConstMem", SDL_RWFromConstMem);
	mono_add_internal_call("SDL2.SDL::SDL_RWsize", SDL_RWsize);
	mono_add_internal_call("SDL2.SDL::SDL_RWseek", SDL_RWseek);
	mono_add_internal_call("SDL2.SDL::SDL_RWtell", SDL_RWtell);
	mono_add_internal_call("SDL2.SDL::SDL_RWread", SDL_RWread);
	mono_add_internal_call("SDL2.SDL::SDL_RWwrite", SDL_RWwrite);
	mono_add_internal_call("SDL2.SDL::SDL_ReadU8", SDL_ReadU8);
	mono_add_internal_call("SDL2.SDL::SDL_ReadLE16", SDL_ReadLE16);
	mono_add_internal_call("SDL2.SDL::SDL_ReadBE16", SDL_ReadBE16);
	mono_add_internal_call("SDL2.SDL::SDL_ReadLE32", SDL_ReadLE32);
	mono_add_internal_call("SDL2.SDL::SDL_ReadBE32", SDL_ReadBE32);
	mono_add_internal_call("SDL2.SDL::SDL_ReadLE64", SDL_ReadLE64);
	mono_add_internal_call("SDL2.SDL::SDL_ReadBE64", SDL_ReadBE64);
	mono_add_internal_call("SDL2.SDL::SDL_WriteU8", SDL_WriteU8);
	mono_add_internal_call("SDL2.SDL::SDL_WriteLE16", SDL_WriteLE16);
	mono_add_internal_call("SDL2.SDL::SDL_WriteBE16", SDL_WriteBE16);
	mono_add_internal_call("SDL2.SDL::SDL_WriteLE32", SDL_WriteLE32);
	mono_add_internal_call("SDL2.SDL::SDL_WriteBE32", SDL_WriteBE32);
	mono_add_internal_call("SDL2.SDL::SDL_WriteLE64", SDL_WriteLE64);
	mono_add_internal_call("SDL2.SDL::SDL_WriteBE64", SDL_WriteBE64);
	mono_add_internal_call("SDL2.SDL::SDL_RWclose", SDL_RWclose);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LoadFile", SDL_LoadFile);
	mono_add_internal_call("SDL2.SDL::SDL_SetMainReady", SDL_SetMainReady);
	mono_add_internal_call("SDL2.SDL::SDL_Init", SDL_Init);
	mono_add_internal_call("SDL2.SDL::SDL_InitSubSystem", SDL_InitSubSystem);
	mono_add_internal_call("SDL2.SDL::SDL_Quit", SDL_Quit);
	mono_add_internal_call("SDL2.SDL::SDL_QuitSubSystem", SDL_QuitSubSystem);
	mono_add_internal_call("SDL2.SDL::SDL_WasInit", SDL_WasInit);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetPlatform", SDL_GetPlatform);
	mono_add_internal_call("SDL2.SDL::SDL_ClearHints", SDL_ClearHints);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetHint", SDL_GetHint);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SetHint", SDL_SetHint);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SetHintWithPriority", SDL_SetHintWithPriority);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetHintBoolean", SDL_GetHintBoolean);
	mono_add_internal_call("SDL2.SDL::SDL_ClearError", SDL_ClearError);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetError", SDL_GetError);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SetError", SDL_SetError);
	mono_add_internal_call("SDL2.SDL::SDL_GetErrorMsg", SDL_GetErrorMsg);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_Log", SDL_Log);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogVerbose", SDL_LogVerbose);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogDebug", SDL_LogDebug);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogInfo", SDL_LogInfo);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogWarn", SDL_LogWarn);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogError", SDL_LogError);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogCritical", SDL_LogCritical);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogMessage", SDL_LogMessage);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_LogMessageV", SDL_LogMessageV);
	mono_add_internal_call("SDL2.SDL::SDL_LogGetPriority", SDL_LogGetPriority);
	mono_add_internal_call("SDL2.SDL::SDL_LogSetPriority", SDL_LogSetPriority);
	mono_add_internal_call("SDL2.SDL::SDL_LogSetAllPriority", SDL_LogSetAllPriority);
	mono_add_internal_call("SDL2.SDL::SDL_LogResetPriorities", SDL_LogResetPriorities);
	mono_add_internal_call("SDL2.SDL::SDL_LogGetOutputFunction", SDL_LogGetOutputFunction);
	mono_add_internal_call("SDL2.SDL::SDL_LogSetOutputFunction", SDL_LogSetOutputFunction);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_ShowMessageBox", SDL_ShowMessageBox);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_ShowSimpleMessageBox", SDL_ShowSimpleMessageBox);
	mono_add_internal_call("SDL2.SDL::SDL_GetVersion", SDL_GetVersion);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetRevision", SDL_GetRevision);
	mono_add_internal_call("SDL2.SDL::SDL_GetRevisionNumber", SDL_GetRevisionNumber);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_CreateWindow", SDL_CreateWindow);
	mono_add_internal_call("SDL2.SDL::SDL_CreateWindowAndRenderer", SDL_CreateWindowAndRenderer);
	mono_add_internal_call("SDL2.SDL::SDL_CreateWindowFrom", SDL_CreateWindowFrom);
	mono_add_internal_call("SDL2.SDL::SDL_DestroyWindow", SDL_DestroyWindow);
	mono_add_internal_call("SDL2.SDL::SDL_DisableScreenSaver", SDL_DisableScreenSaver);
	mono_add_internal_call("SDL2.SDL::SDL_EnableScreenSaver", SDL_EnableScreenSaver);
	mono_add_internal_call("SDL2.SDL::SDL_GetClosestDisplayMode", SDL_GetClosestDisplayMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetCurrentDisplayMode", SDL_GetCurrentDisplayMode);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetCurrentVideoDriver", SDL_GetCurrentVideoDriver);
	mono_add_internal_call("SDL2.SDL::SDL_GetDesktopDisplayMode", SDL_GetDesktopDisplayMode);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetDisplayName", SDL_GetDisplayName);
	mono_add_internal_call("SDL2.SDL::SDL_GetDisplayBounds", SDL_GetDisplayBounds);
	mono_add_internal_call("SDL2.SDL::SDL_GetDisplayDPI", SDL_GetDisplayDPI);
	mono_add_internal_call("SDL2.SDL::SDL_GetDisplayOrientation", SDL_GetDisplayOrientation);
	mono_add_internal_call("SDL2.SDL::SDL_GetDisplayMode", SDL_GetDisplayMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetDisplayUsableBounds", SDL_GetDisplayUsableBounds);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumDisplayModes", SDL_GetNumDisplayModes);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumVideoDisplays", SDL_GetNumVideoDisplays);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumVideoDrivers", SDL_GetNumVideoDrivers);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetVideoDriver", SDL_GetVideoDriver);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowBrightness", SDL_GetWindowBrightness);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowOpacity", SDL_SetWindowOpacity);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowOpacity", SDL_GetWindowOpacity);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowModalFor", SDL_SetWindowModalFor);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowInputFocus", SDL_SetWindowInputFocus);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetWindowData", SDL_GetWindowData);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowDisplayIndex", SDL_GetWindowDisplayIndex);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowDisplayMode", SDL_GetWindowDisplayMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowICCProfile", SDL_GetWindowICCProfile);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowFlags", SDL_GetWindowFlags);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowFromID", SDL_GetWindowFromID);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowGammaRamp", SDL_GetWindowGammaRamp_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowGrab", SDL_GetWindowGrab);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowKeyboardGrab", SDL_GetWindowKeyboardGrab);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowMouseGrab", SDL_GetWindowMouseGrab);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowID", SDL_GetWindowID);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowPixelFormat", SDL_GetWindowPixelFormat);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowMaximumSize", SDL_GetWindowMaximumSize);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowMinimumSize", SDL_GetWindowMinimumSize);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowPosition", SDL_GetWindowPosition);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowSize", SDL_GetWindowSize);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowSurface", SDL_GetWindowSurface);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetWindowTitle", SDL_GetWindowTitle);
	mono_add_internal_call("SDL2.SDL::SDL_GL_BindTexture", SDL_GL_BindTexture);
	mono_add_internal_call("SDL2.SDL::SDL_GL_CreateContext", SDL_GL_CreateContext);
	mono_add_internal_call("SDL2.SDL::SDL_GL_DeleteContext", SDL_GL_DeleteContext);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GL_LoadLibrary", SDL_GL_LoadLibrary);
	mono_add_internal_call("SDL2.SDL::SDL_GL_GetProcAddress", SDL_GL_GetProcAddress);
	mono_add_internal_call("SDL2.SDL::SDL_GL_UnloadLibrary", SDL_GL_UnloadLibrary);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GL_ExtensionSupported", SDL_GL_ExtensionSupported);
	mono_add_internal_call("SDL2.SDL::SDL_GL_ResetAttributes", SDL_GL_ResetAttributes);
	mono_add_internal_call("SDL2.SDL::SDL_GL_GetAttribute", SDL_GL_GetAttribute);
	mono_add_internal_call("SDL2.SDL::SDL_GL_GetSwapInterval", SDL_GL_GetSwapInterval);
	mono_add_internal_call("SDL2.SDL::SDL_GL_MakeCurrent", SDL_GL_MakeCurrent);
	mono_add_internal_call("SDL2.SDL::SDL_GL_GetCurrentWindow", SDL_GL_GetCurrentWindow);
	mono_add_internal_call("SDL2.SDL::SDL_GL_GetCurrentContext", SDL_GL_GetCurrentContext);
	mono_add_internal_call("SDL2.SDL::SDL_GL_GetDrawableSize", SDL_GL_GetDrawableSize);
	mono_add_internal_call("SDL2.SDL::SDL_GL_SetAttribute", SDL_GL_SetAttribute);
	mono_add_internal_call("SDL2.SDL::SDL_GL_SetSwapInterval", SDL_GL_SetSwapInterval);
	mono_add_internal_call("SDL2.SDL::SDL_GL_SwapWindow", SDL_GL_SwapWindow);
	mono_add_internal_call("SDL2.SDL::SDL_GL_UnbindTexture", SDL_GL_UnbindTexture);
	mono_add_internal_call("SDL2.SDL::SDL_HideWindow", SDL_HideWindow);
	mono_add_internal_call("SDL2.SDL::SDL_IsScreenSaverEnabled", SDL_IsScreenSaverEnabled);
	mono_add_internal_call("SDL2.SDL::SDL_MaximizeWindow", SDL_MaximizeWindow);
	mono_add_internal_call("SDL2.SDL::SDL_MinimizeWindow", SDL_MinimizeWindow);
	mono_add_internal_call("SDL2.SDL::SDL_RaiseWindow", SDL_RaiseWindow);
	mono_add_internal_call("SDL2.SDL::SDL_RestoreWindow", SDL_RestoreWindow);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowBrightness", SDL_SetWindowBrightness);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SetWindowData", SDL_SetWindowData);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowDisplayMode", SDL_SetWindowDisplayMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowDisplayMode", SDL_SetWindowDisplayMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowFullscreen", SDL_SetWindowFullscreen);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowGammaRamp", SDL_SetWindowGammaRamp_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowGrab", SDL_SetWindowGrab);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowKeyboardGrab", SDL_SetWindowKeyboardGrab);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowMouseGrab", SDL_SetWindowMouseGrab);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowIcon", SDL_SetWindowIcon);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowMaximumSize", SDL_SetWindowMaximumSize);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowMinimumSize", SDL_SetWindowMinimumSize);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowPosition", SDL_SetWindowPosition);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowSize", SDL_SetWindowSize);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowBordered", SDL_SetWindowBordered);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowBordersSize", SDL_GetWindowBordersSize);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowResizable", SDL_SetWindowResizable);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowAlwaysOnTop", SDL_SetWindowAlwaysOnTop);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SetWindowTitle", SDL_SetWindowTitle);
	mono_add_internal_call("SDL2.SDL::SDL_ShowWindow", SDL_ShowWindow);
	mono_add_internal_call("SDL2.SDL::SDL_UpdateWindowSurface", SDL_UpdateWindowSurface);
	mono_add_internal_call("SDL2.SDL::SDL_UpdateWindowSurfaceRects", SDL_UpdateWindowSurfaceRects_wrapped);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_VideoInit", SDL_VideoInit);
	mono_add_internal_call("SDL2.SDL::SDL_VideoQuit", SDL_VideoQuit);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowHitTest", SDL_SetWindowHitTest);
	mono_add_internal_call("SDL2.SDL::SDL_GetGrabbedWindow", SDL_GetGrabbedWindow);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowMouseRect", SDL_SetWindowMouseRect);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowMouseRect", SDL_SetWindowMouseRect);
	mono_add_internal_call("SDL2.SDL::SDL_GetWindowMouseRect", SDL_GetWindowMouseRect);
	mono_add_internal_call("SDL2.SDL::SDL_FlashWindow", SDL_FlashWindow);
	mono_add_internal_call("SDL2.SDL::SDL_ComposeCustomBlendMode", SDL_ComposeCustomBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_Metal_CreateView", SDL_Metal_CreateView);
	mono_add_internal_call("SDL2.SDL::SDL_Metal_DestroyView", SDL_Metal_DestroyView);
	mono_add_internal_call("SDL2.SDL::SDL_Metal_GetLayer", SDL_Metal_GetLayer);
	mono_add_internal_call("SDL2.SDL::SDL_Metal_GetDrawableSize", SDL_Metal_GetDrawableSize);
	mono_add_internal_call("SDL2.SDL::SDL_CreateRenderer", SDL_CreateRenderer);
	mono_add_internal_call("SDL2.SDL::SDL_CreateSoftwareRenderer", SDL_CreateSoftwareRenderer);
	mono_add_internal_call("SDL2.SDL::SDL_CreateTexture", SDL_CreateTexture);
	mono_add_internal_call("SDL2.SDL::SDL_CreateTextureFromSurface", SDL_CreateTextureFromSurface);
	mono_add_internal_call("SDL2.SDL::SDL_DestroyRenderer", SDL_DestroyRenderer);
	mono_add_internal_call("SDL2.SDL::SDL_DestroyTexture", SDL_DestroyTexture);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumRenderDrivers", SDL_GetNumRenderDrivers);
	mono_add_internal_call("SDL2.SDL::SDL_GetRenderDrawBlendMode", SDL_GetRenderDrawBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetTextureScaleMode", SDL_SetTextureScaleMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetTextureScaleMode", SDL_GetTextureScaleMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetTextureUserData", SDL_SetTextureUserData);
	mono_add_internal_call("SDL2.SDL::SDL_GetTextureUserData", SDL_GetTextureUserData);
	mono_add_internal_call("SDL2.SDL::SDL_GetRenderDrawColor", SDL_GetRenderDrawColor);
	mono_add_internal_call("SDL2.SDL::SDL_GetRenderDriverInfo", SDL_GetRenderDriverInfo);
	mono_add_internal_call("SDL2.SDL::SDL_GetRenderer", SDL_GetRenderer);
	mono_add_internal_call("SDL2.SDL::SDL_GetRendererInfo", SDL_GetRendererInfo);
	mono_add_internal_call("SDL2.SDL::SDL_GetRendererOutputSize", SDL_GetRendererOutputSize);
	mono_add_internal_call("SDL2.SDL::SDL_GetTextureAlphaMod", SDL_GetTextureAlphaMod);
	mono_add_internal_call("SDL2.SDL::SDL_GetTextureBlendMode", SDL_GetTextureBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetTextureColorMod", SDL_GetTextureColorMod);
	mono_add_internal_call("SDL2.SDL::SDL_LockTexture", SDL_LockTexture);
	mono_add_internal_call("SDL2.SDL::SDL_LockTexture", SDL_LockTexture);
	mono_add_internal_call("SDL2.SDL::SDL_LockTextureToSurface", SDL_LockTextureToSurface);
	mono_add_internal_call("SDL2.SDL::SDL_LockTextureToSurface", SDL_LockTextureToSurface);
	mono_add_internal_call("SDL2.SDL::SDL_QueryTexture", SDL_QueryTexture);
	mono_add_internal_call("SDL2.SDL::SDL_RenderClear", SDL_RenderClear);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopy", SDL_RenderCopy);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopy", SDL_RenderCopy);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopy", SDL_RenderCopy);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopy", SDL_RenderCopy);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawLine", SDL_RenderDrawLine);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawLines", SDL_RenderDrawLines_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawPoint", SDL_RenderDrawPoint);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawPoints", SDL_RenderDrawPoints_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawRect", SDL_RenderDrawRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawRect", SDL_RenderDrawRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawRects", SDL_RenderDrawRects_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFillRect", SDL_RenderFillRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFillRect", SDL_RenderFillRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFillRects", SDL_RenderFillRects_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyF", SDL_RenderCopyF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyF", SDL_RenderCopyF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyF", SDL_RenderCopyF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyF", SDL_RenderCopyF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyEx", SDL_RenderCopyEx);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyExF", SDL_RenderCopyExF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyExF", SDL_RenderCopyExF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyExF", SDL_RenderCopyExF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyExF", SDL_RenderCopyExF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyExF", SDL_RenderCopyExF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderCopyExF", SDL_RenderCopyExF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGeometry", SDL_RenderGeometry_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGeometryRaw", SDL_RenderGeometryRaw_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawPointF", SDL_RenderDrawPointF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawPointsF", SDL_RenderDrawPointsF_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawLineF", SDL_RenderDrawLineF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawLinesF", SDL_RenderDrawLinesF_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawRectF", SDL_RenderDrawRectF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawRectF", SDL_RenderDrawRectF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderDrawRectsF", SDL_RenderDrawRectsF_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFillRectF", SDL_RenderFillRectF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFillRectF", SDL_RenderFillRectF);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFillRectsF", SDL_RenderFillRectsF_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGetClipRect", SDL_RenderGetClipRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGetLogicalSize", SDL_RenderGetLogicalSize);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGetScale", SDL_RenderGetScale);
	mono_add_internal_call("SDL2.SDL::SDL_RenderWindowToLogical", SDL_RenderWindowToLogical);
	mono_add_internal_call("SDL2.SDL::SDL_RenderLogicalToWindow", SDL_RenderLogicalToWindow);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGetViewport", SDL_RenderGetViewport);
	mono_add_internal_call("SDL2.SDL::SDL_RenderPresent", SDL_RenderPresent);
	mono_add_internal_call("SDL2.SDL::SDL_RenderReadPixels", SDL_RenderReadPixels);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetClipRect", SDL_RenderSetClipRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetClipRect", SDL_RenderSetClipRect);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetLogicalSize", SDL_RenderSetLogicalSize);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetScale", SDL_RenderSetScale);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetIntegerScale", SDL_RenderSetIntegerScale);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetViewport", SDL_RenderSetViewport);
	mono_add_internal_call("SDL2.SDL::SDL_SetRenderDrawBlendMode", SDL_SetRenderDrawBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetRenderDrawColor", SDL_SetRenderDrawColor);
	mono_add_internal_call("SDL2.SDL::SDL_SetRenderTarget", SDL_SetRenderTarget);
	mono_add_internal_call("SDL2.SDL::SDL_SetTextureAlphaMod", SDL_SetTextureAlphaMod);
	mono_add_internal_call("SDL2.SDL::SDL_SetTextureBlendMode", SDL_SetTextureBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetTextureColorMod", SDL_SetTextureColorMod);
	mono_add_internal_call("SDL2.SDL::SDL_UnlockTexture", SDL_UnlockTexture);
	mono_add_internal_call("SDL2.SDL::SDL_UpdateTexture", SDL_UpdateTexture);
	mono_add_internal_call("SDL2.SDL::SDL_UpdateTexture", SDL_UpdateTexture);
	mono_add_internal_call("SDL2.SDL::SDL_UpdateYUVTexture", SDL_UpdateYUVTexture);
	mono_add_internal_call("SDL2.SDL::SDL_UpdateNVTexture", SDL_UpdateNVTexture);
	mono_add_internal_call("SDL2.SDL::SDL_RenderTargetSupported", SDL_RenderTargetSupported);
	mono_add_internal_call("SDL2.SDL::SDL_GetRenderTarget", SDL_GetRenderTarget);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGetMetalLayer", SDL_RenderGetMetalLayer);
	mono_add_internal_call("SDL2.SDL::SDL_RenderGetMetalCommandEncoder", SDL_RenderGetMetalCommandEncoder);
	mono_add_internal_call("SDL2.SDL::SDL_RenderSetVSync", SDL_RenderSetVSync);
	mono_add_internal_call("SDL2.SDL::SDL_RenderIsClipEnabled", SDL_RenderIsClipEnabled);
	mono_add_internal_call("SDL2.SDL::SDL_RenderFlush", SDL_RenderFlush);
	mono_add_internal_call("SDL2.SDL::SDL_AllocFormat", SDL_AllocFormat);
	mono_add_internal_call("SDL2.SDL::SDL_AllocPalette", SDL_AllocPalette);
	mono_add_internal_call("SDL2.SDL::SDL_CalculateGammaRamp", SDL_CalculateGammaRamp_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_FreeFormat", SDL_FreeFormat);
	mono_add_internal_call("SDL2.SDL::SDL_FreePalette", SDL_FreePalette);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetPixelFormatName", SDL_GetPixelFormatName);
	mono_add_internal_call("SDL2.SDL::SDL_GetRGB", SDL_GetRGB);
	mono_add_internal_call("SDL2.SDL::SDL_GetRGBA", SDL_GetRGBA);
	mono_add_internal_call("SDL2.SDL::SDL_MapRGB", SDL_MapRGB);
	mono_add_internal_call("SDL2.SDL::SDL_MapRGBA", SDL_MapRGBA);
	mono_add_internal_call("SDL2.SDL::SDL_MasksToPixelFormatEnum", SDL_MasksToPixelFormatEnum);
	mono_add_internal_call("SDL2.SDL::SDL_PixelFormatEnumToMasks", SDL_PixelFormatEnumToMasks);
	mono_add_internal_call("SDL2.SDL::SDL_SetPaletteColors", SDL_SetPaletteColors_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_SetPixelFormatPalette", SDL_SetPixelFormatPalette);
	mono_add_internal_call("SDL2.SDL::SDL_EnclosePoints", SDL_EnclosePoints_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_HasIntersection", SDL_HasIntersection);
	mono_add_internal_call("SDL2.SDL::SDL_IntersectRect", SDL_IntersectRect);
	mono_add_internal_call("SDL2.SDL::SDL_IntersectRectAndLine", SDL_IntersectRectAndLine);
	mono_add_internal_call("SDL2.SDL::SDL_UnionRect", SDL_UnionRect);
	mono_add_internal_call("SDL2.SDL::SDL_IsShapedWindow", SDL_IsShapedWindow);
	mono_add_internal_call("SDL2.SDL::SDL_SetWindowShape", SDL_SetWindowShape);
	mono_add_internal_call("SDL2.SDL::SDL_GetShapedWindowMode", SDL_GetShapedWindowMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetShapedWindowMode", SDL_GetShapedWindowMode);
	mono_add_internal_call("SDL2.SDL::SDL_BlitSurface", SDL_BlitSurface);
	mono_add_internal_call("SDL2.SDL::SDL_BlitSurface", SDL_BlitSurface);
	mono_add_internal_call("SDL2.SDL::SDL_BlitSurface", SDL_BlitSurface);
	mono_add_internal_call("SDL2.SDL::SDL_BlitSurface", SDL_BlitSurface);
	mono_add_internal_call("SDL2.SDL::SDL_BlitScaled", SDL_BlitScaled);
	mono_add_internal_call("SDL2.SDL::SDL_BlitScaled", SDL_BlitScaled);
	mono_add_internal_call("SDL2.SDL::SDL_BlitScaled", SDL_BlitScaled);
	mono_add_internal_call("SDL2.SDL::SDL_BlitScaled", SDL_BlitScaled);
	mono_add_internal_call("SDL2.SDL::SDL_ConvertPixels", SDL_ConvertPixels);
	mono_add_internal_call("SDL2.SDL::SDL_PremultiplyAlpha", SDL_PremultiplyAlpha);
	mono_add_internal_call("SDL2.SDL::SDL_ConvertSurface", SDL_ConvertSurface);
	mono_add_internal_call("SDL2.SDL::SDL_ConvertSurfaceFormat", SDL_ConvertSurfaceFormat);
	mono_add_internal_call("SDL2.SDL::SDL_CreateRGBSurface", SDL_CreateRGBSurface);
	mono_add_internal_call("SDL2.SDL::SDL_CreateRGBSurfaceFrom", SDL_CreateRGBSurfaceFrom);
	mono_add_internal_call("SDL2.SDL::SDL_CreateRGBSurfaceWithFormat", SDL_CreateRGBSurfaceWithFormat);
	mono_add_internal_call("SDL2.SDL::SDL_CreateRGBSurfaceWithFormatFrom", SDL_CreateRGBSurfaceWithFormatFrom);
	mono_add_internal_call("SDL2.SDL::SDL_FillRect", SDL_FillRect);
	mono_add_internal_call("SDL2.SDL::SDL_FillRect", SDL_FillRect);
	mono_add_internal_call("SDL2.SDL::SDL_FillRects", SDL_FillRects_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_FreeSurface", SDL_FreeSurface);
	mono_add_internal_call("SDL2.SDL::SDL_GetClipRect", SDL_GetClipRect);
	mono_add_internal_call("SDL2.SDL::SDL_HasColorKey", SDL_HasColorKey);
	mono_add_internal_call("SDL2.SDL::SDL_GetColorKey", SDL_GetColorKey);
	mono_add_internal_call("SDL2.SDL::SDL_GetSurfaceAlphaMod", SDL_GetSurfaceAlphaMod);
	mono_add_internal_call("SDL2.SDL::SDL_GetSurfaceBlendMode", SDL_GetSurfaceBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_GetSurfaceColorMod", SDL_GetSurfaceColorMod);
	mono_add_internal_call("SDL2.SDL::SDL_LoadBMP_RW", SDL_LoadBMP_RW);
	mono_add_internal_call("SDL2.SDL::SDL_LockSurface", SDL_LockSurface);
	mono_add_internal_call("SDL2.SDL::SDL_LowerBlit", SDL_LowerBlit);
	mono_add_internal_call("SDL2.SDL::SDL_LowerBlitScaled", SDL_LowerBlitScaled);
	mono_add_internal_call("SDL2.SDL::SDL_SaveBMP_RW", SDL_SaveBMP_RW);
	mono_add_internal_call("SDL2.SDL::SDL_SetClipRect", SDL_SetClipRect);
	mono_add_internal_call("SDL2.SDL::SDL_SetColorKey", SDL_SetColorKey);
	mono_add_internal_call("SDL2.SDL::SDL_SetSurfaceAlphaMod", SDL_SetSurfaceAlphaMod);
	mono_add_internal_call("SDL2.SDL::SDL_SetSurfaceBlendMode", SDL_SetSurfaceBlendMode);
	mono_add_internal_call("SDL2.SDL::SDL_SetSurfaceColorMod", SDL_SetSurfaceColorMod);
	mono_add_internal_call("SDL2.SDL::SDL_SetSurfacePalette", SDL_SetSurfacePalette);
	mono_add_internal_call("SDL2.SDL::SDL_SetSurfaceRLE", SDL_SetSurfaceRLE);
	mono_add_internal_call("SDL2.SDL::SDL_HasSurfaceRLE", SDL_HasSurfaceRLE);
	mono_add_internal_call("SDL2.SDL::SDL_SoftStretch", SDL_SoftStretch);
	mono_add_internal_call("SDL2.SDL::SDL_SoftStretchLinear", SDL_SoftStretchLinear);
	mono_add_internal_call("SDL2.SDL::SDL_UnlockSurface", SDL_UnlockSurface);
	mono_add_internal_call("SDL2.SDL::SDL_UpperBlit", SDL_UpperBlit);
	mono_add_internal_call("SDL2.SDL::SDL_UpperBlitScaled", SDL_UpperBlitScaled);
	mono_add_internal_call("SDL2.SDL::SDL_DuplicateSurface", SDL_DuplicateSurface);
	mono_add_internal_call("SDL2.SDL::SDL_HasClipboardText", SDL_HasClipboardText);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetClipboardText", SDL_GetClipboardText);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SetClipboardText", SDL_SetClipboardText);
	mono_add_internal_call("SDL2.SDL::SDL_PumpEvents", SDL_PumpEvents);
	mono_add_internal_call("SDL2.SDL::SDL_PeepEvents", SDL_PeepEvents_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_HasEvent", SDL_HasEvent);
	mono_add_internal_call("SDL2.SDL::SDL_HasEvents", SDL_HasEvents);
	mono_add_internal_call("SDL2.SDL::SDL_FlushEvent", SDL_FlushEvent);
	mono_add_internal_call("SDL2.SDL::SDL_FlushEvents", SDL_FlushEvents);
	mono_add_internal_call("SDL2.SDL::SDL_PollEvent", SDL_PollEvent);
	mono_add_internal_call("SDL2.SDL::SDL_WaitEvent", SDL_WaitEvent);
	mono_add_internal_call("SDL2.SDL::SDL_WaitEventTimeout", SDL_WaitEventTimeout);
	mono_add_internal_call("SDL2.SDL::SDL_PushEvent", SDL_PushEvent);
	mono_add_internal_call("SDL2.SDL::SDL_SetEventFilter", SDL_SetEventFilter);
	mono_add_internal_call("SDL2.SDL::SDL_GetEventFilter", SDL_GetEventFilter);
	mono_add_internal_call("SDL2.SDL::SDL_AddEventWatch", SDL_AddEventWatch);
	mono_add_internal_call("SDL2.SDL::SDL_DelEventWatch", SDL_DelEventWatch);
	mono_add_internal_call("SDL2.SDL::SDL_FilterEvents", SDL_FilterEvents);
	mono_add_internal_call("SDL2.SDL::SDL_EventState", SDL_EventState);
	mono_add_internal_call("SDL2.SDL::SDL_RegisterEvents", SDL_RegisterEvents);
	mono_add_internal_call("SDL2.SDL::SDL_GetKeyboardFocus", SDL_GetKeyboardFocus);
	mono_add_internal_call("SDL2.SDL::SDL_GetKeyboardState", SDL_GetKeyboardState);
	mono_add_internal_call("SDL2.SDL::SDL_GetModState", SDL_GetModState);
	mono_add_internal_call("SDL2.SDL::SDL_SetModState", SDL_SetModState);
	mono_add_internal_call("SDL2.SDL::SDL_GetKeyFromScancode", SDL_GetKeyFromScancode);
	mono_add_internal_call("SDL2.SDL::SDL_GetScancodeFromKey", SDL_GetScancodeFromKey);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetScancodeName", SDL_GetScancodeName);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetScancodeFromName", SDL_GetScancodeFromName);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetKeyName", SDL_GetKeyName);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetKeyFromName", SDL_GetKeyFromName);
	mono_add_internal_call("SDL2.SDL::SDL_StartTextInput", SDL_StartTextInput);
	mono_add_internal_call("SDL2.SDL::SDL_IsTextInputActive", SDL_IsTextInputActive);
	mono_add_internal_call("SDL2.SDL::SDL_StopTextInput", SDL_StopTextInput);
	mono_add_internal_call("SDL2.SDL::SDL_ClearComposition", SDL_ClearComposition);
	mono_add_internal_call("SDL2.SDL::SDL_IsTextInputShown", SDL_IsTextInputShown);
	mono_add_internal_call("SDL2.SDL::SDL_SetTextInputRect", SDL_SetTextInputRect);
	mono_add_internal_call("SDL2.SDL::SDL_HasScreenKeyboardSupport", SDL_HasScreenKeyboardSupport);
	mono_add_internal_call("SDL2.SDL::SDL_IsScreenKeyboardShown", SDL_IsScreenKeyboardShown);
	mono_add_internal_call("SDL2.SDL::SDL_GetMouseFocus", SDL_GetMouseFocus);
	mono_add_internal_call("SDL2.SDL::SDL_GetMouseState", SDL_GetMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetMouseState", SDL_GetMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetMouseState", SDL_GetMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetMouseState", SDL_GetMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetGlobalMouseState", SDL_GetGlobalMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetGlobalMouseState", SDL_GetGlobalMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetGlobalMouseState", SDL_GetGlobalMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetGlobalMouseState", SDL_GetGlobalMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_GetRelativeMouseState", SDL_GetRelativeMouseState);
	mono_add_internal_call("SDL2.SDL::SDL_WarpMouseInWindow", SDL_WarpMouseInWindow);
	mono_add_internal_call("SDL2.SDL::SDL_WarpMouseGlobal", SDL_WarpMouseGlobal);
	mono_add_internal_call("SDL2.SDL::SDL_SetRelativeMouseMode", SDL_SetRelativeMouseMode);
	mono_add_internal_call("SDL2.SDL::SDL_CaptureMouse", SDL_CaptureMouse);
	mono_add_internal_call("SDL2.SDL::SDL_GetRelativeMouseMode", SDL_GetRelativeMouseMode);
	mono_add_internal_call("SDL2.SDL::SDL_CreateCursor", SDL_CreateCursor);
	mono_add_internal_call("SDL2.SDL::SDL_CreateColorCursor", SDL_CreateColorCursor);
	mono_add_internal_call("SDL2.SDL::SDL_CreateSystemCursor", SDL_CreateSystemCursor);
	mono_add_internal_call("SDL2.SDL::SDL_SetCursor", SDL_SetCursor);
	mono_add_internal_call("SDL2.SDL::SDL_GetCursor", SDL_GetCursor);
	mono_add_internal_call("SDL2.SDL::SDL_FreeCursor", SDL_FreeCursor);
	mono_add_internal_call("SDL2.SDL::SDL_ShowCursor", SDL_ShowCursor);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumTouchDevices", SDL_GetNumTouchDevices);
	mono_add_internal_call("SDL2.SDL::SDL_GetTouchDevice", SDL_GetTouchDevice);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumTouchFingers", SDL_GetNumTouchFingers);
	mono_add_internal_call("SDL2.SDL::SDL_GetTouchFinger", SDL_GetTouchFinger);
	mono_add_internal_call("SDL2.SDL::SDL_GetTouchDeviceType", SDL_GetTouchDeviceType);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetTouchName", SDL_GetTouchName);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickRumble", SDL_JoystickRumble);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickRumbleTriggers", SDL_JoystickRumbleTriggers);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickClose", SDL_JoystickClose);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickEventState", SDL_JoystickEventState);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetAxis", SDL_JoystickGetAxis);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetAxisInitialState", SDL_JoystickGetAxisInitialState);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetBall", SDL_JoystickGetBall);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetButton", SDL_JoystickGetButton);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetHat", SDL_JoystickGetHat);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_JoystickName", SDL_JoystickName);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_JoystickNameForIndex", SDL_JoystickNameForIndex);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickNumAxes", SDL_JoystickNumAxes);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickNumBalls", SDL_JoystickNumBalls);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickNumButtons", SDL_JoystickNumButtons);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickNumHats", SDL_JoystickNumHats);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickOpen", SDL_JoystickOpen);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickUpdate", SDL_JoystickUpdate);
	mono_add_internal_call("SDL2.SDL::SDL_NumJoysticks", SDL_NumJoysticks);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetDeviceGUID", SDL_JoystickGetDeviceGUID);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetGUID", SDL_JoystickGetGUID);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetGUIDString", SDL_JoystickGetGUIDString_wrapped);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_JoystickGetGUIDFromString", SDL_JoystickGetGUIDFromString);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetDeviceVendor", SDL_JoystickGetDeviceVendor);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetDeviceProduct", SDL_JoystickGetDeviceProduct);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetDeviceProductVersion", SDL_JoystickGetDeviceProductVersion);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetDeviceType", SDL_JoystickGetDeviceType);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetDeviceInstanceID", SDL_JoystickGetDeviceInstanceID);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetVendor", SDL_JoystickGetVendor);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetProduct", SDL_JoystickGetProduct);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetProductVersion", SDL_JoystickGetProductVersion);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_JoystickGetSerial", SDL_JoystickGetSerial);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetType", SDL_JoystickGetType);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickGetAttached", SDL_JoystickGetAttached);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickInstanceID", SDL_JoystickInstanceID);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickCurrentPowerLevel", SDL_JoystickCurrentPowerLevel);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickFromInstanceID", SDL_JoystickFromInstanceID);
	mono_add_internal_call("SDL2.SDL::SDL_LockJoysticks", SDL_LockJoysticks);
	mono_add_internal_call("SDL2.SDL::SDL_UnlockJoysticks", SDL_UnlockJoysticks);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickFromPlayerIndex", SDL_JoystickFromPlayerIndex);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickSetPlayerIndex", SDL_JoystickSetPlayerIndex);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickAttachVirtual", SDL_JoystickAttachVirtual);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickDetachVirtual", SDL_JoystickDetachVirtual);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickIsVirtual", SDL_JoystickIsVirtual);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickSetVirtualAxis", SDL_JoystickSetVirtualAxis);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickSetVirtualButton", SDL_JoystickSetVirtualButton);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickSetVirtualHat", SDL_JoystickSetVirtualHat);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickHasLED", SDL_JoystickHasLED);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickHasRumble", SDL_JoystickHasRumble);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickHasRumbleTriggers", SDL_JoystickHasRumbleTriggers);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickSetLED", SDL_JoystickSetLED);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickSendEffect", SDL_JoystickSendEffect);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerAddMapping", SDL_GameControllerAddMapping);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerNumMappings", SDL_GameControllerNumMappings);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerMappingForIndex", SDL_GameControllerMappingForIndex);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerAddMappingsFromRW", SDL_GameControllerAddMappingsFromRW);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerMappingForGUID", SDL_GameControllerMappingForGUID);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerMapping", SDL_GameControllerMapping);
	mono_add_internal_call("SDL2.SDL::SDL_IsGameController", SDL_IsGameController);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerNameForIndex", SDL_GameControllerNameForIndex);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerMappingForDeviceIndex", SDL_GameControllerMappingForDeviceIndex);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerOpen", SDL_GameControllerOpen);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerName", SDL_GameControllerName);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetVendor", SDL_GameControllerGetVendor);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetProduct", SDL_GameControllerGetProduct);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetProductVersion", SDL_GameControllerGetProductVersion);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetSerial", SDL_GameControllerGetSerial);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetAttached", SDL_GameControllerGetAttached);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetJoystick", SDL_GameControllerGetJoystick);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerEventState", SDL_GameControllerEventState);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerUpdate", SDL_GameControllerUpdate);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetAxisFromString", SDL_GameControllerGetAxisFromString);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetStringForAxis", SDL_GameControllerGetStringForAxis);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetBindForAxis", SDL_GameControllerGetBindForAxis);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetAxis", SDL_GameControllerGetAxis);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetButtonFromString", SDL_GameControllerGetButtonFromString);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetStringForButton", SDL_GameControllerGetStringForButton);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetBindForButton", SDL_GameControllerGetBindForButton);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetButton", SDL_GameControllerGetButton);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerRumble", SDL_GameControllerRumble);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerRumbleTriggers", SDL_GameControllerRumbleTriggers);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerClose", SDL_GameControllerClose);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetAppleSFSymbolsNameForButton", SDL_GameControllerGetAppleSFSymbolsNameForButton);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GameControllerGetAppleSFSymbolsNameForAxis", SDL_GameControllerGetAppleSFSymbolsNameForAxis);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerFromInstanceID", SDL_GameControllerFromInstanceID);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerTypeForIndex", SDL_GameControllerTypeForIndex);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetType", SDL_GameControllerGetType);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerFromPlayerIndex", SDL_GameControllerFromPlayerIndex);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerSetPlayerIndex", SDL_GameControllerSetPlayerIndex);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerHasLED", SDL_GameControllerHasLED);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerHasRumble", SDL_GameControllerHasRumble);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerHasRumbleTriggers", SDL_GameControllerHasRumbleTriggers);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerSetLED", SDL_GameControllerSetLED);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerHasAxis", SDL_GameControllerHasAxis);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerHasButton", SDL_GameControllerHasButton);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetNumTouchpads", SDL_GameControllerGetNumTouchpads);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetNumTouchpadFingers", SDL_GameControllerGetNumTouchpadFingers);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetTouchpadFinger", SDL_GameControllerGetTouchpadFinger);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerHasSensor", SDL_GameControllerHasSensor);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerSetSensorEnabled", SDL_GameControllerSetSensorEnabled);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerIsSensorEnabled", SDL_GameControllerIsSensorEnabled);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetSensorData", SDL_GameControllerGetSensorData_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerGetSensorDataRate", SDL_GameControllerGetSensorDataRate);
	mono_add_internal_call("SDL2.SDL::SDL_GameControllerSendEffect", SDL_GameControllerSendEffect);
	mono_add_internal_call("SDL2.SDL::SDL_HapticClose", SDL_HapticClose);
	mono_add_internal_call("SDL2.SDL::SDL_HapticDestroyEffect", SDL_HapticDestroyEffect);
	mono_add_internal_call("SDL2.SDL::SDL_HapticEffectSupported", SDL_HapticEffectSupported);
	mono_add_internal_call("SDL2.SDL::SDL_HapticGetEffectStatus", SDL_HapticGetEffectStatus);
	mono_add_internal_call("SDL2.SDL::SDL_HapticIndex", SDL_HapticIndex);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_HapticName", SDL_HapticName);
	mono_add_internal_call("SDL2.SDL::SDL_HapticNewEffect", SDL_HapticNewEffect);
	mono_add_internal_call("SDL2.SDL::SDL_HapticNumAxes", SDL_HapticNumAxes);
	mono_add_internal_call("SDL2.SDL::SDL_HapticNumEffects", SDL_HapticNumEffects);
	mono_add_internal_call("SDL2.SDL::SDL_HapticNumEffectsPlaying", SDL_HapticNumEffectsPlaying);
	mono_add_internal_call("SDL2.SDL::SDL_HapticOpen", SDL_HapticOpen);
	mono_add_internal_call("SDL2.SDL::SDL_HapticOpened", SDL_HapticOpened);
	mono_add_internal_call("SDL2.SDL::SDL_HapticOpenFromJoystick", SDL_HapticOpenFromJoystick);
	mono_add_internal_call("SDL2.SDL::SDL_HapticOpenFromMouse", SDL_HapticOpenFromMouse);
	mono_add_internal_call("SDL2.SDL::SDL_HapticPause", SDL_HapticPause);
	mono_add_internal_call("SDL2.SDL::SDL_HapticQuery", SDL_HapticQuery);
	mono_add_internal_call("SDL2.SDL::SDL_HapticRumbleInit", SDL_HapticRumbleInit);
	mono_add_internal_call("SDL2.SDL::SDL_HapticRumblePlay", SDL_HapticRumblePlay);
	mono_add_internal_call("SDL2.SDL::SDL_HapticRumbleStop", SDL_HapticRumbleStop);
	mono_add_internal_call("SDL2.SDL::SDL_HapticRumbleSupported", SDL_HapticRumbleSupported);
	mono_add_internal_call("SDL2.SDL::SDL_HapticRunEffect", SDL_HapticRunEffect);
	mono_add_internal_call("SDL2.SDL::SDL_HapticSetAutocenter", SDL_HapticSetAutocenter);
	mono_add_internal_call("SDL2.SDL::SDL_HapticSetGain", SDL_HapticSetGain);
	mono_add_internal_call("SDL2.SDL::SDL_HapticStopAll", SDL_HapticStopAll);
	mono_add_internal_call("SDL2.SDL::SDL_HapticStopEffect", SDL_HapticStopEffect);
	mono_add_internal_call("SDL2.SDL::SDL_HapticUnpause", SDL_HapticUnpause);
	mono_add_internal_call("SDL2.SDL::SDL_HapticUpdateEffect", SDL_HapticUpdateEffect);
	mono_add_internal_call("SDL2.SDL::SDL_JoystickIsHaptic", SDL_JoystickIsHaptic);
	mono_add_internal_call("SDL2.SDL::SDL_MouseIsHaptic", SDL_MouseIsHaptic);
	mono_add_internal_call("SDL2.SDL::SDL_NumHaptics", SDL_NumHaptics);
	mono_add_internal_call("SDL2.SDL::SDL_NumSensors", SDL_NumSensors);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SensorGetDeviceName", SDL_SensorGetDeviceName);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetDeviceType", SDL_SensorGetDeviceType);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetDeviceNonPortableType", SDL_SensorGetDeviceNonPortableType);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetDeviceInstanceID", SDL_SensorGetDeviceInstanceID);
	mono_add_internal_call("SDL2.SDL::SDL_SensorOpen", SDL_SensorOpen);
	mono_add_internal_call("SDL2.SDL::SDL_SensorFromInstanceID", SDL_SensorFromInstanceID);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_SensorGetName", SDL_SensorGetName);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetType", SDL_SensorGetType);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetNonPortableType", SDL_SensorGetNonPortableType);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetInstanceID", SDL_SensorGetInstanceID);
	mono_add_internal_call("SDL2.SDL::SDL_SensorGetData", SDL_SensorGetData_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_SensorClose", SDL_SensorClose);
	mono_add_internal_call("SDL2.SDL::SDL_SensorUpdate", SDL_SensorUpdate);
	mono_add_internal_call("SDL2.SDL::SDL_LockSensors", SDL_LockSensors);
	mono_add_internal_call("SDL2.SDL::SDL_UnlockSensors", SDL_UnlockSensors);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_AudioInit", SDL_AudioInit);
	mono_add_internal_call("SDL2.SDL::SDL_AudioQuit", SDL_AudioQuit);
	mono_add_internal_call("SDL2.SDL::SDL_CloseAudio", SDL_CloseAudio);
	mono_add_internal_call("SDL2.SDL::SDL_CloseAudioDevice", SDL_CloseAudioDevice);
	mono_add_internal_call("SDL2.SDL::SDL_FreeWAV", SDL_FreeWAV);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetAudioDeviceName", SDL_GetAudioDeviceName);
	mono_add_internal_call("SDL2.SDL::SDL_GetAudioDeviceStatus", SDL_GetAudioDeviceStatus);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetAudioDriver", SDL_GetAudioDriver);
	mono_add_internal_call("SDL2.SDL::SDL_GetAudioStatus", SDL_GetAudioStatus);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetCurrentAudioDriver", SDL_GetCurrentAudioDriver);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumAudioDevices", SDL_GetNumAudioDevices);
	mono_add_internal_call("SDL2.SDL::SDL_GetNumAudioDrivers", SDL_GetNumAudioDrivers);
	mono_add_internal_call("SDL2.SDL::SDL_LoadWAV_RW", SDL_LoadWAV_RW);
	mono_add_internal_call("SDL2.SDL::SDL_LockAudio", SDL_LockAudio);
	mono_add_internal_call("SDL2.SDL::SDL_LockAudioDevice", SDL_LockAudioDevice);
	mono_add_internal_call("SDL2.SDL::SDL_MixAudio", SDL_MixAudio_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_MixAudioFormat", SDL_MixAudioFormat_wrapped);
	mono_add_internal_call("SDL2.SDL::SDL_OpenAudio", SDL_OpenAudio);
	mono_add_internal_call("SDL2.SDL::SDL_OpenAudioDevice", SDL_OpenAudioDevice);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_OpenAudioDevice", SDL_OpenAudioDevice);
	mono_add_internal_call("SDL2.SDL::SDL_PauseAudio", SDL_PauseAudio);
	mono_add_internal_call("SDL2.SDL::SDL_PauseAudioDevice", SDL_PauseAudioDevice);
	mono_add_internal_call("SDL2.SDL::SDL_UnlockAudio", SDL_UnlockAudio);
	mono_add_internal_call("SDL2.SDL::SDL_UnlockAudioDevice", SDL_UnlockAudioDevice);
	mono_add_internal_call("SDL2.SDL::SDL_QueueAudio", SDL_QueueAudio);
	mono_add_internal_call("SDL2.SDL::SDL_DequeueAudio", SDL_DequeueAudio);
	mono_add_internal_call("SDL2.SDL::SDL_GetQueuedAudioSize", SDL_GetQueuedAudioSize);
	mono_add_internal_call("SDL2.SDL::SDL_ClearQueuedAudio", SDL_ClearQueuedAudio);
	mono_add_internal_call("SDL2.SDL::SDL_NewAudioStream", SDL_NewAudioStream);
	mono_add_internal_call("SDL2.SDL::SDL_AudioStreamPut", SDL_AudioStreamPut);
	mono_add_internal_call("SDL2.SDL::SDL_AudioStreamGet", SDL_AudioStreamGet);
	mono_add_internal_call("SDL2.SDL::SDL_AudioStreamAvailable", SDL_AudioStreamAvailable);
	mono_add_internal_call("SDL2.SDL::SDL_AudioStreamClear", SDL_AudioStreamClear);
	mono_add_internal_call("SDL2.SDL::SDL_FreeAudioStream", SDL_FreeAudioStream);
	mono_add_internal_call("SDL2.SDL::SDL_GetAudioDeviceSpec", SDL_GetAudioDeviceSpec);
	mono_add_internal_call("SDL2.SDL::SDL_Delay", SDL_Delay);
	mono_add_internal_call("SDL2.SDL::SDL_GetTicks", SDL_GetTicks);
	mono_add_internal_call("SDL2.SDL::SDL_GetTicks64", SDL_GetTicks64);
	mono_add_internal_call("SDL2.SDL::SDL_GetPerformanceCounter", SDL_GetPerformanceCounter);
	mono_add_internal_call("SDL2.SDL::SDL_GetPerformanceFrequency", SDL_GetPerformanceFrequency);
	mono_add_internal_call("SDL2.SDL::SDL_AddTimer", SDL_AddTimer);
	mono_add_internal_call("SDL2.SDL::SDL_RemoveTimer", SDL_RemoveTimer);
	mono_add_internal_call("SDL2.SDL::SDL_IsTablet", SDL_IsTablet);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetBasePath", SDL_GetBasePath);
	mono_add_internal_call("SDL2.SDL::INTERNAL_SDL_GetPrefPath", SDL_GetPrefPath);
	mono_add_internal_call("SDL2.SDL::SDL_GetPowerInfo", SDL_GetPowerInfo);
	mono_add_internal_call("SDL2.SDL::SDL_GetCPUCount", SDL_GetCPUCount);
	mono_add_internal_call("SDL2.SDL::SDL_GetCPUCacheLineSize", SDL_GetCPUCacheLineSize);
	mono_add_internal_call("SDL2.SDL::SDL_HasRDTSC", SDL_HasRDTSC);
	mono_add_internal_call("SDL2.SDL::SDL_HasAltiVec", SDL_HasAltiVec);
	mono_add_internal_call("SDL2.SDL::SDL_HasMMX", SDL_HasMMX);
	mono_add_internal_call("SDL2.SDL::SDL_Has3DNow", SDL_Has3DNow);
	mono_add_internal_call("SDL2.SDL::SDL_HasSSE", SDL_HasSSE);
	mono_add_internal_call("SDL2.SDL::SDL_HasSSE2", SDL_HasSSE2);
	mono_add_internal_call("SDL2.SDL::SDL_HasSSE3", SDL_HasSSE3);
	mono_add_internal_call("SDL2.SDL::SDL_HasSSE41", SDL_HasSSE41);
	mono_add_internal_call("SDL2.SDL::SDL_HasSSE42", SDL_HasSSE42);
	mono_add_internal_call("SDL2.SDL::SDL_HasAVX", SDL_HasAVX);
	mono_add_internal_call("SDL2.SDL::SDL_HasAVX2", SDL_HasAVX2);
	mono_add_internal_call("SDL2.SDL::SDL_HasAVX512F", SDL_HasAVX512F);
	mono_add_internal_call("SDL2.SDL::SDL_HasNEON", SDL_HasNEON);
	mono_add_internal_call("SDL2.SDL::SDL_GetSystemRAM", SDL_GetSystemRAM);
	mono_add_internal_call("SDL2.SDL::SDL_SIMDGetAlignment", SDL_SIMDGetAlignment);
	mono_add_internal_call("SDL2.SDL::SDL_SIMDAlloc", SDL_SIMDAlloc);
	mono_add_internal_call("SDL2.SDL::SDL_SIMDRealloc", SDL_SIMDRealloc);
	mono_add_internal_call("SDL2.SDL::SDL_SIMDFree", SDL_SIMDFree);
	mono_add_internal_call("SDL2.SDL::SDL_HasARMSIMD", SDL_HasARMSIMD);
	mono_add_internal_call("SDL2.SDL::SDL_GetPreferredLocales", SDL_GetPreferredLocales);
}
