/* Exploder__HandleEvent @ 0x800ED558 (size: 0x360, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_802CB62C(s32, s32, s32, s32);
extern f32 lbl_80323AC4 __attribute__((section(".data")));
extern f32 lbl_80323AC8 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
typedef void (*VFn3)(void *, void *, f32);
void Exploder__HandleEvent(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    mt_vec3_f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    mt_vec3_f32 sp18;
    mt_vec3_f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 var_f0;
    f32 var_f13;
    f32 var_f7;
    s32 temp_r9_3;
    s32 var_r10;
    s32 var_r11;
    void *(*temp_r9_5)(void *, M2C_UNK);
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *var_r3;
    void *var_r3_2;
    u32 *temp_p8;
    u32 *temp_p10;
    f32 temp_sx;
    f32 temp_sy;
    f32 temp_sz;
    u32 temp_b0;
    u32 temp_b1;
    u32 temp_b2;
    f32 temp_f0b;
    f32 temp_f11b;

    if (arg1 != 0x20038) {
        if (arg1 == 0x2000C) {
            M2C_FIELD(arg0, s32 *, 0x6F0) = 1;
            M2C_FIELD(arg0, s32 *, 0x6C4) = 1;
            if (arg2 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x6D0) = (f32) M2C_FIELD(arg2, f32 *, 0);
                return;
            }
            M2C_FIELD(arg0, f32 *, 0x6D0) = (f32) lbl_80323AC8;
            return;
        }
        if (arg1 == 0x200FD) {
            M2C_FIELD(arg0, void **, 0x71C) = arg2;
            return;
        }
        if (arg1 == 0x200FE) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x71C);
            temp_r11 = arg0 + 0x38;
            temp_f12 = M2C_FIELD(arg0, f32 *, 0x38);
            temp_p8 = (u32 *)&sp18.v0;
            temp_f11 = M2C_FIELD(temp_r9, f32 *, 0);
            temp_p10 = (u32 *)&sp8.v0;
            temp_f13 = M2C_FIELD(temp_r11, f32 *, 8);
            temp_sx = temp_f12 + temp_f11;
            temp_f10 = M2C_FIELD(temp_r9, f32 *, 8);
            temp_f0b = M2C_FIELD(temp_r11, f32 *, 4);
            temp_f11b = M2C_FIELD(temp_r9, f32 *, 4);
            temp_sy = temp_f13 + temp_f10;
            sp18.v0 = temp_sx;
            temp_sz = temp_f0b + temp_f11b;
            sp18.v2 = temp_sy;
            sp18.v1 = temp_sz;
            temp_b0 = *(u32 *)&sp18.v0;
            temp_b1 = temp_p8[1];
            temp_b2 = temp_p8[2];
            *(u32 *)&sp8.v0 = temp_b0;
            temp_p10[1] = temp_b1;
            temp_p10[2] = temp_b2;
            temp_r9_2 = M2C_FIELD(arg0, void **, 0x34);
            M2C_FIELD(temp_r9_2, VFn3 *, 0x1CC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x1C8), temp_p10, M2C_FIELD(arg2, f32 *, 0));
            return;
        }
        if (arg1 == 0x200F8) {
            if (arg2 != NULL) {
                var_r10 = 0;
                if (var_r10 < M2C_BITWISE(s32, M2C_FIELD(arg2, f32 *, 0))) {
                    var_r11 = 0;
                    do {
                        temp_r9_3 = M2C_FIELD(arg2, s32 *, 4);
                        if ((s32) *(s32 *)(var_r11 + temp_r9_3) == arg0) {
                            *(s32 *)(var_r11 + temp_r9_3) = 0;
                        }
                        var_r10 += 1;
                        var_r11 += 4;
                    } while (var_r10 < M2C_BITWISE(s32, M2C_FIELD(arg2, f32 *, 0)));
                }
            }
            var_f0 = lbl_80323AC8;
            goto block_38;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x710) == 0) {
            fn_802CB62C((s32) arg0, arg1, (s32) arg2, arg3);
            return;
        }
        if (arg1 != 0x30016) {
            if (arg1 == 0x3010A) {
                goto block_21;
            }
            fn_802CB62C((s32) arg0, arg1, (s32) arg2, arg3);
        } else {
block_21:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6AC) != 0) {
                temp_r11_2 = M2C_FIELD(arg0, void **, 0x84);
                if (M2C_FIELD(temp_r11_2, u8 *, 1) & 0x20) {
                    temp_r3 = M2C_FIELD(temp_r11_2, void **, 0x78);
                    temp_r9_4 = M2C_FIELD(temp_r3, void **, 0);
                    temp_r9_5 = M2C_FIELD(temp_r9_4, void *(**)(void *, M2C_UNK), 0x3C);
                    var_r3 = temp_r9_5(temp_r3 + M2C_FIELD(temp_r9_4, s16 *, 0x38), temp_r9_5);
                } else {
                    if (!(M2C_FIELD(temp_r11_2, u16 *, 2) & 4)) {
                        var_r3_2 = M2C_FIELD(temp_r11_2, void **, 0x78);
                    } else {
                        temp_r9_6 = M2C_FIELD(temp_r11_2, void **, 0x78);
                        if (!(lbl_80323AC8 >= M2C_FIELD(temp_r9_6, f32 *, 8))) {
                            var_r3_2 = M2C_FIELD(temp_r9_6, void **, 0);
                        } else if (!(lbl_80323AC8 >= M2C_FIELD(temp_r9_6, f32 *, 0xC))) {
                            var_r3_2 = M2C_FIELD(temp_r9_6, void **, 4);
                        } else {
                            var_r3_2 = M2C_BITWISE(void *, M2C_FIELD(temp_r9_6, f32 *, 8));
                        }
                    }
                    var_r3 = var_r3_2 + 0x14;
                }
                temp_r9_7 = var_r3 + 0xC;
                temp_f10_2 = M2C_FIELD(var_r3, f32 *, 0xC) - M2C_FIELD(var_r3, f32 *, 0);
                sp8.v2 = M2C_FIELD(temp_r9_7, f32 *, 8) - M2C_FIELD(var_r3, f32 *, 8);
                sp8.v0 = temp_f10_2;
                sp8.v1 = M2C_FIELD(temp_r9_7, f32 *, 4) - M2C_FIELD(var_r3, f32 *, 4);
                temp_f0 = sp8.v2;
                temp_f12_2 = sp8.v1;
                var_f13 = temp_f0;
                if (!(temp_f12_2 >= temp_f0)) {
                    var_f13 = temp_f12_2;
                }
                var_f7 = var_f13;
                if (!(temp_f10_2 >= var_f13)) {
                    var_f7 = temp_f10_2;
                }
                temp_r9_8 = arg2 + 4;
                temp_r11_3 = arg0 + 0x38;
                temp_f11_2 = M2C_FIELD(temp_r9_8, f32 *, 8) - M2C_FIELD(temp_r11_3, f32 *, 8);
                temp_f12_3 = M2C_FIELD(temp_r9_8, f32 *, 4) - M2C_FIELD(temp_r11_3, f32 *, 4);
                sp38.v2 = temp_f11_2 * temp_f11_2;
                temp_f0_2 = M2C_BITWISE(f32, M2C_FIELD(arg2, s32 *, 4)) - M2C_FIELD(arg0, f32 *, 0x38);
                sp38.v1 = temp_f12_3 * temp_f12_3;
                temp_f13_2 = temp_f0_2 * temp_f0_2;
                sp28 = temp_f0_2;
                sp38.v0 = temp_f13_2;
                sp2C = temp_f12_3;
                sp30 = temp_f11_2;
                temp_f0_3 = var_f7 + M2C_FIELD(arg2, f32 *, 0x10);
                if (!((temp_f13_2 + sp38.v1 + sp38.v2) >= (temp_f0_3 * temp_f0_3))) {
                    goto block_37;
                }
            }
        }
    } else {
block_37:
        var_f0 = lbl_80323AC4;
block_38:
        M2C_FIELD(arg0, s32 *, 0x6C4) = 1;
        M2C_FIELD(arg0, f32 *, 0x6D0) = var_f0;
    }
}
