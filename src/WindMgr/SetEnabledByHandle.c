/* WindMgr__SetEnabledByHandle @ 0x8021A3E8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    s8 b0;
    s8 b1;
    u16 h2;
    s32 w4;
    char pad[0x80];
} WindEntry;
extern WindEntry *lbl_803ADCC8 __attribute__((section(".bss")));
void WindMgr__SetEnabledByHandle(u32 handle, s32 enable) {
    WindEntry *e = lbl_803ADCC8 + (handle >> 16);
    if (e->w4 != (s32)handle) {
        return;
    }
    if (enable != 0) {
        e->h2 |= 512;
    } else {
        e->h2 &= ~512;
    }
}
