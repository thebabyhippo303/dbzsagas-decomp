/* Asset__LoadDatabaseFile @ 0x801294F0 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
void sprintf(char *, char *, ...);
void *UberFile__OpenAsync(char *, void *, void *);
s32 FileHandle__WaitForCompletion(void *, s32, void *, void *, void *);
s32 FileHandle__Close(void *, s32);
void LoadingScreen__UpdateLoadingText(void);
void fn_80204550(void);
void fn_80204508(s32);
s32 fn_8020476C(void *, s32, s32, s32, s32, s32);
void fn_80204578(void);
extern char lbl_803279A4[] __attribute__((section(".data")));
extern char lbl_803279B0[] __attribute__((section(".data")));
extern char lbl_8036BF3C[];
extern void *lbl_803DCBF0;

s32 Asset__LoadDatabaseFile(void *self, char *dir, char *name) {
    char buf[104];
    s32 outInfo;
    s32 outBuf;
    s32 sp78;
    void *h;
    s32 r;

    if (dir != 0) {
        sprintf(buf, lbl_803279A4, dir, name);
    } else {
        sprintf(buf, lbl_803279B0, name);
    }
    h = UberFile__OpenAsync(buf, &outBuf, &outInfo);
    if (h == 0) {
        return 0;
    }
    do {
        LoadingScreen__UpdateLoadingText();
    } while (FileHandle__WaitForCompletion(h, 0, 0, 0, &sp78) != 1);
    FileHandle__Close(h, 0);
    fn_80204550();
    fn_80204508(2);
    fn_80204508(8);
    fn_80204508(4);
    r = fn_8020476C(buf, outBuf, outInfo, 0, 0, 0);
    fn_80204578();
    if (r == 0) {
        lbl_803DCBF0 = (void *)r;
    } else {
        fn_80204508(0x20);
        lbl_803DCBF0 = lbl_8036BF3C;
    }
    return r;
}
