/* SoundDef__RandomPitch @ 0x801928D4 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Random__Float01(void);
extern f32 lbl_8033F408 __attribute__((section(".data")));

static const char pool_pad[0xF400] = {1};

f32 SoundDef__RandomPitch(char *arg0) {
    f32 r = Random__Float01();
    s32 lo = (s8) arg0[0xA];
    s32 hi = (s8) arg0[0xB];
    f32 flo = (f32) lo;

    return (r * (f32) (hi - lo) + flo) * lbl_8033F408;
}
