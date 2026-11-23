/* MainMenu__InitializeScreenWidgets @ 0x80138C48 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void fn_8026D1E4(void *, f32, f32);
void fn_8026D520(void *);
void fn_80243680(s32);
void MainMenu__StartScreenTransition(void *, f32);
void MainMenu__ConfigureScreen(void *, s32);

extern f32 lbl_8032B450 __attribute__((section(".data")));
extern f32 lbl_8032B454 __attribute__((section(".data")));
extern f32 lbl_8032B458 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DC704;

void MainMenu__InitializeScreenWidgets(void *self) {
    f32 a;
    f32 b;
    f32 c;

    a = lbl_8032B450;
    b = lbl_8032B454;
    c = lbl_8032B458;
    M2C_FIELD(self, s32 *, 0x87C) = 0;
    M2C_FIELD(self, f32 *, 0x874) = a;
    fn_8026D1E4((char *)self + 0x1F4, b, c);
    fn_8026D1E4((char *)self + 0x394, lbl_8032B454, lbl_8032B458);
    fn_8026D1E4((char *)self + 0x534, lbl_8032B454, lbl_8032B458);
    fn_8026D1E4((char *)self + 0x6D4, lbl_8032B454, lbl_8032B458);
    fn_8026D520(self);
    fn_80243680(1);
    MainMenu__StartScreenTransition(lbl_803DC704, (M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) = 3, lbl_8032B458));
    MainMenu__ConfigureScreen(lbl_803DC704, 1);
}
