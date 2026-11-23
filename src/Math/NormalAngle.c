/* Math__NormalAngle @ 0x802B23A0 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Script__PopFloat(void *, s32);
void Script__PushFloat(void *, s32, f32);
extern f32 lbl_80351EC8 __attribute__((section(".data")));
extern f32 lbl_80351ECC __attribute__((section(".data")));
extern f32 lbl_80351ED0 __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;

void Math__NormalAngle(void *arg0, s32 arg1) {
    f32 temp_f0;
    f32 var_f1;

    var_f1 = Script__PopFloat(arg0, arg1);
    if ((var_f1 > lbl_80351EC8) || !(var_f1 >= lbl_80351ECC)) {
        var_f1 = lbl_80351ED0;
    }
    temp_f0 = -lbl_803DE500;
    if (!(var_f1 >= temp_f0)) {
        do {
            var_f1 += lbl_803DE504;
        } while (var_f1 < temp_f0);
    }
    {
        f32 pi = lbl_803DE500;
        if (!(var_f1 <= pi)) {
            do {
                var_f1 -= lbl_803DE504;
            } while (var_f1 > pi);
        }
    }
    Script__PushFloat(arg0, arg1, var_f1);
}
