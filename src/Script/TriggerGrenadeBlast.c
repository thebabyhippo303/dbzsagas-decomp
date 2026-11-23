/* Script__TriggerGrenadeBlast @ 0x8002A484 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float Script__PopFloat(void *, void *);
void fn_80251510(void *, int, void *, void *, int);
void fn_802A9180(s32, void *, float, float, float, float, float);
extern f32 lbl_80311570 __attribute__((section(".data")));
extern f32 lbl_80311574 __attribute__((section(".data")));
extern f32 lbl_80311578 __attribute__((section(".data")));
extern f32 lbl_8031157C __attribute__((section(".data")));
extern f32 lbl_80311580 __attribute__((section(".data")));
extern f32 lbl_80311584 __attribute__((section(".data")));
extern f32 lbl_80311588 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern void *lbl_803DCEEC;

void Script__TriggerGrenadeBlast(void *arg0, void *arg1) {
    s32 sp28;
    s32 sp8;
    f32 sp10;
    f32  sp10_b_;
    f32  sp10_b;
    f64 spC;
    f64 sp14;

    sp8 = 0;
    sp10 = Script__PopFloat(arg0, arg1);
    spC = Script__PopFloat(arg0, arg1);
    sp10 = Script__PopFloat(arg0, arg1);
    sp14 = Script__PopFloat(arg0, arg1);
    sp14 = sp10;
    sp10 = lbl_80311570 * sp10;
    sp10_b = lbl_80311574;
    sp10_b_ = Script__PopFloat(arg0, arg1);
    sp28 = 1;
    fn_80251510(&lbl_803B1DDC, 0x30016, &sp8, arg0, 0);
    sp10 = spC;
    M2C_FIELD(&sp10, s32 *, 4) = (s32) M2C_FIELD(&spC, s32 *, 4);
    M2C_FIELD(&sp10, s32 *, 8) = (s32) M2C_FIELD(&spC, s32 *, 8);
    fn_802A9180(lbl_803DCEEC, &sp10, lbl_80311578, lbl_8031157C, lbl_80311580, lbl_80311584, lbl_80311588);
}
