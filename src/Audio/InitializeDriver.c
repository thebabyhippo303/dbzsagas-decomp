/* Audio__InitializeDriver @ 0x8018FDC8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK SoundDriver__Create(s32, s32);
M2C_UNK fn_8019E99C(void);
M2C_UNK fn_80191FA8(s32, s32);
M2C_UNK fn_801944F0(s32, s32);
s32 Audio__InitializeDriver(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = SoundDriver__Create(arg1, arg0 + 0x1D8);
    M2C_FIELD(arg0, s32 *, 0x180) = temp_r3;
    if (temp_r3 == 0) {
        return 0;
    } else {
        fn_8019E99C();
        fn_80191FA8((s32) arg0, M2C_FIELD(arg0, s32 *, 0x180));
        fn_801944F0((s32) (0xCC + arg0), M2C_FIELD(arg0, s32 *, 0x180));
        return 1;
    }
}
