/* Camera__SmoothMatchingFollowPositions @ 0x800C5320 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Camera__SmoothFollowPosition(void *, void *, s32);
void Camera__SmoothMatchingFollowPositions(void *arg0, void *arg1, s32 arg2) {
    void *temp_r4;
    void *var_r31;

    var_r31 = M2C_FIELD(arg1, void **, 0x28);
    if (var_r31 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r31, void **, 0x28);
            if (((s32) M2C_FIELD(temp_r4, s32 *, 0x20) == 0xA) && ((s32) M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x28), u8 *, 0x5A) != (s32) M2C_FIELD(arg0, s32 *, 0xE8))) {
                Camera__SmoothFollowPosition(arg0, temp_r4 + 0x3C, arg2);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x34);
        } while (var_r31 != NULL);
    }
}
