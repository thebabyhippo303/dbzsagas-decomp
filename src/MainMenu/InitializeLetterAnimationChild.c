/* MainMenu__InitializeLetterAnimationChild @ 0x80114C70 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern f32 lbl_80326758 __attribute__((section(".data")));
extern f32 lbl_8032675C __attribute__((section(".data")));

void MainMenu__InitializeLetterAnimationChild(s32 arg0) {
    f32 a = lbl_80326758;
    f32 b = lbl_8032675C;
    s32 c = 1;
    s32 d = 5;
    M2C_FIELD(arg0, s32 *, 0x48) = c;
    M2C_FIELD(arg0, f32 *, 0x28) = a;
    M2C_FIELD(arg0, volatile s32 *, 0x3C4) = d;
    M2C_FIELD(arg0, f32 *, 0x10) = b;
}
