/* CollPart__EnsureInitialized @ 0x8029E850 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void CollPart__EnsureInitialized(void *arg0) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x64)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x60));
        return;
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x64)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x60));
    temp_r9_3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x6C)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x68));
}
