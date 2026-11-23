/* Fighter__CacheLeftHandBoneId @ 0x800EFC40 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 fn_802B5540(void);
s32 Actor__FindBoneIdByName(void *actor, const char *name, void *out);
extern char lbl_80320DE4[] __attribute__((section(".data")));
extern f32 lbl_80323B80 __attribute__((section(".data")));
extern s32 lbl_803DC3C0 __attribute__((section(".sdata")));
extern s32 lbl_803DD19C __attribute__((section(".sdata")));

s32 Fighter__CacheLeftHandBoneId(void *arg0) {
    void *temp_r7;
    s32 mask;
    s32 base;
    f32 zero;

    if (fn_802B5540() == 0) {
        return 0;
    }
    mask = lbl_803DD19C;
    zero = lbl_80323B80;
    base = lbl_803DC3C0;
    temp_r7 = (char *)arg0 + 0x778;
    M2C_FIELD(arg0, s32 *, 0x5E8) = base + 0x20;
    M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg0, s32 *, 0x10) | mask;
    M2C_FIELD(arg0, s32 *, 0x774) = 0;
    M2C_FIELD(arg0, s32 *, 0x764) = 0;
    M2C_FIELD(arg0, s32 *, 0x768) = 0;
    M2C_FIELD(arg0, f32 *, 0x778) = zero;
    M2C_FIELD(temp_r7, f32 *, 4) = zero;
    M2C_FIELD(temp_r7, f32 *, 8) = zero;
    M2C_FIELD(arg0, s32 *, 0x784) = 0;
    Actor__FindBoneIdByName(arg0, lbl_80320DE4, (char *)arg0 + 0x798);
    return 1;
}
