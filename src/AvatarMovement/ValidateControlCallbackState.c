/* AvatarMovement__ValidateControlCallbackState @ 0x800B7088 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 fn_8023A97C(void *, int);
void AvatarMovement__ValidateControlCallbackState(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0xC8) != 0) {
        if ((s16) fn_8023A97C(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), 0) != (s16) M2C_FIELD(arg0, s16 *, 0xC8)) {
            M2C_FIELD(arg0, s32 *, 0xD8) = 0;
        }
    }
}
