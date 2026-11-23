/* SphereText__SetFont @ 0x802706F8 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Font__GetDefault(void);
void SphereText__SetFont(void *arg0, void *arg1, f32 farg0, f32 farg1) {
    void *temp_r9;
    void *temp_r9_2;

    M2C_FIELD(arg0, void **, 0x1A0) = arg1;
    if (arg1 == NULL) {
        M2C_FIELD(arg0, void **, 0x1A0) = Font__GetDefault();
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x3EC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3E8), farg0);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32), 0x3FC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x3F8), farg1);
}
