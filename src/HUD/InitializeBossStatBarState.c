/* HUD__InitializeBossStatBarState @ 0x80121FC0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_803273F0 __attribute__((section(".data")));
extern f32 lbl_803273F4 __attribute__((section(".data")));
extern f32 lbl_803273F8 __attribute__((section(".data")));

void HUD__InitializeBossStatBarState(char *arg0) {
    f32 f13 = lbl_803273F0;
    register void *self = arg0;
    f32 f12 = lbl_803273F4;
    f32 f0 = lbl_803273F8;

    M2C_FIELD(self, f32 *, 0x10) = f13;
    M2C_FIELD(self, f32 *, 0x14) = f12;
    M2C_FIELD(self, f32 *, 0x18) = f0;
    M2C_FIELD(self, u32 *, 0) = 0;
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, u32 *, 8) = 0;
    M2C_FIELD(self, s32 *, 0xC) = 0;
}
