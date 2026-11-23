/* Voice3D__PlayChannel @ 0x8019C0C8 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Voice__PlayChannel(void *, s32);
s32 Voice__GetGroup(void *);
s32 Sfx3DPlayer__GetEnvironmentSend(s32);
s32 rand(void);
s32 Voice3D__PlayChannel(void *arg0, s32 arg1) {
    s32 temp_r3;
    u32 var_r31;

    temp_r3 = Voice__PlayChannel(arg0, arg1);
    if (temp_r3 != 0) {
        if ((u32) ((u32) M2C_FIELD(Sfx3DPlayer__GetEnvironmentSend(Voice__GetGroup(arg0)), u32 *, 0x1C) >> 1U) > 1U) {
            var_r31 = (u32) M2C_FIELD(Sfx3DPlayer__GetEnvironmentSend(Voice__GetGroup(arg0)), u32 *, 0x1C) >> 1U;
        } else {
            var_r31 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (var_r31 + (rand() % var_r31));
    }
    return temp_r3;
}
