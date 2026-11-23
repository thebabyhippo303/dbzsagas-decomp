/* Device__Construct @ 0x800E5178 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__Construct(void *, void *);
extern M2C_UNK lbl_80332300 __attribute__((section(".data")));
extern M2C_UNK lbl_803323D0 __attribute__((section(".data")));
extern M2C_UNK lbl_803323F0 __attribute__((section(".data")));
extern M2C_UNK lbl_80332498 __attribute__((section(".data")));
extern M2C_UNK lbl_80394664 __attribute__((section(".data")));

void *Device__Construct(void *arg0) {
    Actor__Construct(arg0, &lbl_80394664);
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_803323F0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = &lbl_803323D0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C8) = &lbl_80332300;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80332498;
    M2C_FIELD(arg0, s32 *, 0x510) = 0;
    return arg0;
}
