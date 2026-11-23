/* SoundBank__FindSound @ 0x8019300C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SoundBank__FindAliasIndex(void *, char *);
s32 SoundBank__FindSoundIndex(char *, char *);
s32 SoundBank__ResolveEntry(s8 *, s32);             /* extern */

u32 SoundBank__FindSound(s8 *arg0, s8 *arg1) {
    s32 temp_r3;
    register s32 var_r3;

    var_r3 = 0;
    if ((void *) M2C_FIELD(arg0, void **, 8) == NULL) {
        return var_r3;
    } else {
        temp_r3 = SoundBank__FindSoundIndex(arg0, arg1);
        if (temp_r3 >= 0) {
            return SoundBank__ResolveEntry(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x1C) + (temp_r3 * 0x14));
        }
        temp_r3 = SoundBank__FindAliasIndex(arg0, arg1);
        if (temp_r3 >= 0) {
            var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x18) + (temp_r3 * 0x14);
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_r3;
        } else {
            return 0;
        }
    }
}
