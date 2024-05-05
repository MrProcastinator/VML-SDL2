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

#include <SDL2/SDL_image.h>

extern void** mono_aot_module_SDL2_image_info;

void VMLSDL2ImageRegister()
{
	mono_aot_register_module(mono_aot_module_SDL2_image_info);

	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_Linked_Version", IMG_Linked_Version);
	mono_add_internal_call("SDL2.SDL_image::IMG_Init", IMG_Init);
	mono_add_internal_call("SDL2.SDL_image::IMG_Quit", IMG_Quit);
	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_Load", IMG_Load);
	mono_add_internal_call("SDL2.SDL_image::IMG_Load_RW", IMG_Load_RW);
	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_LoadTyped_RW", IMG_LoadTyped_RW);
	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_LoadTexture", IMG_LoadTexture);
	mono_add_internal_call("SDL2.SDL_image::IMG_LoadTexture_RW", IMG_LoadTexture_RW);
	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_LoadTextureTyped_RW", IMG_LoadTextureTyped_RW);
	mono_add_internal_call("SDL2.SDL_image::IMG_ReadXPMFromArray", IMG_ReadXPMFromArray);
	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_SavePNG", IMG_SavePNG);
	mono_add_internal_call("SDL2.SDL_image::IMG_SavePNG_RW", IMG_SavePNG_RW);
	mono_add_internal_call("SDL2.SDL_image::INTERNAL_IMG_SaveJPG", IMG_SaveJPG);
	mono_add_internal_call("SDL2.SDL_image::IMG_SaveJPG_RW", IMG_SaveJPG_RW);
}
