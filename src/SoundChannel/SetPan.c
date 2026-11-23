/* SoundChannel__SetPan @ 0x80196D80 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MIXSetPan(s32, s32);
extern f32 lbl_8033F684 __attribute__((section(".data")));
extern f32 lbl_803DCC38;

s32 SoundChannel__SetPan(void *arg0, f32 farg0) {
    s32 h;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    h = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 8);
    if (h != 0) {
        MIXSetPan(h, (s32) ((farg0 * lbl_803DCC38 * lbl_8033F684) + lbl_8033F684));
    }
    return 1;
}
