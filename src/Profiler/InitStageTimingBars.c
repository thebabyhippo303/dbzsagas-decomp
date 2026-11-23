/* Profiler__InitStageTimingBars @ 0x801F5A50 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
M2C_UNK fn_801E87B0(s32);
M2C_UNK Profiler__RegisterTimingBar(s32, s32, s32);
extern M2C_UNK lbl_8034425C __attribute__((section(".data")));
extern M2C_UNK lbl_80344274 __attribute__((section(".data")));
extern M2C_UNK lbl_80344290 __attribute__((section(".data")));
extern M2C_UNK lbl_803442B0 __attribute__((section(".data")));
extern M2C_UNK lbl_803442CC __attribute__((section(".data")));
extern M2C_UNK lbl_803442EC __attribute__((section(".data")));
extern M2C_UNK lbl_80344304 __attribute__((section(".data")));
extern M2C_UNK lbl_80344320 __attribute__((section(".data")));
extern M2C_UNK lbl_80344340 __attribute__((section(".data")));
extern M2C_UNK lbl_80344358 __attribute__((section(".data")));
extern M2C_UNK lbl_80344374 __attribute__((section(".data")));
extern M2C_UNK lbl_80344390 __attribute__((section(".data")));
extern M2C_UNK lbl_803443AC __attribute__((section(".data")));
extern M2C_UNK lbl_803443C8 __attribute__((section(".data")));
extern M2C_UNK lbl_803443E0 __attribute__((section(".data")));
extern M2C_UNK lbl_803443F8 __attribute__((section(".data")));
void Profiler__InitStageTimingBars(s32 arg0) {
    fn_801E87B0(arg0 + 0x80);
    Profiler__RegisterTimingBar(0x12, (s32) &lbl_8034425C, 0);
    Profiler__RegisterTimingBar(0x13, (s32) &lbl_80344274, 0);
    Profiler__RegisterTimingBar(0x14, (s32) &lbl_80344290, 0);
    Profiler__RegisterTimingBar(0x15, (s32) &lbl_803442B0, 0);
    Profiler__RegisterTimingBar(0x16, (s32) &lbl_803442CC, 0);
    Profiler__RegisterTimingBar(0x17, (s32) &lbl_803442EC, 0);
    Profiler__RegisterTimingBar(0x18, (s32) &lbl_80344304, 0);
    Profiler__RegisterTimingBar(0x19, (s32) &lbl_80344320, 0);
    Profiler__RegisterTimingBar(0x1A, (s32) &lbl_80344340, 0);
    Profiler__RegisterTimingBar(0x1B, (s32) &lbl_80344358, 0);
    Profiler__RegisterTimingBar(0x1C, (s32) &lbl_80344374, 0);
    Profiler__RegisterTimingBar(0x1D, (s32) &lbl_80344390, 0);
    Profiler__RegisterTimingBar(0x1E, (s32) &lbl_803443AC, 0);
    Profiler__RegisterTimingBar(0x1F, (s32) &lbl_803443C8, 0);
    Profiler__RegisterTimingBar(0x20, (s32) &lbl_803443E0, 0);
    Profiler__RegisterTimingBar(0x21, (s32) &lbl_803443F8, 0);
}