/* SoundStream__ResumeChannels @ 0x80197234 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SoundChannel__Resume(void *);
s32 SoundStream__ResumeChannels(void *arg0) {
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x54);
    if (var_r31 != NULL) {
        do {
            SoundChannel__Resume(var_r31);
            var_r31 = M2C_FIELD(var_r31, void **, 0x2C);
        } while (var_r31 != NULL);
    }
    return 1;
}
