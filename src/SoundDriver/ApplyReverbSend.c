/* SoundDriver__ApplyReverbSend @ 0x80196500 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Sound__VolumeToAxVolume(f32);
M2C_UNK fn_802D6DC4(s32, s32);                      /* extern */
M2C_UNK fn_802D6DEC(s32, s32);                      /* extern */
extern s32 lbl_803DE4D4;

s32 SoundDriver__ApplyReverbSend(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == 0) {
            fn_802D6DEC(arg1, lbl_803DE4D4);
        } else {
            if (arg2 != 0) {
                fn_802D6DEC(arg1, (lbl_803DE4D4 * Sound__VolumeToAxVolume(M2C_FIELD(arg0, f32 *, 0x380))) / -10000);
            } else {
                fn_802D6DEC(arg1, lbl_803DE4D4);
            }
            if (arg3 == 0) {
                fn_802D6DC4(arg1, lbl_803DE4D4);
            }
        }
    }
    return 1;
}
