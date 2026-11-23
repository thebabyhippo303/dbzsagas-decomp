/* MainMenu__ResetWidgetAnimation @ 0x801307F4 (size: 0x34C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 MainMenu__GetWidgetBoundsDiagonal(void *);
void fn_80260304(void *, float, float);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
extern f32 lbl_8032A9E0 __attribute__((section(".data")));
extern f32 lbl_8032A9E4 __attribute__((section(".data")));
extern f32 lbl_8032A9E8 __attribute__((section(".data")));
extern f32 lbl_8032A9EC __attribute__((section(".data")));
extern f32 lbl_8032A9F0 __attribute__((section(".data")));
extern f32 lbl_8032A9F4 __attribute__((section(".data")));
extern f32 lbl_8032A9F8 __attribute__((section(".data")));
extern f32 lbl_8032A9FC __attribute__((section(".data")));
extern f32 lbl_8032AA00 __attribute__((section(".data")));
extern f32 lbl_8032AA04 __attribute__((section(".data")));
extern f32 lbl_8032AA08 __attribute__((section(".data")));

void MainMenu__ResetWidgetAnimation(void *arg0) {
    register void *temp_r20;
    void *temp_r21;
    void *temp_r22;
    void *temp_r26;
    void *ta;
    void *tb;
    void *tc;
    void *td;
    void *te;
    void *tf;
    void *tg;
    void *th;
    f32 d;
    f32 d2;

    temp_r26 = arg0 + 0x880;
    fn_8026B420(M2C_FIELD(arg0, void **, 0x304));
    temp_r22 = arg0 + 0x6C0;
    temp_r20 = arg0 + 0x340;
    temp_r21 = arg0 + 0x500;
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x304, lbl_8032A9E0, *(f32 *)((char *)arg0 + 0xA50));
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x304, lbl_8032A9E4, *(f32 *)((char *)arg0 + 0xA50));
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x304, lbl_8032A9E8, lbl_8032A9E0);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x304), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x9E4));
    ta = M2C_FIELD(arg0, void **, 0x9E4) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r26);
    fn_80260304(ta, lbl_8032A9E0, d);
    tb = M2C_FIELD(arg0, void **, 0x9E4) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r26);
    fn_80260304(tb, lbl_8032A9E8, d);
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x94, lbl_8032A9EC, lbl_8032A9E0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x244, lbl_8032A9E0, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x244, lbl_8032A9EC, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x9E4) + 0x244, lbl_8032A9F0, lbl_8032A9E0);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x9E4), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x824));
    td = M2C_FIELD(arg0, void **, 0x824) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r22);
    fn_80260304(td, lbl_8032A9E0, d);
    tc = M2C_FIELD(arg0, void **, 0x824) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r22);
    fn_80260304(tc, lbl_8032A9EC, d);
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x94, lbl_8032A9F4, lbl_8032A9E0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x244, lbl_8032A9E0, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x244, lbl_8032A9F4, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x824) + 0x244, lbl_8032A9F8, lbl_8032A9E0);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x824), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x664));
    te = M2C_FIELD(arg0, void **, 0x664) + 0x94;
    d2 = MainMenu__GetWidgetBoundsDiagonal(temp_r21);
    fn_80260304(te, lbl_8032A9E0, d2);
    th = M2C_FIELD(arg0, void **, 0x664) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r21);
    fn_80260304(th, lbl_8032A9F4, d);
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x94, lbl_8032A9FC, lbl_8032A9E0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x244, lbl_8032A9E0, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x244, lbl_8032A9FC, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x664) + 0x244, lbl_8032AA00, lbl_8032A9E0);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x664), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x4A4));
    tg = M2C_FIELD(arg0, void **, 0x4A4) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r20);
    fn_80260304(tg, lbl_8032A9E0, d);
    tf = M2C_FIELD(arg0, void **, 0x4A4) + 0x94;
    d = MainMenu__GetWidgetBoundsDiagonal(temp_r20);
    fn_80260304(tf, lbl_8032A9FC, d);
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x94, lbl_8032AA04, lbl_8032A9E0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x244, lbl_8032A9E0, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x244, lbl_8032AA04, *(f32 *)((char *)arg0 + 0xA60));
    fn_80260304(M2C_FIELD(arg0, void **, 0x4A4) + 0x244, lbl_8032AA08, lbl_8032A9E0);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x4A4), 0);
    M2C_FIELD(arg0, s32 *, 0xA40) = 0;
}
