/* LoadingScreen__Initialize @ 0x8012960C (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef unsigned int u32; typedef float f32;
typedef void (*F1)(void *, char *);
typedef void (*F2)(void *, f32, f32);
typedef void (*F3)(void *, s32, s32, s32, s32);
typedef void (*F0)(void *);
#define VT(o) (*(char **)((char *)(o) + 0x19C))
#define ADJ(o, a) ((char *)(o) + *(s16 *)(VT(o) + (a)))
#define SLOT(o, t, s) (*(t *)(VT(o) + (s)))

void fn_8022872C(s32);
void *Mem__New(u32);
void *FmvQueue__Construct(void *);
void LoadingScreen__ToggleBumperIndicators(s32, void *);
s32 FmvQueue__CreatePlayer(void *, void *);
void FmvQueue__StartBackgroundMovie(void *, s32);
void fn_8021BEBC(s32);
void fn_80228B48(void *);
u32 Timer__GetMilliseconds(void);
void fn_8026B904(void);
void DVD__GetErrorMessage(void);
void LoadingScreen__UpdateLoadingText(void);
extern char lbl_803A35A0[] __attribute__((section(".data")));
extern char lbl_803279B8[] __attribute__((section(".data")));
extern f32 lbl_803279C0 __attribute__((section(".data")));
extern f32 lbl_803279C4 __attribute__((section(".data")));
extern f32 lbl_803279C8 __attribute__((section(".data")));
extern f32 lbl_803279CC __attribute__((section(".data")));
extern f32 lbl_803279D0 __attribute__((section(".data")));
extern s32 lbl_803DC6D8;
extern s32 lbl_803DC6E0;
extern void *lbl_803DD934;
extern u32 lbl_803DD938;
extern f32 lbl_803DD93C;
extern f32 lbl_803DD940;
extern void *lbl_803DD944;

void LoadingScreen__Initialize(s32 arg0, f32 farg0) {
    char *g;
    f32 v;
    s32 n;

    fn_8022872C(1);
    lbl_803DD944 = FmvQueue__Construct(Mem__New(24));
    LoadingScreen__ToggleBumperIndicators(arg0, lbl_803DD944);
    FmvQueue__CreatePlayer(lbl_803DD944, DVD__GetErrorMessage);
    FmvQueue__StartBackgroundMovie(lbl_803DD944, 0);
    lbl_803DC6E0 = 1;
    fn_8021BEBC(1);
    g = lbl_803A35A0;
    switch (*(s32 *)(g + 0x3C)) {
    case 0:
        v = lbl_803279C0;
        goto block_14;
    case 1:
        if (*(s32 *)(g + 0x40) > 0) {
            n = *(s32 *)(g + 0x40);
            do {
                *(f32 *)(g + 0x28) = *(f32 *)(g + 0x28) + *(f32 *)(g + 0x28);
                n--;
            } while (n != 0);
        }
        break;
    case 2:
        if (*(s32 *)(g + 0x40) > 0) {
            n = *(s32 *)(g + 0x40);
            v = *(f32 *)(g + 0x28);
            do {
                v = v * lbl_803279C4;
                n--;
            } while (n != 0);
block_14:
            *(f32 *)(g + 0x28) = v;
        }
        break;
    }
    do { *(s32 *)(g + 0x3C) = 3; } while (0);
    fn_80228B48(LoadingScreen__UpdateLoadingText);
    lbl_803DD938 = Timer__GetMilliseconds();
    lbl_803DD940 = lbl_803279C8;
    lbl_803DD93C = farg0;
    if (lbl_803DC6D8 != 0) {
        SLOT(lbl_803DD934, F1, 0x36C)(ADJ(lbl_803DD934, 0x368), lbl_803279B8);
        SLOT(lbl_803DD934, F2, 0xAC)(ADJ(lbl_803DD934, 0xA8), lbl_803279CC, lbl_803279D0);
        SLOT(lbl_803DD934, F3, 0x21C)(ADJ(lbl_803DD934, 0x218), 1, 255, 2, 2);
        SLOT(lbl_803DD934, F0, 0x1D4)(ADJ(lbl_803DD934, 0x1D0));
        SLOT(lbl_803DD934, F0, 0x3C)(ADJ(lbl_803DD934, 0x38));
        fn_8026B904();
    }
}
