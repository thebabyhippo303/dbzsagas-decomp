/* MusicStreamQueue__Construct @ 0x80191EE0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * Mem__NewArray(s32);
M2C_UNK StreamQueue__Construct(void *);
extern M2C_UNK lbl_8033FF50 __attribute__((section(".data")));

void *MusicStreamQueue__Construct(void *arg0) {
    register s32 eight;
    register void *arr;
    register s32 zero = 0;
    register s32 four;

    arr = (char *)arg0 + 0xB4;
    StreamQueue__Construct(arg0);
    eight = 8;
    M2C_FIELD(arg0, void **, 0xB0) = &lbl_8033FF50;
    four = 4;
    M2C_FIELD(arg0, void **, 0xB4) = Mem__NewArray(0x280);
    M2C_FIELD(arr, s32 *, 8) = eight;
    M2C_FIELD(arr, s32 *, 12) = four;
    M2C_FIELD(arr, s32 *, 4) = zero;
    M2C_FIELD(arr, s32 *, 16) = zero;
    M2C_FIELD(arr, s32 *, 0x14) = 1;
    return arg0;
}
