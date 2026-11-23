/* Render__UpdateObjects @ 0x8028166C (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Render__IsObjectHidden(void *, void *);
void Render__SetProjectedFlag(void *);
void Render__ClearProjectedFlag(void *);
M2C_UNK Render__IsPointInProjectRange(s32, s32, s32, s32);
void Render__UpdateObjects(void *arg0, s32 arg1) {
    f32 sp8;
    s32 var_r30;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x10);
    if (var_r31 != NULL) {
        do {
            var_r30 = 0;
            if ((Render__IsObjectHidden(arg0, var_r31) != 0) || (Render__IsPointInProjectRange((s32) arg0, arg1, (s32) var_r31, (s32) &sp8) == 0)) {
                var_r30 = 1;
            }
            if (var_r30 != 0) {
                Render__SetProjectedFlag(var_r31);
            } else {
                Render__ClearProjectedFlag(var_r31);
                M2C_FIELD(var_r31, M2C_UNK (**)(void *, f32), 0x16C)(var_r31, sp8);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x174);
        } while (var_r31 != NULL);
    }
}
