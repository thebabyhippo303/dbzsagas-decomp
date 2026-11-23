/* CActor__SetLightingMode @ 0x801DD624 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK CActor__ResetLighting(s32);
extern f32 lbl_80343BC4 __attribute__((section(".data")));
extern f32 lbl_80343BC8 __attribute__((section(".data")));
extern f32 lbl_80343BCC __attribute__((section(".data")));
extern f32 lbl_80343BD8 __attribute__((section(".data")));
extern f32 lbl_80343BDC __attribute__((section(".data")));

void CActor__SetLightingMode(void *arg0, s32 arg1, s32 arg7) {
    f32 var_f0;
    f32 var_f7;
    f32 var_f8;
    s32 temp_r0;
    s32 temp_r0_2;
    u16 temp_r9;

    if (arg1 != 2) {
        if (arg1 <= 2) {
            if (arg1 != 0) {
                if (arg1 != 1) {

                } else {
                    goto block_6;
                }
            }
        } else if (arg1 == 3) {
block_6:
            temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
            if (temp_r0 != 0) {
                if (temp_r0 == 2) {
                    var_f0 = M2C_FIELD(arg0, f32 *, 0xC0);
                    if (!(var_f0 <= lbl_80343BC4)) {
                        var_f0 = lbl_80343BC4;
                    }
                    var_f8 = M2C_FIELD(arg0, f32 *, 0xC4);
                    M2C_FIELD(arg0, f32 *, 0xC0) = var_f0;
                    if (!(var_f8 <= lbl_80343BC4)) {
                        var_f8 = lbl_80343BC4;
                    }
                    var_f7 = M2C_FIELD(arg0, f32 *, 0xC8);
                    M2C_FIELD(arg0, f32 *, 0xC4) = var_f8;
                    if (!(var_f7 <= lbl_80343BC4)) {
                        var_f7 = lbl_80343BC4;
                    }
                    M2C_FIELD(arg0, u16 *, 0xBC) = (u16) (((s32) (var_f0 * lbl_80343BC8) & 0x1F) | (((s32) (var_f8 * lbl_80343BCC) << 5) & 0x7E0) | (((s32) (var_f7 * lbl_80343BC8) << 0xB) & 0xF800));
                    M2C_FIELD(arg0, f32 *, 0xC8) = var_f7;
                }
            } else {
                goto block_22;
            }
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r0_2 != 1) {
            if (temp_r0_2 <= 1) {
                if (temp_r0_2 != 0) {

                } else {
block_22:
                    CActor__ResetLighting((s32) arg0);
                }
            } else if (temp_r0_2 <= 4) {
                if (temp_r0_2 >= 3) {
                    goto block_23;
                }
            }
        } else {
block_23:
            temp_r9 = M2C_FIELD(arg0, u16 *, 0xBC);
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) ((f32) (f64) (temp_r9 & 0x1F) * lbl_80343BD8);
            M2C_FIELD(arg0, f32 *, 0xC4) = (f32) ((f32) (f64) ((temp_r9 >> 5U) & 0x3F) * lbl_80343BDC);
            M2C_FIELD(arg0, f32 *, 0xC8) = (f32) ((f32) (f64) (temp_r9 >> 0xBU) * lbl_80343BD8);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = arg1;
}
