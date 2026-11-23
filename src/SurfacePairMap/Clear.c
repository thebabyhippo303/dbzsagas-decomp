/* SurfacePairMap__Clear @ 0x801F8878 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void fn_80254E50(void *);
void SurfacePairMap__Clear(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    fn_80254E50(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r3_2 != NULL) {
        Mem__DeleteArray(temp_r3_2);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = NULL;
    M2C_FIELD(arg0, void **, 0x24) = NULL;
}
