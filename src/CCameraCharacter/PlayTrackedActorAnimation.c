/* CCameraCharacter__PlayTrackedActorAnimation @ 0x800BDD34 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_801DCC7C(int, int, int, int, int, int);
extern M2C_UNK lbl_80366B10 __attribute__((section(".data")));

void CCameraCharacter__PlayTrackedActorAnimation(void *arg0) {
    s32 temp_r11;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r11 != 0) {
        fn_801DCC7C(temp_r11, *(s32 *)((char *)&lbl_80366B10 + (M2C_FIELD(arg0, s32 *, 0x48) * 4)), 0x40, 0, 0, 0);
    }
}
