/* Protagonist__AllocateBoneVolumes @ 0x801F2844 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * MemHeap__Alloc(unsigned int, unsigned int);
void *Mem__New(s32);
void fn_8025E228(void *, s32);
void memFree(void *);
void *fn_8025E184(void *, void *, s32);

void Protagonist__AllocateBoneVolumes(u8 *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0x164);
    if (temp_r3 != NULL) {
        fn_8025E228(temp_r3, 3);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x168);
    if (temp_r3_2 != NULL) {
        memFree(temp_r3_2);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x16C);
    if (temp_r3_2 != NULL) {
        memFree(temp_r3_2);
    }
    M2C_FIELD(arg0, void **, 0x164) = fn_8025E184(Mem__New(0x18), arg0 + 0x13C, arg1);
    M2C_FIELD(arg0, void **, 0x168) = MemHeap__Alloc(arg1 * 4, 8U);
    M2C_FIELD(arg0, void **, 0x16C) = MemHeap__Alloc(arg1 * 0xC, 8U);
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x170) = 0;
}
