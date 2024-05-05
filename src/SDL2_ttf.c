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

#include <SDL2/SDL_ttf.h>

extern void** mono_aot_module_SDL2_ttf_info;

void VMLSDL2TTFRegister()
{
	mono_aot_register_module(mono_aot_module_SDL2_ttf_info);

	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_Linked_Version", TTF_Linked_Version);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_ByteSwappedUNICODE", TTF_ByteSwappedUNICODE);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_Init", TTF_Init);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_OpenFont", TTF_OpenFont);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_OpenFontRW", TTF_OpenFontRW);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_OpenFontIndex", TTF_OpenFontIndex);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_OpenFontIndexRW", TTF_OpenFontIndexRW);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetFontSize", TTF_SetFontSize);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GetFontStyle", TTF_GetFontStyle);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetFontStyle", TTF_SetFontStyle);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GetFontOutline", TTF_GetFontOutline);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetFontOutline", TTF_SetFontOutline);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GetFontHinting", TTF_GetFontHinting);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetFontHinting", TTF_SetFontHinting);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_FontHeight", TTF_FontHeight);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_FontAscent", TTF_FontAscent);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_FontDescent", TTF_FontDescent);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_FontLineSkip", TTF_FontLineSkip);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GetFontKerning", TTF_GetFontKerning);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetFontKerning", TTF_SetFontKerning);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_FontFaces", TTF_FontFaces);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_FontFaceIsFixedWidth", TTF_FontFaceIsFixedWidth);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_FontFaceFamilyName", TTF_FontFaceFamilyName);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_FontFaceStyleName", TTF_FontFaceStyleName);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GlyphIsProvided", TTF_GlyphIsProvided);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GlyphIsProvided32", TTF_GlyphIsProvided32);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GlyphMetrics", TTF_GlyphMetrics);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GlyphMetrics32", TTF_GlyphMetrics32);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SizeText", TTF_SizeText);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_SizeUTF8", TTF_SizeUTF8);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SizeUNICODE", TTF_SizeUNICODE);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_MeasureText", TTF_MeasureText);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_MeasureUTF8", TTF_MeasureUTF8);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_MeasureUNICODE", TTF_MeasureUNICODE);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderText_Solid", TTF_RenderText_Solid);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_RenderUTF8_Solid", TTF_RenderUTF8_Solid);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderUNICODE_Solid", TTF_RenderUNICODE_Solid);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderText_Solid_Wrapped", TTF_RenderText_Solid_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_RenderUTF8_Solid_Wrapped", TTF_RenderUTF8_Solid_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderUNICODE_Solid_Wrapped", TTF_RenderUNICODE_Solid_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderGlyph_Solid", TTF_RenderGlyph_Solid);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderGlyph32_Solid", TTF_RenderGlyph32_Solid);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderText_Shaded", TTF_RenderText_Shaded);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_RenderUTF8_Shaded", TTF_RenderUTF8_Shaded);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderUNICODE_Shaded", TTF_RenderUNICODE_Shaded);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderText_Shaded_Wrapped", TTF_RenderText_Shaded_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_RenderUTF8_Shaded_Wrapped", TTF_RenderUTF8_Shaded_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderUNICODE_Shaded_Wrapped", TTF_RenderUNICODE_Shaded_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderGlyph_Shaded", TTF_RenderGlyph_Shaded);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderGlyph32_Shaded", TTF_RenderGlyph32_Shaded);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderText_Blended", TTF_RenderText_Blended);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_RenderUTF8_Blended", TTF_RenderUTF8_Blended);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderUNICODE_Blended", TTF_RenderUNICODE_Blended);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderText_Blended_Wrapped", TTF_RenderText_Blended_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::INTERNAL_TTF_RenderUTF8_Blended_Wrapped", TTF_RenderUTF8_Blended_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderUNICODE_Blended_Wrapped", TTF_RenderUNICODE_Blended_Wrapped);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderGlyph_Blended", TTF_RenderGlyph_Blended);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_RenderGlyph32_Blended", TTF_RenderGlyph32_Blended);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetDirection", TTF_SetDirection);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_SetScript", TTF_SetScript);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_CloseFont", TTF_CloseFont);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_Quit", TTF_Quit);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_WasInit", TTF_WasInit);
	mono_add_internal_call("SDL2.SDL_ttf::SDL_GetFontKerningSize", TTF_GetFontKerningSize);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GetFontKerningSizeGlyphs", TTF_GetFontKerningSizeGlyphs);
	mono_add_internal_call("SDL2.SDL_ttf::TTF_GetFontKerningSizeGlyphs32", TTF_GetFontKerningSizeGlyphs32);
}
