/* AnimScript__GetPostRestoreEntryPoint @ 0x802352A0 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
typedef struct { char pad[240]; void *threads[1]; } AnimState;
s32 AnimScript__GetPostRestoreEntryPoint(AnimState *arg0, s32 arg1) {
    void *t;
    t = arg0->threads[arg1];
    if (t != NULL) {
        return M2C_FIELD(t, s8 *, 7);
    }
    return -1;
}
