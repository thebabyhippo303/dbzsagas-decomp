/* FrameTiming__Initialize @ 0x80189660 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f64 lbl_8033E350 __attribute__((section(".rodata")));
extern f32 lbl_8033E358 __attribute__((section(".rodata")));
extern f32 lbl_8033E35C __attribute__((section(".rodata")));
typedef struct { u32 hi; u32 lo; } W64;
typedef struct FrameTiming {
    u32 w0; char g4[4];
    u32 w8; char g12[4];
    u32 w16, w20, w24;
    f32 f28, f32, f36, f40, f44, f48;
    char g52[8];
    u32 w60;
} FrameTiming;
void FrameTiming__Initialize(FrameTiming *this) {
    W64 w;
    f64 adj = lbl_8033E350;
    f32 rate = lbl_8033E358;
    f32 c2 = lbl_8033E35C;
    f32 f0;
    w.lo = 17;
    w.hi = 0x43300000u;
    f0 = (f32)(*(f64 *)&w - adj);
    f0 = f0 * rate;
    this->w60 = 3;
    this->w24 = 0;
    this->f40 = f0;
    this->f48 = c2;
    this->w0 = 0;
    this->w8 = 0;
    this->w16 = 17;
    this->w20 = 0;
    this->f28 = f0;
    this->f32 = c2;
    this->f36 = c2;
    this->f44 = c2;
}
