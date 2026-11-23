/* Sound__SetEnvironmentEffectParams @ 0x801889B0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_8019F724(M2C_UNK *, s32, f32 *);         /* extern */
extern M2C_UNK lbl_803A2D94 __attribute__((section(".data")));

void Sound__SetEnvironmentEffectParams(s32 arg0, f32 farg0, f32 farg1) {
    f32 params[2];

    params[0] = farg0;
    params[1] = farg1;
    fn_8019F724(&lbl_803A2D94, arg0, params);
}
