/* SoundGroup__CreateVoice @ 0x8019D590 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 VoiceHandle__SetVoice(void *, s32);
void SoundGroup__ReleaseVoice(void *, s32);
void Voice__SetHandle(void *, s32);
M2C_UNK VoiceHandle__Allocate(s32);
M2C_UNK fn_80198EEC(s32);
s32 SoundGroup__CreateVoice(void *arg0, s32 arg1) {
    s32 voice;
    s32 handle;
    s32 *list;
    s32 head;

    voice = M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s16 *, 0x10));
    if (voice == 0) {
        return 0;
    }
    handle = VoiceHandle__SetVoice(VoiceHandle__Allocate(4), voice);
    fn_80198EEC(arg1);
    if (handle == 0) {
        SoundGroup__ReleaseVoice(arg0, voice);
        return 0;
    }
    Voice__SetHandle((void *) voice, handle);
    list = (s32 *)((char *)arg0 + 0x48);
    head = list[0];
    if (head == 0) {
        list[1] = voice;
        list[0] = voice;
        M2C_FIELD(voice, s32 *, 0x50) = head;
        M2C_FIELD(voice, s32 *, 0x4C) = head;
    } else {
        M2C_FIELD(voice, s32 *, 0x50) = 0;
        M2C_FIELD(voice, s32 *, 0x4C) = list[1];
        M2C_FIELD(list[1], s32 *, 0x50) = voice;
        list[1] = voice;
    }
    list[3] = list[3] + 1;
    return voice;
}
