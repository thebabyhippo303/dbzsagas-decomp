/* SoundChannel__SetVolume @ 0x80196D04 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Sound__VolumeToAxVolume(f32);                   /* extern */
void MIXSetInput(void *, u32);
extern f32 lbl_803DCC30;
extern s32 lbl_803DE4D4;

s32 SoundChannel__SetVolume(void *arg0, f32 farg0) {
    s32 v;

    M2C_FIELD(arg0, f32 *, 0) = farg0;
    if (0 != M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 8)) {
        v = (lbl_803DE4D4 * Sound__VolumeToAxVolume(farg0 * lbl_803DCC30)) / -10000;
        MIXSetInput(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 8), v);
    }
    return 1;
}
