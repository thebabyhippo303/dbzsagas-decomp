/* TextureSet__SetPersistent @ 0x80247644 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK TexBind__AddFlags(s32, s32);
void TextureSet__SetPersistent(void *arg0) {
    s32 temp_r9;
    s32 var_r31;

    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    var_r31 = 0;
    if (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        do {
            temp_r9 = var_r31 * 2;
            var_r31 += 1;
            TexBind__AddFlags((s32) *(u16 *)(temp_r9 + M2C_FIELD(arg0, s32 *, 0x2C)), 0x20);
        } while (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 0x24));
    }
}
