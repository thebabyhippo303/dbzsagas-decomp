/* UiAnimator__RemoveKeysInRange @ 0x802604D0 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UiKeyframe__Destroy(void *, s32);
void UiAnimator__RemoveKeysInRange(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f0;
    void *temp_r31;
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0x20);
    if (var_r3 != NULL) {
        do {
            temp_f0 = M2C_FIELD(var_r3, f32 *, 8);
            temp_r31 = M2C_FIELD(var_r3, void **, 4);
            if (!(temp_f0 < farg0) && !(temp_f0 > farg1)) {
                if ((void *) M2C_FIELD(arg0, void **, 0x20) == var_r3) {
                    M2C_FIELD(arg0, void **, 0x20) = temp_r31;
                }
                if (var_r3 != NULL) {
                    UiKeyframe__Destroy(var_r3, 3);
                }
            }
            var_r3 = temp_r31;
        } while (var_r3 != NULL);
    }
}
