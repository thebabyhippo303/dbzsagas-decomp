/* Timer__GetMilliseconds @ 0x801850A8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
u64 OSGetTime(void);
u64 Runtime__Divide64Unsigned(u64, u64, ...);
extern s32 lbl_803DCBB8;
extern u32 lbl_803DCBBC;
extern u32 lbl_803DCBC4;
extern u64 lbl_803DD4D8;

u32 Timer__GetMilliseconds(void) {
    u64 t;
    u32 *clk;
    u32 div_;
    u32 ms;
    if (lbl_803DCBB8 != 0) {
        return lbl_803DCBBC;
    }
    t = OSGetTime();
    clk = (u32 *)0x80000000;
    div_ = clk[0x3E] / 4000;
    lbl_803DD4D8 = t;
    ms = (u32)Runtime__Divide64Unsigned(t, div_);
    lbl_803DCBC4 = ms;
    return ms;
}
