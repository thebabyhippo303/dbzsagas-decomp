/* ShadowMgr__RemoveLightFromAll @ 0x8022D7E8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern int ShadowMgr__RemoveLight(s32, s32);
extern void *lbl_803ADB30 __attribute__((section(".data")));

void ShadowMgr__RemoveLightFromAll(s32 arg0) {
    void *var_r31;

    var_r31 = lbl_803ADB30;
    if (var_r31 != NULL) {
        do {
            ShadowMgr__RemoveLight(M2C_FIELD(var_r31, s32 *, 0x90), arg0);
            var_r31 = M2C_FIELD(var_r31, void **, 0);
        } while (var_r31 != NULL);
    }
}
