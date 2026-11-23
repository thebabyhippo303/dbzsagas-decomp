/* Plant__Construct @ 0x800F2CEC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern char lbl_80332088[];
extern char lbl_80332068[];
extern char lbl_80332130[];
extern char lbl_80394634[];
extern const s32 lbl_803DE610;
void Simple__ConstructBase(void *, void *);
void *Plant__Construct(void *arg0) {
    const void *t1;
    const void *t2;
    const void *t3;
    const s32 v;
    Simple__ConstructBase(arg0, lbl_80394634);
    t1 = lbl_80332088;
    t2 = lbl_80332068;
    t3 = lbl_80332130;
    v = lbl_803DE610;
    M2C_FIELD(arg0, const void **, 0x198) = t1;
    M2C_FIELD(arg0, const void **, 0x1B4) = t2;
    M2C_FIELD(arg0, const void **, 0x34) = t3;
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = v;
    return arg0;
}
