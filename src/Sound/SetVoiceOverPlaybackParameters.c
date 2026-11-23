/* Sound__SetVoiceOverPlaybackParameters @ 0x800228E0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
void Sound__SetVoiceOverPlaybackParameters(void *sound, s32 enabled, s32 flags, f32 pitch, f32 volume) {
    if (enabled == 0 && flags == 0) return;
    *(s32 *)((char *)sound + 0x2164) = 0;
    if (enabled != 0) *(s32 *)((char *)sound + 0x2164) = 1;
    if (flags != 0) *(s32 *)((char *)sound + 0x2164) |= 8;
    *(volatile f32 *)((char *)sound + 0x216C) = volume;
    *(volatile f32 *)((char *)sound + 0x2168) = pitch;
}
