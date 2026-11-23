/* SimLoop__InitializeLevelPhysics @ 0x80020D20 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Physics__SetGravity(s32);
M2C_UNK fn_80255328(s32, s32);
extern f32 lbl_80310368 __attribute__((section(".data")));
extern f32 lbl_8031036C __attribute__((section(".data")));
extern M2C_UNK lbl_803A3684 __attribute__((section(".data")));
extern M2C_UNK lbl_803BB350 __attribute__((section(".data")));
extern s32 lbl_803DCCBC;
typedef struct { f32 x, y, z; } Vec3;

u32 SimLoop__InitializeLevelPhysics(void) {
    Vec3 a;
    Vec3 b;
    Vec3 *pa;

    pa = &a;
    a.x = lbl_80310368;
    pa->y = lbl_8031036C;
    pa->z = lbl_80310368;
    b = *pa;
    Physics__SetGravity((s32) &b);
    fn_80255328(lbl_803DCCBC, (s32) &lbl_803A3684);
    fn_80255328(lbl_803DCCBC, (s32) &lbl_803BB350);
    return 1;
}
