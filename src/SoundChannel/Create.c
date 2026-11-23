/* SoundChannel__Create @ 0x8019705C (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
M2C_UNK SoundDriver__AcquireAxVoice(s32, s32);
M2C_UNK SoundChannel__Construct(s32, s32, s32);
M2C_UNK SoundDriver__ReleaseAxVoice(s32, s32);
s32 fn_8019FAF4(s32, s32);
M2C_UNK fn_8019692C(s32, s32);
extern s32 lbl_803DE4AC;

s32 SoundChannel__Create(void *arg0) {
    s32 voice;
    s32 ch;
    s32 flag;
    s32 head;
    char *list;

    voice = SoundDriver__AcquireAxVoice(*M2C_FIELD(arg0, s32 **, 0), (s32) arg0);
    if (voice == 0) {
        return 0;
    }
    ch = SoundChannel__Construct(Mem__New(0x30), (s32) arg0, voice);
    if (ch == 0) {
        SoundDriver__ReleaseAxVoice(*M2C_FIELD(arg0, s32 **, 0), voice);
        return 0;
    }
    flag = fn_8019FAF4((s32) ((char *)arg0 + 4), lbl_803DE4AC);
    if (flag != 0) {
        fn_8019692C(M2C_FIELD(arg0, s32 *, 0), ch);
    } else {
        head = M2C_FIELD(arg0, s32 *, 0x54);
        list = (char *)arg0 + 0x54;
        if (head == 0) {
            M2C_FIELD(list, s32 *, 4) = ch;
            M2C_FIELD(arg0, s32 *, 0x54) = ch;
            M2C_FIELD(ch, s32 *, 0x2C) = flag;
            M2C_FIELD(ch, s32 *, 0x28) = flag;
        } else {
            M2C_FIELD(ch, s32 *, 0x2C) = head;
            M2C_FIELD(ch, s32 *, 0x28) = flag;
            M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x54), s32 *, 0x28) = ch;
            M2C_FIELD(arg0, s32 *, 0x54) = ch;
        }
        M2C_FIELD(list, s32 *, 0xC) = M2C_FIELD(list, s32 *, 0xC) + 1;
    }
    return ch;
}
