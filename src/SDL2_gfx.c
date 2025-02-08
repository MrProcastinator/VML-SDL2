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

#include <SDL2/SDL2_gfxPrimitives.h>
#include <SDL2/SDL2_imageFilter.h>
#include <SDL2/SDL2_rotozoom.h>
#include <SDL2/SDL2_framerate.h>

extern void** mono_aot_module_SDL2_gfx_info;

/* Array marshal functions */

int SDL_imageFilterAdd_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterAdd(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterMean_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterMean(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterSub_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterSub(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterAbsDiff_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterAbsDiff(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterMult_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterMult(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterMultNor_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterMultNor(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterMultDivby2_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterMultDivby2(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterMultDivby4_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterMultDivby4(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterBitAnd_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterBitAnd(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterBitOr_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterBitOr(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterDiv_wrapped(const unsigned char *Src1, const unsigned char *Src2, unsigned char *Dest, int length)
{
    return SDL_imageFilterDiv(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Src2), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterBitNegation_wrapped(const unsigned char *Src1, unsigned char *Dest, int length)
{
    return SDL_imageFilterBitNegation(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length);
}

int SDL_imageFilterAddByte_wrapped(unsigned char *Src1, unsigned char *Dest, unsigned int length, unsigned char C)
{
    return SDL_imageFilterAddByte(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, C);
}

int SDL_imageFilterAddUint_wrapped(unsigned char *Src1, unsigned char *Dest, unsigned int length, unsigned int C)
{
    return SDL_imageFilterAddUint(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, C);
}

int SDL_imageFilterAddByteToHalf_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned char C)
{
    return SDL_imageFilterAddByteToHalf(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, C);
}

int SDL_imageFilterSubByte_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned char C)
{
    return SDL_imageFilterSubByte(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, C);
}

int SDL_imageFilterSubUint_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned int C)
{
    return SDL_imageFilterSubUint(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, C);
}

int SDL_imageFilterShiftRight_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned char N)
{
    return SDL_imageFilterShiftRight(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N);
}

int SDL_imageFilterShiftRightUint_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned int N)
{
    return SDL_imageFilterShiftRightUint(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N);
}

int SDL_imageFilterMultByByte_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned char N)
{
    return SDL_imageFilterMultByByte(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N);
}

int SDL_imageFilterShiftRightAndMultByByte_wrapped(unsigned char *Src1, unsigned char *Dest, unsigned int length, unsigned char N, unsigned char C)
{
    return SDL_imageFilterShiftRightAndMultByByte(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N, C);
}

int SDL_imageFilterShiftLeftByte_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned char N)
{
    return SDL_imageFilterShiftLeftByte(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N);
}

int SDL_imageFilterShiftLeftUint_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned int N)
{
    return SDL_imageFilterShiftLeftUint(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N);
}

int SDL_imageFilterShiftLeft_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, unsigned char N)
{
    return SDL_imageFilterShiftLeft(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, N);
}

int SDL_imageFilterBinarizeUsingThreshold_wrapped(const unsigned char *Src1, unsigned char *Dest, unsigned char threshold, int length)
{
    return SDL_imageFilterBinarizeUsingThreshold(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), threshold, length);
}

int SDL_imageFilterClipToRange_wrapped(const unsigned char *Src1, unsigned char *Dest, unsigned char min_val, unsigned char max_val, int length)
{
    return SDL_imageFilterClipToRange(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), min_val, max_val, length);
}

int SDL_imageFilterNormalizeLinear_wrapped(const unsigned char *Src1, unsigned char *Dest, int length, int low_bound, int high_bound, int min_val, int max_val)
{
    return SDL_imageFilterNormalizeLinear(VML_MARSHAL_ARRAY(unsigned char, Src1), VML_MARSHAL_ARRAY(unsigned char, Dest), length, low_bound, high_bound, min_val, max_val);
}

void VMLSDL2GfxRegister()
{
	mono_aot_register_module(mono_aot_module_SDL2_gfx_info);

	mono_add_internal_call("SDL2.SDL_gfx::pixelColor", pixelColor);
	mono_add_internal_call("SDL2.SDL_gfx::pixelRGBA", pixelRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::hlineColor", hlineColor);
	mono_add_internal_call("SDL2.SDL_gfx::hlineRGBA", hlineRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::vlineColor", vlineColor);
	mono_add_internal_call("SDL2.SDL_gfx::vlineRGBA", vlineRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::rectangleColor", rectangleColor);
	mono_add_internal_call("SDL2.SDL_gfx::rectangleRGBA", rectangleRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::roundedRectangleColor", roundedRectangleColor);
	mono_add_internal_call("SDL2.SDL_gfx::roundedRectangleRGBA", roundedRectangleRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::boxColor", boxColor);
	mono_add_internal_call("SDL2.SDL_gfx::boxRGBA", boxRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::roundedBoxColor", roundedBoxColor);
	mono_add_internal_call("SDL2.SDL_gfx::roundedBoxRGBA", roundedBoxRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::lineColor", lineColor);
	mono_add_internal_call("SDL2.SDL_gfx::lineRGBA", lineRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::aalineColor", aalineColor);
	mono_add_internal_call("SDL2.SDL_gfx::aalineRGBA", aalineRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::thickLineColor", thickLineColor);
	mono_add_internal_call("SDL2.SDL_gfx::thickLineRGBA", thickLineRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::circleColor", circleColor);
	mono_add_internal_call("SDL2.SDL_gfx::circleRGBA", circleRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::arcColor", arcColor);
	mono_add_internal_call("SDL2.SDL_gfx::arcRGBA", arcRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::aacircleColor", aacircleColor);
	mono_add_internal_call("SDL2.SDL_gfx::aacircleRGBA", aacircleRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::filledCircleColor", filledCircleColor);
	mono_add_internal_call("SDL2.SDL_gfx::filledCircleRGBA", filledCircleRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::ellipseColor", ellipseColor);
	mono_add_internal_call("SDL2.SDL_gfx::ellipseRGBA", ellipseRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::aaellipseColor", aaellipseColor);
	mono_add_internal_call("SDL2.SDL_gfx::aaellipseRGBA", aaellipseRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::filledEllipseColor", filledEllipseColor);
	mono_add_internal_call("SDL2.SDL_gfx::filledEllipseRGBA", filledEllipseRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::pieColor", pieColor);
	mono_add_internal_call("SDL2.SDL_gfx::pieRGBA", pieRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::filledPieColor", filledPieColor);
	mono_add_internal_call("SDL2.SDL_gfx::filledPieRGBA", filledPieRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::trigonColor", trigonColor);
	mono_add_internal_call("SDL2.SDL_gfx::trigonRGBA", trigonRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::aatrigonColor", aatrigonColor);
	mono_add_internal_call("SDL2.SDL_gfx::aatrigonRGBA", aatrigonRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::filledTrigonColor", filledTrigonColor);
	mono_add_internal_call("SDL2.SDL_gfx::filledTrigonRGBA", filledTrigonRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::polygonColor", polygonColor);
	mono_add_internal_call("SDL2.SDL_gfx::polygonRGBA", polygonRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::aapolygonColor", aapolygonColor);
	mono_add_internal_call("SDL2.SDL_gfx::aapolygonRGBA", aapolygonRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::filledPolygonColor", filledPolygonColor);
	mono_add_internal_call("SDL2.SDL_gfx::filledPolygonRGBA", filledPolygonRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::texturedPolygon", texturedPolygon);
	mono_add_internal_call("SDL2.SDL_gfx::bezierColor", bezierColor);
	mono_add_internal_call("SDL2.SDL_gfx::bezierRGBA", bezierRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::gfxPrimitivesSetFont", gfxPrimitivesSetFont);
	mono_add_internal_call("SDL2.SDL_gfx::gfxPrimitivesSetFontRotation", gfxPrimitivesSetFontRotation);
	mono_add_internal_call("SDL2.SDL_gfx::characterColor", characterColor);
	mono_add_internal_call("SDL2.SDL_gfx::characterRGBA", characterRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::stringColor", stringColor);
	mono_add_internal_call("SDL2.SDL_gfx::stringRGBA", stringRGBA);
	mono_add_internal_call("SDL2.SDL_gfx::rotozoomSurface", rotozoomSurface);
	mono_add_internal_call("SDL2.SDL_gfx::rotozoomSurfaceXY", rotozoomSurfaceXY);
	mono_add_internal_call("SDL2.SDL_gfx::rotozoomSurfaceSize", rotozoomSurfaceSize);
	mono_add_internal_call("SDL2.SDL_gfx::rotozoomSurfaceSizeXY", rotozoomSurfaceSizeXY);
	mono_add_internal_call("SDL2.SDL_gfx::zoomSurface", zoomSurface);
	mono_add_internal_call("SDL2.SDL_gfx::zoomSurfaceSize", zoomSurfaceSize);
	mono_add_internal_call("SDL2.SDL_gfx::shrinkSurface", shrinkSurface);
	mono_add_internal_call("SDL2.SDL_gfx::rotateSurface90Degrees", rotateSurface90Degrees);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_initFramerate", SDL_initFramerate);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_setFramerate", SDL_setFramerate);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_getFramerate", SDL_getFramerate);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_getFramecount", SDL_getFramecount);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_framerateDelay", SDL_framerateDelay);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMMXdetect", SDL_imageFilterMMXdetect);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMMXoff", SDL_imageFilterMMXoff);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMMXon", SDL_imageFilterMMXon);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterAdd", SDL_imageFilterAdd_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMean", SDL_imageFilterMean_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterSub", SDL_imageFilterSub_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterAbsDiff", SDL_imageFilterAbsDiff_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMult", SDL_imageFilterMult_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMultNor", SDL_imageFilterMultNor_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMultDivby2", SDL_imageFilterMultDivby2_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMultDivby4", SDL_imageFilterMultDivby4_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterBitAnd", SDL_imageFilterBitAnd_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterBitOr", SDL_imageFilterBitOr_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterDiv", SDL_imageFilterDiv_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterBitNegation", SDL_imageFilterBitNegation_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterAddByte", SDL_imageFilterAddByte_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterAddUint", SDL_imageFilterAddUint_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterAddByteToHalf", SDL_imageFilterAddByteToHalf_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterSubByte", SDL_imageFilterSubByte_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterSubUint", SDL_imageFilterSubUint_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterShiftRight", SDL_imageFilterShiftRight_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterShiftRightUint", SDL_imageFilterShiftRightUint_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterMultByByte", SDL_imageFilterMultByByte_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterShiftRightAndMultByByte", SDL_imageFilterShiftRightAndMultByByte_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterShiftLeftByte", SDL_imageFilterShiftLeftByte_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterShiftLeftUint", SDL_imageFilterShiftLeftUint_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterShiftLeft", SDL_imageFilterShiftLeft_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterBinarizeUsingThreshold", SDL_imageFilterBinarizeUsingThreshold_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterClipToRange", SDL_imageFilterClipToRange_wrapped);
	mono_add_internal_call("SDL2.SDL_gfx::SDL_imageFilterNormalizeLinear", SDL_imageFilterNormalizeLinear_wrapped);
}
