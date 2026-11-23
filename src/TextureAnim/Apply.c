/* TextureAnim__Apply @ 0x80246BC4 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_8024F1D0(s32, s32);
void TextureAnim__Apply(void *arg0) {
    u16 temp_r4;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r9 != NULL) {
        temp_r4 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((s32) M2C_FIELD(temp_r9, s32 *, 8) != (s32) temp_r4) {
            fn_8024F1D0((s32) M2C_FIELD(temp_r9, u16 *, 0x10), (s32) (temp_r9 + ((temp_r4 * 0x48) + 0x18)));
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8) = (s32) M2C_FIELD(arg0, u16 *, 0xC);
        }
    }
}
