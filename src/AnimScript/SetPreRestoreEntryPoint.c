/* AnimScript__SetPreRestoreEntryPoint @ 0x80235240 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct AnimState {
    char pad[240];
    void *threads[1];
} AnimState;

typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void AnimScript__SetPreRestoreEntryPoint(s32 arg0, s32 arg1, s8 arg2) {
    void *temp_r9;

    temp_r9 = ((AnimState *)arg0)->threads[arg1];
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, s8 *, 6) = arg2;
    }
}
