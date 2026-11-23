/* AvatarMovement__ResetAndSelectControlCallbackState @ 0x800B6B7C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void fn_800B7014(void *);

void *AvatarMovement__ResetAndSelectControlCallbackState(void *self) {
    char *owner;
    s32 cb;

    fn_800B7014((char *)self + 8);
    owner = *(char **)self;
    if (*(s32 *)(owner + 0x1BB0) == 0) {
        *(s32 *)(owner + 0x28) = *(s32 *)(owner + 0x1BB4);
    } else {
        *(s32 *)(owner + 0x28) = *(s32 *)(owner + 0x1BB0);
    }
    return (char *)self + 8;
}
