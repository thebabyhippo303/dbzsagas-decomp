/* SphereTextBox__ClearLines @ 0x80272C1C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void Mem__DeleteArray(void *);
void Sphere__ResetProperties(void *);
extern f32 lbl_8034A060 __attribute__((section(".data")));
void SphereTextBox__ClearLines(void *arg0) {
    void *temp_r9;
    void *temp_r9_2;
    void *var_r31;
    f32 f;
    s32 z;
    temp_r9 = M2C_FIELD(arg0, void **, 0x1A0);
    if (temp_r9 != NULL) {
        var_r31 = temp_r9 + (M2C_FIELD(temp_r9, s32 *, -8) * 0x1F4);
        if (temp_r9 != var_r31) {
            do {
                var_r31 -= 0x1F4;
                temp_r9_2 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0x1A0) != var_r31);
        }
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 0x1A0) - 8);
    }
    f = lbl_8034A060;
    z = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = z;
    M2C_FIELD(arg0, f32 *, 0x1A8) = f;
    M2C_FIELD(arg0, s32 *, 0x1A0) = z;
    Sphere__ResetProperties(arg0);
}
