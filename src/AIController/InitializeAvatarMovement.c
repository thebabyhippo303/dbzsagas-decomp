/* AIController__InitializeAvatarMovement @ 0x800B61C8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetControlCallbackState(void *, void *);
void fn_800B6810(void *, void *);
void fn_800B686C(void *, void *);
void AIController__InitializeAvatarMovement(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    Avatar__SetControlCallbackState(M2C_FIELD(arg0, void **, 0), arg0 + 8);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x7C);
    fn_800B6810(temp_r3 + 0x68, temp_r3 + 0x70);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x7C);
    fn_800B686C(temp_r3_2 + 0x68, temp_r3_2 + 0x100);
}
