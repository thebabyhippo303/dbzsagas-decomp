/* Bink__UpdateSlowestFrames @ 0x802EEE18 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
typedef struct { char pad0[0xC]; u32 fC; char pad1[0x27C]; u32 start; u32 slow0; u32 frame0; u32 slow1; u32 frame1; } BinkState;
void Bink__UpdateSlowestFrames(BinkState *arg0, u32 arg1) {
    u32 t0 = arg0->start;
    u32 slow; u32 t;
    if (t0 == 0) { return; }
    arg1 -= t0;
    slow = arg0->slow0;
    arg0->start = 0;
    if (arg1 > slow) {
        t = arg0->frame0;
        arg0->frame0 = arg0->fC;
        arg0->frame1 = t;
        arg0->slow0 = arg1;
        arg0->slow1 = slow;
        return;
    }
    if (arg1 > arg0->slow1) { arg0->slow1 = arg1; arg0->frame1 = arg0->fC; }
}
