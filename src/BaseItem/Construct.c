/* BaseItem__Construct @ 0x801D3A10 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Timer__GetMilliseconds(void);
extern M2C_UNK lbl_80342350 __attribute__((section(".data")));
extern s32 lbl_803A35A0 __attribute__((section(".data")));

void *BaseItem__Construct(void *arg0, s32 arg1) {
    s32 *p;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &lbl_80342350;
    p = &lbl_803A35A0;
    M2C_FIELD(arg0, u32 *, 8) = Timer__GetMilliseconds();
    M2C_FIELD(arg0, s32 *, 0xC) = *p;
    return arg0;
}
