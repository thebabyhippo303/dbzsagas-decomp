/* AmbientTrack__Differs @ 0x80199C28 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int strcmp(const char *, const char *);
s32 AmbientTrack__Differs(s8 *arg0, s8 *arg1) {
    s32 var_r29;

    var_r29 = 0;
    if ((strcmp(arg0, arg1) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(arg1, s32 *, 0x20)) || (M2C_FIELD(arg0, f32 *, 0x24) != M2C_FIELD(arg1, f32 *, 0x24)) || ((s32) M2C_FIELD(arg0, s32 *, 0x28) != (s32) M2C_FIELD(arg1, s32 *, 0x28)) || ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != (s32) M2C_FIELD(arg1, s32 *, 0x2C))) {
        var_r29 = 1;
    }
    return var_r29;
}
