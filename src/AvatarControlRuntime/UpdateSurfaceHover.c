/* AvatarControlRuntime__UpdateSurfaceHover @ 0x800A43DC (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_800AC4A0(s32);
M2C_UNK fn_800A2C88(s32);
M2C_UNK AvatarControlRuntime__UpdateSurfaceHoverEffect(s32);
extern f32 lbl_80320284 __attribute__((section(".data")));
extern f32 lbl_803A35C4 __attribute__((section(".data")));

void AvatarControlRuntime__UpdateSurfaceHover(void *arg0) {
    s32 var_r10;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0);
    var_r10 = 0;
    if (!(M2C_FIELD(temp_r11, f32 *, 0x288) > lbl_80320284) && ((s32) M2C_FIELD(temp_r11, s32 *, 0x90) != 0)) {
        var_r10 = 1;
    }
    if (var_r10 != 0) {
        fn_800AC4A0(M2C_FIELD(arg0, s32 *, 0x7C));
        return;
    }
    fn_800AC4A0(M2C_FIELD(arg0, s32 *, 0x7C));
    fn_800A2C88((s32) arg0);
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x7C), s32 *, 0x58C) != 0) {
        M2C_FIELD(arg0, f32 *, 0x178) = (f32) lbl_803A35C4;
    }
    AvatarControlRuntime__UpdateSurfaceHoverEffect((s32) arg0);
}
