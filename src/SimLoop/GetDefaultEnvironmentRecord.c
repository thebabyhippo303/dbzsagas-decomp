/* SimLoop__GetDefaultEnvironmentRecord @ 0x80021360 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 Database__GetArrayCount(void *);
void * Database__GetTypedObject(void *, void *, void *, void *);
extern M2C_UNK lbl_8030FD90 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));

void SimLoop__GetDefaultEnvironmentRecord(void) {
    char *base = (char *)&lbl_803B1E84;
    Database__GetArrayCount(M2C_FIELD(base, void **, 0x10));
    Database__GetTypedObject((void *)0x91, &lbl_8030FD90, M2C_FIELD(base, void **, 0x10), NULL);
}
