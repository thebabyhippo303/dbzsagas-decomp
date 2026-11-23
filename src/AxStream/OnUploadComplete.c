/* AxStream__OnUploadComplete @ 0x80198428 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AxStream__ReadChunk(void *, u32);
void AxStream__OnUploadComplete(void *arg0) {
    s32 var_r9;
    void *temp_r11;
    void *temp_r31;
    void *temp_r9;

    temp_r31 = M2C_FIELD(arg0, void **, 4);
    temp_r11 = M2C_FIELD(temp_r31, void **, 0x8C);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x78) == 0) {
        M2C_FIELD(temp_r31, s32 *, 0x78) = 1;
    }
    if ((s32) M2C_FIELD(temp_r11, s32 *, 0x1C8) == 0) {
        var_r9 = 0;
        if (((s32) M2C_FIELD(temp_r11, s32 *, 0xA8) != 0) && ((s32) M2C_FIELD(temp_r11, s32 *, 0x138) != 0)) {
            var_r9 = 1;
        }
        M2C_FIELD(temp_r11, s32 *, 0x1C8) = var_r9;
        if ((var_r9 != 0) && ((s32) M2C_FIELD(temp_r11, s32 *, 0x1CC) != 0)) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10));
        }
    }
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x80) != 0) {
        M2C_FIELD(temp_r31, s32 *, 0x84) = 1;
    }
    AxStream__ReadChunk(temp_r31, 0x4000U);
    M2C_FIELD(temp_r31, s32 *, 0x88) = 0;
}
