/* CActor__FindBoneByName @ 0x801DCE10 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Skeleton__GetBoneById(void *, s32);
int Skeleton__FindBoneIdByName(void *, const char *, unsigned char *);
void *CActor__FindBoneByName(void *arg0, u8 *arg1) {
    union { s8 value; unsigned char bytes[8]; } sp8;

    sp8.value = 0;
    if (Skeleton__FindBoneIdByName(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0xC), ((s8 *)sp8.bytes), arg1) == 0) {
        return NULL;
    } else {
        return Skeleton__GetBoneById(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0xC), (s32) (u8) sp8.value);
    }
}
