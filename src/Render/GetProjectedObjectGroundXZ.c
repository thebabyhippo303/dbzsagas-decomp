/* Render__GetProjectedObjectGroundXZ @ 0x802A0150 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Render__GetProjectedObjectGroundXZ(void *arg0, f32 *arg1, f32 *arg2) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    if ((s32)M2C_FIELD(arg0, s32 *, 0x110) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x10C);
        temp_r11 = (char *)arg0 + 0x114;
        temp_r10 = M2C_FIELD(arg0, void **, 0x108);
        *arg1 = (M2C_FIELD(temp_r11, f32 *, 8) * M2C_FIELD(temp_r9, f32 *, 0x18))
            + ((M2C_FIELD(arg0, f32 *, 0x114) * M2C_FIELD(temp_r9, f32 *, 0))
            + (M2C_FIELD(temp_r11, f32 *, 4) * M2C_FIELD(temp_r9, f32 *, 0xC)))
            + M2C_FIELD(temp_r10, f32 *, 0);
        *arg2 = (M2C_FIELD(temp_r11, f32 *, 8) * M2C_FIELD(temp_r9, f32 *, 0x20))
            + ((M2C_FIELD(arg0, f32 *, 0x114) * M2C_FIELD(temp_r9, f32 *, 8))
            + (M2C_FIELD(temp_r11, f32 *, 4) * M2C_FIELD(temp_r9, f32 *, 0x14)))
            + M2C_FIELD(temp_r10, f32 *, 8);
    } else {
        *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x108), f32 *, 0);
        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x108), f32 *, 8);
    }
}
