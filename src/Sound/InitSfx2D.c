/* Sound__InitSfx2D @ 0x80188770 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *fn_8019077C(void *sys, void *name);
const char *Sfx2DGroup__GetName(void);
M2C_UNK SoundGroup__Create2D(void *sys, const char *name, s32 arg, s32 flag);
s32 fn_80191658(void *sys, M2C_UNK *path, const char *name);
extern M2C_UNK lbl_8033DFF4 __attribute__((section(".data")));
extern void *lbl_803DCBFC;
extern s32 lbl_803DCC00 __attribute__((section(".sdata")));
extern void *lbl_803DCC20 __attribute__((section(".sdata")));

s32 Sound__InitSfx2D(void *arg0, s32 arg1) {
    s32 var_r0;

    lbl_803DCBFC = fn_8019077C(lbl_803DCC20, arg0);
    SoundGroup__Create2D(lbl_803DCC20, Sfx2DGroup__GetName(), arg1, 1);
    lbl_803DCC00 = fn_80191658(lbl_803DCC20, &lbl_8033DFF4, Sfx2DGroup__GetName());
    var_r0 = 1;
    if (lbl_803DCC00 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
