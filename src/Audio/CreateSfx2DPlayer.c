/* Audio__CreateSfx2DPlayer @ 0x80191658 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Sfx2DPlayer__Construct(s32, s32, s32, s32);
s32 Audio__FindSoundGroup(void *, s32);
s32 Mem__New(s32);
s32 Audio__CreateSfx2DPlayer(void *arg0, s32 arg1, s32 arg2) {
    s32 ld_4;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r3;
    void *temp_r10;

    var_r3 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x180) == 0) {
        return var_r3;
    } else {
        temp_r3 = Audio__FindSoundGroup(arg0, arg2);
        var_r3 = 0;
        if (temp_r3 == 0) {
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_r3;
        } else {
            var_r3 = Sfx2DPlayer__Construct(Mem__New(0x40), arg1, M2C_FIELD(arg0, s32 *, 0x180), temp_r3);
            if (var_r3 == 0) {
                return 0;
            }
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C8);
            temp_r10 = arg0 + 0x1C8;
            if (temp_r0 == 0) {
                M2C_FIELD(temp_r10, s32 *, 4) = var_r3;
                M2C_FIELD(arg0, s32 *, 0x1C8) = var_r3;
                M2C_FIELD(var_r3, s32 *, 0x38) = temp_r0;
                M2C_FIELD(var_r3, s32 *, 0x34) = temp_r0;
            } else {
                M2C_FIELD(var_r3, s32 *, 0x38) = 0;
                ld_4 = M2C_FIELD(temp_r10, s32 *, 4);
                M2C_FIELD(var_r3, s32 *, 0x34) = ld_4;
                M2C_FIELD(M2C_FIELD(temp_r10, s32 *, 4), s32 *, 0x38) = var_r3;
                M2C_FIELD(temp_r10, s32 *, 4) = var_r3;
            }
            M2C_FIELD(temp_r10, s32 *, 0xC) = (M2C_FIELD(temp_r10, s32 *, 0xC) + 1);
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_r3;
        }
    }
}
