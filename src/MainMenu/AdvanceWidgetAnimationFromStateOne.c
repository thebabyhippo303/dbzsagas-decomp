/* MainMenu__AdvanceWidgetAnimationFromStateOne @ 0x801304EC (size: 0x308, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 MainMenu__GetWidgetBoundsDiagonal(void *);
void fn_80260304(void *, float, float);
f32 fn_8026B0C8(void *, int);
void * fn_8026B420(void *);
extern f32 lbl_8032A9B8 __attribute__((section(".data")));
extern f32 lbl_8032A9BC __attribute__((section(".data")));
extern f32 lbl_8032A9C0 __attribute__((section(".data")));
extern f32 lbl_8032A9C4 __attribute__((section(".data")));
extern f32 lbl_8032A9C8 __attribute__((section(".data")));
extern f32 lbl_8032A9CC;
extern f32 lbl_8032A9D0 __attribute__((section(".data")));
extern f32 lbl_8032A9D4 __attribute__((section(".data")));
extern f32 lbl_8032A9D8 __attribute__((section(".data")));
extern f32 lbl_8032A9DC __attribute__((section(".data")));

void MainMenu__AdvanceWidgetAnimationFromStateOne(s32 arg0) {
    void *temp_r9;
    register void *temp_r30_2;
    void *temp_r30_3;
    f32 ld_A50;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_8032A9B8, lbl_8032A9B8, lbl_8032A9B8, lbl_8032A9B8);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x4A4));
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x94, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304((M2C_FIELD(arg0, void **, 0x4A4) + 0x94), lbl_8032A9C0, MainMenu__GetWidgetBoundsDiagonal(arg0 + 0x340));
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x244, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x244, lbl_8032A9C4, M2C_FIELD(arg0, f32 *, 0xA60));
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x4A4), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x664));
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x94, lbl_8032A9BC, lbl_8032A9BC);
    temp_r30_2 = M2C_FIELD(arg0, void **, 0x664) + 0x94;
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x94, lbl_8032A9C0, lbl_8032A9BC);
    fn_80260304(temp_r30_2, lbl_8032A9C8, MainMenu__GetWidgetBoundsDiagonal(arg0 + 0x500));
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x244, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x244, lbl_8032A9C0, lbl_8032A9BC);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x824));
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x244, lbl_8032A9CC, M2C_FIELD(arg0, f32 *, 0xA60));
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x664), 0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x94, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x94, lbl_8032A9C8, lbl_8032A9BC);
    temp_r30_3 = M2C_FIELD(arg0, void **, 0x824) + 0x94;
    fn_80260304(temp_r30_3, lbl_8032A9D0, MainMenu__GetWidgetBoundsDiagonal(arg0 + 0x6C0));
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x244, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x244, lbl_8032A9C8, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x244, lbl_8032A9D4, M2C_FIELD(arg0, f32 *, 0xA60));
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x824), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x9E4));
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x94, lbl_8032A9BC, lbl_8032A9BC);
    temp_r30_2 = M2C_FIELD(arg0, void **, 0x9E4) + 0x94;
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x94, lbl_8032A9D0, lbl_8032A9BC);
    fn_80260304(temp_r30_2, lbl_8032A9D8, MainMenu__GetWidgetBoundsDiagonal(arg0 + 0x880));
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x244, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x244, lbl_8032A9D0, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x244, lbl_8032A9DC, M2C_FIELD(arg0, f32 *, 0xA60));
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x9E4), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x304));
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x304, lbl_8032A9BC, lbl_8032A9BC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x304, lbl_8032A9D0, lbl_8032A9BC);
    ld_A50 = M2C_FIELD(arg0, f32 *, 0xA50);
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x304, lbl_8032A9D8, ld_A50);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x304), 0);
    M2C_FIELD(arg0, s32 *, 0xA40) = 2;
}
