/* BinkAX__ApplyVolumes @ 0x802EB434 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Ctx { char p[116]; s32 f116; s32 f120; s32 f124; s32 f128; char q[68]; s32 f200; s32 f204; } Ctx;
extern void BinkAX__SetVoiceMix(s32 a, s32 b, s32 c, s32 d);
void BinkAX__ApplyVolumes(Ctx *c) {
    s32 mode;
    s32 v0;
    s32 a;
    s32 b;
    if (c->f200 != 0) {
        mode = c->f116;
        v0 = 0;
        a = c->f120;
        b = c->f124;
        if (mode == 1) {
            v0 = c->f128;
        }
        BinkAX__SetVoiceMix(c->f200, a, b, v0);
    }
    if (c->f204 != 0) {
        BinkAX__SetVoiceMix(c->f204, c->f120, 0, c->f128);
    }
}