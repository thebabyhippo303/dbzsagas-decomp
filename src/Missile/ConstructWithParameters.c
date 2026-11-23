/* Missile__ConstructWithParameters @ 0x800D4C14 (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Missile__ConstructBase(void *, s32);
void Missile__Initialize(void *, s32, s32, void *, s32, s32, void *);
f32 fn_802817D4(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f64, f32, f32);
M2C_UNK fn_8028190C(s32, s32, f32);
extern f32 lbl_803228B0 __attribute__((section(".data")));
extern f32 lbl_803228B4 __attribute__((section(".data")));
extern f32 lbl_803228B8 __attribute__((section(".data")));
extern f32 lbl_803228BC;
extern f32 lbl_803228C0 __attribute__((section(".data")));
extern f32 lbl_803228C4 __attribute__((section(".data")));
extern M2C_UNK lbl_803330A8 __attribute__((section(".data")));
extern M2C_UNK lbl_80333168 __attribute__((section(".data")));
extern M2C_UNK lbl_80394624 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DCE84;
extern s32 lbl_803DD19C;
extern s32 lbl_803DD1A0;
extern s32 lbl_803DD1BC;

void *Missile__ConstructWithParameters(void *arg0, u32 arg1, s32 arg2, void *arg3, u32 arg4, s32 arg5, char *arg6) {
    s32 ld_10;
    s32 sp10;
    s32 sp18;
    char *p_370;
    s32 sp8;
    f64 temp_f1;
    s32 temp_r0;
    s32 temp_r11;
    register s32 temp_r3;

    Missile__ConstructBase(arg0, (s32) &lbl_80394624);
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_803330A8;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80333168;
    p_370 = (char *)arg0 + 0x370;
    M2C_FIELD(p_370, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    temp_r11 = lbl_803DD1A0 | lbl_803DD1BC;
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    temp_r0 = lbl_803DD19C | temp_r11;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    sp10 = temp_r11;
    sp18 = temp_r0;
    ld_10 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (ld_10 | temp_r0);
    sp8 = temp_r0;
    Missile__Initialize(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    M2C_FIELD(p_370, s32 *, 0x3c) = 0;
    temp_f1 = M2C_FIELD(arg3, f32 *, 0x14);
    if (temp_f1 != lbl_803228B0) {
        temp_r3 = fn_802817D4(lbl_803DCE84, M2C_FIELD(lbl_803DC3C0, s32 *, 0x1C3C), (s32) (arg0 + 0x38), (s32) (arg0 + 0x44), M2C_FIELD(arg0, s32 *, 0x84) + 0x8C, 0, 0, temp_f1, M2C_FIELD((arg3 + 0x14), f32 *, 4), lbl_803228B4, lbl_803228B8, lbl_803228BC, lbl_803228B0, lbl_803228C0);
        M2C_FIELD(p_370, s32 *, 0x3c) = temp_r3;
        fn_8028190C(lbl_803DCE84, temp_r3, lbl_803228C4);
    }
    return arg0;
}
