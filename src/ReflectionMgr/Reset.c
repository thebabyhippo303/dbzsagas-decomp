/* ReflectionMgr__Reset @ 0x80227A0C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void ReflectionMgr__FreeAll(void);
extern void *lbl_803ADD60 __attribute__((section(".data")));
extern s32 lbl_803ADD80 __attribute__((section(".data")));

void ReflectionMgr__Reset(void) {
    void *var_r9;

    ReflectionMgr__FreeAll();
    var_r9 = lbl_803ADD60;
    if (var_r9 != NULL) {
        do {
            M2C_FIELD(var_r9, s32 *, 0xA0) = 0;
            var_r9 = M2C_FIELD(var_r9, void **, 0);
        } while (var_r9 != NULL);
    }
    lbl_803ADD80 = 1;
}
