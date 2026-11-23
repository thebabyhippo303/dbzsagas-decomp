/* Static__NextQueryEntry @ 0x801D1384 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void *Static__NextQueryEntry(s32 arg0) {
    s32 temp_r9;
    void *temp_r3;
    void *var_r10;

    temp_r3 = arg0 + 0x50;
    var_r10 = NULL;
    temp_r9 = M2C_FIELD(temp_r3, s32 *, 0xC) + 1;
    M2C_FIELD(temp_r3, s32 *, 0xC) = temp_r9;
    if (temp_r9 < (s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), s32 *, 0x24)) {
        var_r10 = temp_r3;
    }
    return var_r10;
}
