/* Partition__Destroy @ 0x8025177C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Remove(void *, s32);
void Mem__Delete(void *);
void memFree(void *);
void Partition__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r3 != NULL) {
        Remove(temp_r3, 0);
    } else {
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_r3_2 != NULL) {
            memFree(temp_r3_2);
        }
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
