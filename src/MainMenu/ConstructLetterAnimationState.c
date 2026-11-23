/* MainMenu__ConstructLetterAnimationState @ 0x8012F2E0 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;
typedef float f32;
extern u32 Mem__NewArray(u32);
extern void fn_8026B590(void *);
extern f32 lbl_8032A918 __attribute__((section(".data")));
extern char lbl_80335BA0[] __attribute__((section(".data")));
extern char lbl_80335F08[] __attribute__((section(".data")));

void *MainMenu__ConstructLetterAnimationState(void *arg0) {
    char *self = arg0;
    char *a;
    char *list;
    char *child;
    s32 z = 0;
    s32 c8 = 8;
    u32 n;
    s32 zz;
    f32 v;

    a = self + 0x1A0;
    fn_8026B590(arg0);
    list = self + 0x344;
    *(char **)(self + 0x19C) = lbl_80335BA0;
    child = self + 0x368;
    fn_8026B590(a);
    n = 3;
    *(char **)(a + 0x19C) = lbl_80335F08;
    *(u32 *)(self + 0x344) = Mem__NewArray(32);
    *(s32 *)(list + 4) = z;
    *(s32 *)(list + 8) = c8;
    *(s32 *)(list + 0x10) = z;
    *(s32 *)(list + 0xC) = c8;
    *(s32 *)(list + 0x14) = z;
    *(s32 *)(a + 0x1A0) = z;
    do {
        fn_8026B590(child);
        child += 0x1A0;
    } while (n--);
    zz = 0;
    v = lbl_8032A918;
    *(f32 *)(self + 0x360) = v;
    *(s32 *)(self + 0x9E8) = zz;
    *(f32 *)(self + 0x35C) = v;
    *(s32 *)(self + 0x9EC) = zz;
    *(s32 *)(self + 0x9F0) = zz;
    return arg0;
}
