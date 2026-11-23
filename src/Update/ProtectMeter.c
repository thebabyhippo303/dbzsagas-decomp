/* Update__ProtectMeter @ 0x80043B78 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ProtectMeter__HideDisplayWidgetsIfActive(void *);
typedef struct { f32 x, y; } PmV2;
typedef struct { s32 a, b; } PmI2;
void ProtectMeter__SetProgress(void *, PmV2 *, f32);
s32 Script__PopInt(void *, void *);
extern f32 lbl_80311E64 __attribute__((section(".data")));
extern f32 lbl_80311E68 __attribute__((section(".data")));
extern f64 lbl_80311E70 __attribute__((section(".data")));
extern void *lbl_803DC6B4 __attribute__((section(".sdata")));

void Update__ProtectMeter(void *arg0, void *arg1) {
    PmV2 pad;
    PmV2 arg;
    PmV2 tmp;
    s32 a;
    s32 b;

    pad.x = 0;
    a = Script__PopInt(arg0, arg1);
    b = Script__PopInt(arg0, arg1);
    if ((void *) lbl_803DC6B4 != NULL) {
        tmp.x = lbl_80311E64;
        tmp.y = lbl_80311E68;
        *(PmI2 *)&arg = *(PmI2 *)&tmp;
        ProtectMeter__SetProgress(lbl_803DC6B4, &arg, (f32) ((f64) a - lbl_80311E70) / (f32) ((f64) b - lbl_80311E70));
        ProtectMeter__HideDisplayWidgetsIfActive(lbl_803DC6B4);
    }
}
