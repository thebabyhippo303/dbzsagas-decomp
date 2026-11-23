/* Init__ProtectMeter @ 0x80043AF8 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *ProtectMeter__Construct(void *, void *);
void *Script__PopInt(void *, void *);
void *fn_801842C4(unsigned int);
void ProtectMeter__SetProgress(void *, f32 *, f32);
extern f32 lbl_80311E58 __attribute__((section(".data")));
extern f32 lbl_80311E5C __attribute__((section(".data")));
extern f32 lbl_80311E60 __attribute__((section(".data")));
extern void *lbl_803DC6B4;

typedef struct {
    f32 x;
    f32 y;
} Vec2;

void Init__ProtectMeter(void *arg0, void *arg1) {
    volatile Vec2 dst;
    Vec2 src;
    void *temp_r30;
    void *temp_r3;

    temp_r30 = Script__PopInt(arg0, arg1);
    temp_r3 = ProtectMeter__Construct(fn_801842C4(0x18U), temp_r30);
    lbl_803DC6B4 = temp_r3;
    if (temp_r3 != NULL) {
        src.x = lbl_80311E58;
        src.y = lbl_80311E5C;
        dst = *(Vec2 *)&src;
        ProtectMeter__SetProgress(temp_r3, &dst, lbl_80311E60);
    }
}
