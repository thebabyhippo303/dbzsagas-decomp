/* DebugMenu__Confirm @ 0x802651A0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK BaseMenu__Confirm(s32);
void DebugMenu__Confirm(void *arg0) {
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = M2C_FIELD(arg0, void **, 0x10);
    temp_r3 = M2C_FIELD(temp_r9, void *(**)(void *), 0x1BC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x1B8));
    if (temp_r3 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x10);
        if (M2C_FIELD(temp_r9_2, s32 (**)(void *, M2C_UNK), 0x13C)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x138), 1) != 0) {
            M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (M2C_FIELD(arg0, s32 *, 0xC0) ^ 1);
            return;
        }
    }
    BaseMenu__Confirm((s32) arg0);
}
