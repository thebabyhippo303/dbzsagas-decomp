/* Path__Destroy @ 0x801FC83C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void Mem__Delete(void *);
extern M2C_UNK lbl_803456C8 __attribute__((section(".data")));

void Path__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &lbl_803456C8;
    if ((temp_r3 != NULL) && (M2C_FIELD(arg0, s32 *, 0xC) & 1)) {
        Mem__DeleteArray(temp_r3);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
