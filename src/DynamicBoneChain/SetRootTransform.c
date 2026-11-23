/* DynamicBoneChain__SetRootTransform @ 0x801F0948 (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Matrix__InvertOrthonormal(void *, void *);
void DynamicBoneChain__SetRootTransform(void *arg0, s32 arg1, void *arg2) {
    void *temp_r9;
    void *temp_r9_2;

    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
    if (arg1 != 0) {
        temp_r9 = arg0 + 0xA8;
        M2C_FIELD(arg0, f32 *, 0xA8) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(temp_r9, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
        M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
        M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 0x14);
        M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) M2C_FIELD(arg2, f32 *, 0x18);
        M2C_FIELD(temp_r9, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
        M2C_FIELD(temp_r9, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
        M2C_FIELD(temp_r9, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 0x24);
        M2C_FIELD(temp_r9, f32 *, 0x28) = (f32) M2C_FIELD(arg2, f32 *, 0x28);
        M2C_FIELD(temp_r9, f32 *, 0x2C) = (f32) M2C_FIELD(arg2, f32 *, 0x2C);
        M2C_FIELD(temp_r9, f32 *, 0x30) = (f32) M2C_FIELD(arg2, f32 *, 0x30);
        M2C_FIELD(temp_r9, f32 *, 0x34) = (f32) M2C_FIELD(arg2, f32 *, 0x34);
        M2C_FIELD(temp_r9, f32 *, 0x38) = (f32) M2C_FIELD(arg2, f32 *, 0x38);
        M2C_FIELD(temp_r9, f32 *, 0x3C) = (f32) M2C_FIELD(arg2, f32 *, 0x3C);
        return;
    }
    temp_r9_2 = arg0 + 0xF8;
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_r9_2, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_r9_2, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(temp_r9_2, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
    M2C_FIELD(temp_r9_2, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(temp_r9_2, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 0x14);
    M2C_FIELD(temp_r9_2, f32 *, 0x18) = (f32) M2C_FIELD(arg2, f32 *, 0x18);
    M2C_FIELD(temp_r9_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
    M2C_FIELD(temp_r9_2, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
    M2C_FIELD(temp_r9_2, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 0x24);
    M2C_FIELD(temp_r9_2, f32 *, 0x28) = (f32) M2C_FIELD(arg2, f32 *, 0x28);
    M2C_FIELD(temp_r9_2, f32 *, 0x2C) = (f32) M2C_FIELD(arg2, f32 *, 0x2C);
    M2C_FIELD(temp_r9_2, f32 *, 0x30) = (f32) M2C_FIELD(arg2, f32 *, 0x30);
    M2C_FIELD(temp_r9_2, f32 *, 0x34) = (f32) M2C_FIELD(arg2, f32 *, 0x34);
    M2C_FIELD(temp_r9_2, f32 *, 0x38) = (f32) M2C_FIELD(arg2, f32 *, 0x38);
    M2C_FIELD(temp_r9_2, f32 *, 0x3C) = (f32) M2C_FIELD(arg2, f32 *, 0x3C);
    Matrix__InvertOrthonormal(arg2, arg0 + 0x138);
}
