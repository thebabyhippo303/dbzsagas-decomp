/* Protagonist__Construct @ 0x801F0F7C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK CActor__Construct(s32, s32);
f32 OrientedBox__Construct(s32, s32, void *, void *);
extern f32 lbl_80344214 __attribute__((section(".data")));
extern M2C_UNK lbl_80344A28 __attribute__((section(".data")));

s32 Protagonist__Construct(s32 arg0, s32 arg1) {
    s32 temp_r28;
    s32 zero;
    f32 *v;
    f32 f;

    zero = 0;

    temp_r28 = 0x13C + arg0;
    CActor__Construct(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x138) = zero;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344A28;
    OrientedBox__Construct(temp_r28, arg0 + 0x44, arg0 + 0x38, 0);
    M2C_FIELD(arg0, s32 *, 0x190) = zero;
    M2C_FIELD(arg0, s32 *, 0x188) = zero;
    v = (f32 *)(arg0 + 0x178);
    f = lbl_80344214;
    *v = f;
    v[1] = f;
    v[2] = f;
    v[3] = f;
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r28;
    M2C_FIELD(arg0, s32 *, 0x194) = zero;
    M2C_FIELD(arg0, s32 *, 0x164) = zero;
    M2C_FIELD(arg0, s32 *, 0x168) = zero;
    M2C_FIELD(arg0, s32 *, 0x16C) = zero;
    M2C_FIELD(arg0, s32 *, 0x170) = zero;
    M2C_FIELD(arg0, s32 *, 0x12C) = zero;
    M2C_FIELD(arg0, s32 *, 0x18C) = zero;
    return arg0;
}
