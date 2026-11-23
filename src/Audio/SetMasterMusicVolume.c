/* Audio__SetMasterMusicVolume @ 0x80190558 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void StreamQueue__Volume(void *, f32);
extern f32 lbl_8033F2D4 __attribute__((section(".data")));
extern f32 lbl_8033F2D8 __attribute__((section(".data")));

void Audio__SetMasterMusicVolume(void *arg0, f32 farg0) {
    f32 lo = lbl_8033F2D4;
    f32 hi = lbl_8033F2D8;
    f32 r = lo;
    if (!(farg0 < lo)) {
        if (!(farg0 <= hi)) r = hi;
        else r = farg0;
    }
    StreamQueue__Volume(arg0, r);
}
