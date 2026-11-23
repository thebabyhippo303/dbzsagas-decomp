/* FullScreenEffect__InitializeDefaults @ 0x800E2A34 (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef int s32;
extern const f32 lbl_80322E6C __attribute__((section(".data")));
extern const f32 lbl_80322E70 __attribute__((section(".data")));
extern const f32 lbl_80322E74 __attribute__((section(".data")));
extern const f32 lbl_80322E78 __attribute__((section(".data")));
extern const f32 lbl_80322E7C __attribute__((section(".data")));
extern const f32 lbl_80322E80 __attribute__((section(".data")));
extern const f32 lbl_80322E84 __attribute__((section(".data")));
extern const f32 lbl_80322E88 __attribute__((section(".data")));

void FullScreenEffect__InitializeDefaults(char *p) {
    *(s32 *)(p + 0xD8) = 0x14;
    *(s32 *)(p + 0xDC) = 0xF;
    *(f32 *)(p + 0xE0) = lbl_80322E6C;
    *(s32 *)(p + 0xE4) = 0;
    *(s32 *)(p + 0xE8) = 0x80;
    *(s32 *)(p + 0xF4) = 0x80;
    *(s32 *)(p + 0xF0) = 0x80;
    *(s32 *)(p + 0xEC) = 0x80;
    *(f32 *)(p + 0xF8) = lbl_80322E70;
    *(f32 *)(p + 0xFC) = lbl_80322E74;
    *(f32 *)(p + 0x100) = lbl_80322E78;
    *(f32 *)(p + 0x104) = lbl_80322E74;
    *(s32 *)(p + 0x108) = 0x80;
    *(s32 *)(p + 0x114) = 0x80;
    *(s32 *)(p + 0x110) = 0x80;
    *(s32 *)(p + 0x10C) = 0x80;
    *(s32 *)(p + 0x118) = 0;
    *(s32 *)(p + 0x11C) = 1;
    *(f32 *)(p + 0x120) = lbl_80322E70;
    *(f32 *)(p + 0x124) = lbl_80322E74;
    *(f32 *)(p + 0x128) = lbl_80322E7C;
    *(f32 *)(p + 0x12C) = lbl_80322E6C;
    *(s32 *)(p + 0x130) = 1;
    *(f32 *)(p + 0x134) = lbl_80322E7C;
    *(f32 *)(p + 0x138) = lbl_80322E7C;
    *(f32 *)(p + 0x13C) = lbl_80322E7C;
    *(s32 *)(p + 0x140) = 1;
    *(s32 *)(p + 0x144) = 0;
    *(s32 *)(p + 0x148) = 1;
    *(f32 *)(p + 0x14C) = lbl_80322E80;
    *(f32 *)(p + 0x150) = lbl_80322E84;
    *(s32 *)(p + 0x154) = 0;
    *(s32 *)(p + 0x158) = 1;
    *(f32 *)(p + 0x15C) = lbl_80322E70;
    *(f32 *)(p + 0x160) = lbl_80322E74;
    *(f32 *)(p + 0x164) = lbl_80322E7C;
    *(f32 *)(p + 0x168) = lbl_80322E6C;
    *(s32 *)(p + 0x16C) = 1;
    *(f32 *)(p + 0x170) = lbl_80322E7C;
    *(f32 *)(p + 0x174) = lbl_80322E7C;
    *(f32 *)(p + 0x178) = lbl_80322E7C;
    *(s32 *)(p + 0x17C) = 1;
    *(s32 *)(p + 0x180) = 0;
    *(s32 *)(p + 0x184) = 1;
    *(f32 *)(p + 0x188) = lbl_80322E6C;
    *(f32 *)(p + 0x18C) = lbl_80322E88;
    *(s32 *)(p + 0x190) = 0;
    *(f32 *)(p + 0x194) = lbl_80322E7C;
    *(f32 *)(p + 0x198) = lbl_80322E7C;
    *(f32 *)(p + 0x19C) = lbl_80322E7C;
    *(f32 *)(p + 0x1A0) = lbl_80322E6C;
    *(s32 *)(p + 0x1A4) = 0x80;
    *(s32 *)(p + 0x1A8) = 0x80;
    *(s32 *)(p + 0x1AC) = 0x80;
    *(s32 *)(p + 0x1B0) = 0x80;
    *(f32 *)(p + 0x1B4) = lbl_80322E78;
    *(f32 *)(p + 0x1B8) = lbl_80322E74;
    *(s32 *)(p + 0x1BC) = 0x80;
    *(s32 *)(p + 0x1C0) = 0x80;
    *(s32 *)(p + 0x1C4) = 0x80;
    *(s32 *)(p + 0x1C8) = 0x80;
}
