/* WaterMesh__SetCellImpulse @ 0x802A0100 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void WaterMesh__SetCellImpulse(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r9;
    void *temp_r3;

    if (arg1 >= 0) {
        temp_r9 = M2C_FIELD(arg0, s32 *, 0x94);
        if ((arg1 < temp_r9) && (arg2 >= 0) && (arg2 < (s32) M2C_FIELD(arg0, s32 *, 0x98))) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x90) + ((arg1 + (arg2 * temp_r9)) * 0xE0);
            if (!(M2C_FIELD(temp_r3, s32 *, 0x48) & 1)) {
                M2C_FIELD(temp_r3, f32 *, 0xD0) = farg0;
            }
        }
    }
}