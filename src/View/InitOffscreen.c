/* View__InitOffscreen @ 0x8024638C (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void View__SetClearEnabled(void *, s32);
void memset(void *dst, int val, unsigned int n);
void fn_80250AC0(void *);
extern f32 lbl_8034780C __attribute__((section(".data")));
extern f32 lbl_80347810 __attribute__((section(".data")));
extern f32 lbl_80347814 __attribute__((section(".data")));
extern f32 lbl_80347818 __attribute__((section(".data")));
extern f32 lbl_8034781C __attribute__((section(".data")));
extern f32 lbl_80347820 __attribute__((section(".data")));
void *View__InitOffscreen(void *arg0) {
    fn_80250AC0((char *)arg0 + 0x8C);
    memset(arg0, 0, 632);
    if (M2C_FIELD(arg0, f32 *, 0xC) != lbl_8034780C) {
        M2C_FIELD(arg0, f32 *, 0xC) = lbl_8034780C;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    if (M2C_FIELD(arg0, f32 *, 8) != lbl_80347810) {
        M2C_FIELD(arg0, f32 *, 8) = lbl_80347810;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    if (M2C_FIELD(arg0, f32 *, 0) != lbl_80347814) {
        M2C_FIELD(arg0, f32 *, 0) = lbl_80347814;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    if (M2C_FIELD(arg0, f32 *, 4) != lbl_80347818) {
        M2C_FIELD(arg0, f32 *, 4) = lbl_80347818;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    if (M2C_FIELD(arg0, f32 *, 0x10) != lbl_8034781C) {
        M2C_FIELD(arg0, f32 *, 0x10) = lbl_8034781C;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    if (M2C_FIELD(arg0, f32 *, 0x14) != lbl_80347820) {
        M2C_FIELD(arg0, f32 *, 0x14) = lbl_80347820;
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    View__SetClearEnabled(arg0, 1);
    return arg0;
}
