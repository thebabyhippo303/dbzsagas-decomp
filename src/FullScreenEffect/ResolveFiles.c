/* FullScreenEffect__ResolveFiles @ 0x800E140C (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * File__Resolve(const char *, void *, int);
void * fn_80184348(int);
extern s8 lbl_80322D28 __attribute__((section(".data")));
extern s8 lbl_80322D38 __attribute__((section(".data")));
extern s8 lbl_80322D48 __attribute__((section(".data")));
extern s8 lbl_80322D5C __attribute__((section(".data")));
extern s8 lbl_80322D6C __attribute__((section(".data")));
extern s8 lbl_80322D7C __attribute__((section(".data")));
extern s8 lbl_80322D90 __attribute__((section(".data")));
extern s8 lbl_80322DA8 __attribute__((section(".data")));
extern s8 lbl_80322DB8 __attribute__((section(".data")));
extern s8 lbl_80322DC8 __attribute__((section(".data")));
extern s8 lbl_80322DD8 __attribute__((section(".data")));
extern s8 lbl_80322DE8 __attribute__((section(".data")));
extern s8 lbl_80322DFC __attribute__((section(".data")));
extern s8 lbl_80322E0C __attribute__((section(".data")));
extern s8 lbl_80322E1C __attribute__((section(".data")));

/* Byte-matched: FullScreenEffect__ResolveFiles @ 0x800E140C (0x188). ProDG -O2. */
void *FullScreenEffect__ResolveFiles(void *arg0) {
    void *temp_r30;
    s32 zero;
    s32 eight;

    temp_r30 = arg0 + 4;
    zero = 0;
    eight = 8;
    M2C_FIELD(arg0, void **, 4) = fn_80184348(0x20);
    M2C_FIELD(temp_r30, s32 *, 8) = eight;
    M2C_FIELD(temp_r30, s32 *, 0xC) = eight;
    M2C_FIELD(temp_r30, s32 *, 4) = zero;
    M2C_FIELD(temp_r30, s32 *, 0x10) = zero;
    M2C_FIELD(temp_r30, s32 *, 0x14) = zero;
    File__Resolve(&lbl_80322D28, NULL, 0);
    File__Resolve(&lbl_80322D38, NULL, 0);
    File__Resolve(&lbl_80322D48, NULL, 0);
    File__Resolve(&lbl_80322D5C, NULL, 0);
    File__Resolve(&lbl_80322D6C, NULL, 0);
    File__Resolve(&lbl_80322D7C, NULL, 0);
    File__Resolve(&lbl_80322D90, NULL, 0);
    File__Resolve(&lbl_80322DA8, NULL, 0);
    File__Resolve(&lbl_80322DB8, NULL, 0);
    File__Resolve(&lbl_80322DC8, NULL, 0);
    File__Resolve(&lbl_80322DD8, NULL, 0);
    File__Resolve(&lbl_80322DE8, NULL, 0);
    File__Resolve(&lbl_80322DFC, NULL, 0);
    File__Resolve(&lbl_80322E0C, NULL, 0);
    File__Resolve(&lbl_80322E1C, NULL, 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

