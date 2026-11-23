/* SphereText__ClearTexture @ 0x802707E4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__ClearTexture(void *);
void EzString__Clear(void *);
void SphereText__ClearTexture(void *arg0) {
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;

    Sphere__ClearTexture(arg0);
    EzString__Clear(arg0 + 0x1A4);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x50));
    temp_r11 = M2C_FIELD(arg0, void **, 0x1F0);
    if (temp_r11 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r11, void **, 8);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
    }
    M2C_FIELD(arg0, void **, 0x1F0) = NULL;
}
