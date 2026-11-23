/* Controller__DeriveStickDirections @ 0x801D5060 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8034250C __attribute__((section(".data")));
extern f32 lbl_80342510 __attribute__((section(".data")));
extern f32 lbl_80342514 __attribute__((section(".data")));

void Controller__DeriveStickDirections(void *arg0) {
    f32 var_f13;
    f32 var_f13_2;
    f32 var_f13_3;
    f32 var_f13_4;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
            var_f13 = M2C_FIELD(arg0, f32 *, 0x9C);
        } else {
            var_f13 = lbl_80342510;
        }
        if (!(var_f13 >= lbl_80342514)) {
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
            var_f13_2 = M2C_FIELD(arg0, f32 *, 0x9C);
        } else {
            var_f13_2 = lbl_80342510;
        }
        if (!(var_f13_2 <= lbl_8034250C)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
            var_f13_3 = M2C_FIELD(arg0, f32 *, 0xA0);
        } else {
            var_f13_3 = lbl_80342510;
        }
        if (!(var_f13_3 >= lbl_80342514)) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
            var_f13_4 = M2C_FIELD(arg0, f32 *, 0xA0);
        } else {
            var_f13_4 = lbl_80342510;
        }
        if (!(var_f13_4 <= lbl_8034250C)) {
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
        }
    }
}
