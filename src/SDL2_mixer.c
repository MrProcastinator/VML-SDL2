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

#include <SDL2/SDL_mixer.h>

extern void** mono_aot_module_SDL2_mixer_info;

void VMLSDL2MixerRegister()
{
	mono_aot_register_module(mono_aot_module_SDL2_mixer_info);

	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_MIX_Linked_Version", Mix_Linked_Version);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Init", Mix_Init);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Quit", Mix_Quit);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_OpenAudio", Mix_OpenAudio);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_AllocateChannels", Mix_AllocateChannels);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_QuerySpec", Mix_QuerySpec);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_LoadWAV_RW", Mix_LoadWAV_RW);
	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_Mix_LoadMUS", Mix_LoadMUS);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_QuickLoad_WAV", Mix_QuickLoad_WAV);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_QuickLoad_RAW", Mix_QuickLoad_RAW);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FreeChunk", Mix_FreeChunk);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FreeMusic", Mix_FreeMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GetNumChunkDecoders", Mix_GetNumChunkDecoders);
	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_Mix_GetChunkDecoder", Mix_GetChunkDecoder);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GetNumMusicDecoders", Mix_GetNumMusicDecoders);
	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_Mix_GetMusicDecoder", Mix_GetMusicDecoder);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GetMusicType", Mix_GetMusicType);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetPostMix", Mix_SetPostMix);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_HookMusic", Mix_HookMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_HookMusicFinished", Mix_HookMusicFinished);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GetMusicHookData", Mix_GetMusicHookData);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_ChannelFinished", Mix_ChannelFinished);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_RegisterEffect", Mix_RegisterEffect);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_UnregisterEffect", Mix_UnregisterEffect);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_UnregisterAllEffects", Mix_UnregisterAllEffects);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetPanning", Mix_SetPanning);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetPosition", Mix_SetPosition);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetDistance", Mix_SetDistance);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetReverseStereo", Mix_SetReverseStereo);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_ReserveChannels", Mix_ReserveChannels);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GroupChannel", Mix_GroupChannel);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GroupChannels", Mix_GroupChannels);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GroupAvailable", Mix_GroupAvailable);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GroupCount", Mix_GroupCount);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GroupOldest", Mix_GroupOldest);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GroupNewer", Mix_GroupNewer);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_PlayChannelTimed", Mix_PlayChannelTimed);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_PlayMusic", Mix_PlayMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadeInMusic", Mix_FadeInMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadeInMusicPos", Mix_FadeInMusicPos);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadeInChannelTimed", Mix_FadeInChannelTimed);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Volume", Mix_Volume);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_VolumeChunk", Mix_VolumeChunk);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_VolumeMusic", Mix_VolumeMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_HaltChannel", Mix_HaltChannel);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_HaltGroup", Mix_HaltGroup);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_HaltMusic", Mix_HaltMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_ExpireChannel", Mix_ExpireChannel);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadeOutChannel", Mix_FadeOutChannel);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadeOutGroup", Mix_FadeOutGroup);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadeOutMusic", Mix_FadeOutMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadingMusic", Mix_FadingMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_FadingChannel", Mix_FadingChannel);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Pause", Mix_Pause);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Resume", Mix_Resume);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Paused", Mix_Paused);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_PauseMusic", Mix_PauseMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_ResumeMusic", Mix_ResumeMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_RewindMusic", Mix_RewindMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_PausedMusic", Mix_PausedMusic);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetMusicPosition", Mix_SetMusicPosition);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_Playing", Mix_Playing);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_PlayingMusic", Mix_PlayingMusic);
	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_Mix_SetMusicCMD", Mix_SetMusicCMD);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_SetSynchroValue", Mix_SetSynchroValue);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GetSynchroValue", Mix_GetSynchroValue);
	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_Mix_SetSoundFonts", Mix_SetSoundFonts);
	mono_add_internal_call("SDL2.SDL_mixer::INTERNAL_Mix_GetSoundFonts", Mix_GetSoundFonts);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_EachSoundFont", Mix_EachSoundFont);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_GetChunk", Mix_GetChunk);
	mono_add_internal_call("SDL2.SDL_mixer::Mix_CloseAudio", Mix_CloseAudio);
}
