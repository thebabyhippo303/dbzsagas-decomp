/* Database__GetReferenceStorage @ 0x80206B70 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Database__GetReferenceStorage(void *arg0, void *arg1) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u16 *, 2) & 4;
    if (temp_r9 != 0) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x78);
        M2C_FIELD(arg1, s32 *, 0) = 0;
        return;
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x78);
    M2C_FIELD(arg1, s32 *, 4) = temp_r9;
}
