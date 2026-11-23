/* Protagonist__TrimBoneVolumes @ 0x801F2FB4 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Protagonist__TrimBoneVolumes(void *arg0) {
    u32 temp_r11;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x164);
    temp_r11 = M2C_FIELD(arg0, u32 *, 0x174);
    if (temp_r11 < (u32) M2C_FIELD(temp_r9, u32 *, 0xC)) {
        M2C_FIELD(temp_r9, u32 *, 0xC) = temp_r11;
    }
}
