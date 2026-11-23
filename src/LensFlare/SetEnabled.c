/* LensFlare__SetEnabled @ 0x8028D0EC (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void EffectHandle__ClearFrontPriorityForGroup(s32);
void LensFlareElement__HideEffect(void *);
void EffectHandle__SetFrontPriorityForGroup(s32);
s32 EffectHandle__SetFrontPriority(u32);
s32 LensFlare__SetEnabled(void *arg0, s32 arg1) {
    s32 var_r30;
    u32 var_r29;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != arg1) {
        if (arg1 != 0) {
            EffectHandle__ClearFrontPriorityForGroup(0x44);
        } else {
            var_r29 = 0U;
            if ((u32) arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x2C)) {
                var_r30 = 0;
                do {
                    var_r29 += 1;
                    LensFlareElement__HideEffect(M2C_FIELD(arg0, s32 *, 0x28) + var_r30);
                    var_r30 += 0x98;
                } while (var_r29 < (u32) M2C_FIELD(arg0, u32 *, 0x2C));
            }
            EffectHandle__SetFrontPriorityForGroup(0x44);
        }
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        EffectHandle__SetFrontPriority(M2C_FIELD(arg0, u32 *, 0x34));
    }
    return M2C_FIELD(arg0, s32 *, 0x30);
}
