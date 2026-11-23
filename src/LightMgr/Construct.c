/* LightMgr__Construct @ 0x80208D0C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Mem__NewArray(u32);
void *LightMgr__Construct(void *arg0) {
    s32 zero;
    void *p;
    zero = 0;
    p = (char *) arg0 + 24;
    M2C_FIELD(arg0, u32 *, 0x18) = Mem__NewArray(192);
    M2C_FIELD(p, s32 *, 4) = zero;
    M2C_FIELD(p, s32 *, 8) = 48;
    M2C_FIELD(p, s32 *, 0x10) = zero;
    M2C_FIELD(p, s32 *, 0x14) = 1;
    M2C_FIELD(p, s32 *, 0xC) = 48;
    M2C_FIELD(arg0, s32 *, 4) = zero;
    M2C_FIELD(arg0, s32 *, 0xC) = zero;
    M2C_FIELD(arg0, s32 *, 0x10) = zero;
    M2C_FIELD(arg0, s32 *, 8) = zero;
    M2C_FIELD(arg0, s32 *, 0) = zero;
    M2C_FIELD(arg0, s32 *, 0x30) = zero;
    M2C_FIELD(arg0, s32 *, 0x14) = zero;
    M2C_FIELD(arg0, s32 *, 0x34) = zero;
    M2C_FIELD(arg0, s32 *, 0x38) = zero;
    return arg0;
}
