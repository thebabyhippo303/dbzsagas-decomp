/* AI__RefreshAttackStateEligibility @ 0x8006284C (size: 0x190, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Rand__RangeFloat(f32, f32);
void * Game__FindNearestEligibleAvatar(void *);
extern f32 lbl_8031E490 __attribute__((section(".data")));
extern f32 lbl_8031E494 __attribute__((section(".data")));
extern f32 lbl_8031E498 __attribute__((section(".data")));
extern s32 lbl_803DC434 __attribute__((section(".data")));

void AI__RefreshAttackStateEligibility(void *arg0) {
    char *p_2d8;
    f32 var_f0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r9;
    s32 var_r0;
    void *temp_r11;
    void *temp_r3;

    temp_r3 = Game__FindNearestEligibleAvatar(M2C_FIELD(arg0, void **, 0x390));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x74);
    if (temp_r0 != 0x2E) {
        if (temp_r0 != 0x7A) {
            if (temp_r0 != 0x50) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x544) == 0) {
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x550) == 0) {
                        if ((s32) M2C_FIELD(arg0, s32 *, 0x564) == 0) {
                            if ((s32) M2C_FIELD(arg0, s32 *, 0x568) == 0) {
                                if ((s32) M2C_FIELD(arg0, s32 *, 0x56C) == 0) {
                                    if (M2C_FIELD(arg0, s32 *, 0x554) == 0) {
                                        if ((s32) M2C_FIELD(arg0, s32 *, 0x558) == 0) {
                                            if ((s32) M2C_FIELD(arg0, s32 *, 0x55C) == 0) {
                                                var_r0 = M2C_FIELD(arg0, s32 *, 0x560);
                                                if (var_r0 == 0) {
                                                    temp_r11 = M2C_FIELD(arg0, void **, 0x390);
                                                    if (!((M2C_FIELD(temp_r11, f32 *, 0x288) / M2C_FIELD(temp_r11, f32 *, 0x28C)) < lbl_8031E498)) {
                                                        M2C_FIELD(arg0, f32 *, 0x4F8) = (f32) lbl_8031E490;
                                                        M2C_FIELD(arg0, s32 *, 0x4F0) = var_r0;
                                                        temp_r9 = M2C_FIELD(temp_r11, s32 *, 0x7E4);
                                                        if (temp_r9 == 0) {
                                                            if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7) {
                                                                if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 0xA) {
                                                                    if ((s32) lbl_803DC434 > 0) {
                                                                        M2C_FIELD(arg0, s32 *, 0x4F0) = temp_r9;
                                                                        return;
                                                                    }
                                                                    goto block_18;
                                                                }
                                                                goto block_18;
                                                            }
block_18:
                                                            if (temp_r3 != NULL) {
                                                                p_2d8 = (char *)temp_r3 + 0x2d8;
                                                                temp_r0_2 = M2C_FIELD(p_2d8, s32 *, 0x0);
                                                                if (temp_r0_2 == 1) {
                                                                    var_f0 = M2C_FIELD(arg0, f32 *, 0x364);
                                                                    goto block_23;
                                                                }
                                                                if (temp_r0_2 == 0) {
                                                                    var_f0 = M2C_FIELD(arg0, f32 *, 0x368);
block_23:
                                                                    M2C_FIELD(arg0, f32 *, 0x4F8) = var_f0;
                                                                }
                                                                M2C_FIELD(p_2d8, s32 *, 0x0) = -1;
                                                            }
                                                            if (M2C_FIELD(arg0, s32 *, 0x530) != 0) {
                                                                var_r0 = 1;
                                                                if (!(Rand__RangeFloat(lbl_8031E490, lbl_8031E494) < M2C_FIELD(arg0, f32 *, 0x4F8))) {
                                                                    goto block_27;
                                                                }
                                                                goto block_28;
                                                            }
                                                        }
                                                    } else {
                                                        goto block_28;
                                                    }
                                                } else {
                                                    goto block_27;
                                                }
                                            } else {
                                                goto block_27;
                                            }
                                        } else {
                                            goto block_27;
                                        }
                                    } else {
                                        goto block_27;
                                    }
                                } else {
                                    goto block_27;
                                }
                            } else {
                                goto block_27;
                            }
                        } else {
                            goto block_27;
                        }
                    } else {
                        goto block_27;
                    }
                } else {
                    goto block_27;
                }
            } else {
                goto block_27;
            }
        } else {
            goto block_27;
        }
    } else {
block_27:
        var_r0 = 0;
block_28:
        M2C_FIELD(arg0, s32 *, 0x4F0) = var_r0;
    }
}
