/* Floater__GetStateSize @ 0x802B4F6C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 fn_802B4F64(void *);
s32 Simple__GetStateSize(void *);
s32 PathFollower__GetStateSize(void *);

s32 Floater__GetStateSize(void *arg0) {
    s32 size;

    size = fn_802B4F64(arg0);
    size += Simple__GetStateSize(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x4F4) != 0) {
        size += 0x50;
    }
    {
        void *sub = arg0 + 0x414;
        if (M2C_FIELD(sub, s32 *, 4) != 0) {
            size += PathFollower__GetStateSize(sub);
        }
    }
    return size;
}
