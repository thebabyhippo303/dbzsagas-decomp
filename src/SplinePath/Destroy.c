/* SplinePath__Destroy @ 0x801FD930 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void Path__Destroy(void *, s32);
extern M2C_UNK lbl_80345678 __attribute__((section(".data")));

void SplinePath__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_80345678;
    if (M2C_FIELD(arg0, s32 *, 0xC) & 4) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_r3 != NULL) {
            Mem__DeleteArray(temp_r3);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) & 8) {
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_r3_2 != NULL) {
            Mem__DeleteArray(temp_r3_2);
        }
    }
    Path__Destroy(arg0, arg1);
}
