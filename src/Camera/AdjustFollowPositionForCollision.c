/* Camera__AdjustFollowPositionForCollision @ 0x800CA38C (size: 0x30C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Camera__ResetFollowHeightIfNeeded(void *, s32);
void FollowCamera__SetHeightIfHigher(void *, f32);
void MathUtil__OffsetPointXZByAngle(f32, f32, void *, void *);
int Camera__TryComputeHeadingBetweenXZPoints(void *, f32 *, f32, f32);
s32 fn_800C3F0C(void *, M2C_UNK *, M2C_UNK *, f32, f32);
extern f32 lbl_80321A60 __attribute__((section(".data")));
extern f32 lbl_80321A64 __attribute__((section(".data")));
extern f32 lbl_80321A68 __attribute__((section(".data")));
extern f32 lbl_80321A6C __attribute__((section(".data")));
extern f32 lbl_80321A70 __attribute__((section(".data")));
extern f32 lbl_80321A74 __attribute__((section(".data")));
extern f32 lbl_80321A78 __attribute__((section(".data")));
extern f32 lbl_80321A7C __attribute__((section(".data")));
extern f32 lbl_80321A80 __attribute__((section(".data")));
extern f32 lbl_80321A84 __attribute__((section(".data")));
extern f32 lbl_80321A88 __attribute__((section(".data")));
extern f32 lbl_80321A8C __attribute__((section(".data")));

void Camera__AdjustFollowPositionForCollision(void *arg0, s32 arg1, void *arg2, void *arg3, f32 farg0) {
    f32 ld_8;
    f32 sp38;
    M2C_UNK sp28;
    f32 sp1C;
    register M2C_UNK sp18;
    s32 sp8;
    f64 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 var_f31_2;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    register f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f31;
    f32 var_f31;
    f32 temp_f12;

    if (arg1 != 0) {
        if (!(M2C_FIELD(arg0, f32 *, 0x12C) >= lbl_80321A60)) {
            Camera__ResetFollowHeightIfNeeded(arg0, 1);
            temp_f12 = M2C_FIELD(arg0, f32 *, 0x154);
            temp_f13 = M2C_FIELD(arg0, f32 *, 0xFC);
            if (!(temp_f13 <= (temp_f12 * lbl_80321A64))) {
                var_f31 = __builtin_fabsf((__builtin_fabsf(temp_f12) - __builtin_fabsf(temp_f13 - temp_f12)) / temp_f12) * lbl_80321A68;
                if (!(var_f31 >= lbl_80321A6C)) {
                    var_f31 = lbl_80321A6C;
                } else if (!(var_f31 <= lbl_80321A68)) {
                    var_f31 = lbl_80321A68;
                }
                FollowCamera__SetHeightIfHigher(arg0, lbl_80321A70);
            } else {
                var_f31 = lbl_80321A68;
                FollowCamera__SetHeightIfHigher(arg0, lbl_80321A74);
            }
            temp_f13_2 = M2C_FIELD(arg0, f32 *, 0xFC);
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (1 | M2C_FIELD(arg0, s32 *, 0x44));
            if (!(temp_f13_2 <= M2C_FIELD(arg0, f32 *, 0x12C))) {
                M2C_FIELD(arg0, f32 *, 0x12C) = temp_f13_2;
            }
            temp_f0 = (var_f31 * farg0) + M2C_FIELD(arg0, f32 *, 0x12C);
            M2C_FIELD(arg0, f32 *, 0x12C) = temp_f0;
            if (temp_f0 != lbl_80321A60) {
                M2C_FIELD(arg0, f32 *, 0x12C) = (f32) lbl_80321A60;
            }
        } else {
            goto block_25;
        }
        goto block_26;
    }
    temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x154);
    if (!(M2C_FIELD(arg0, f32 *, 0x12C) <= temp_f12_2)) {
        if (M2C_FIELD(arg0, u32 *, 0xE4) & 8) {
            M2C_FIELD(arg0, f32 *, 0x128) = (f32) (temp_f12_2 + lbl_80321A78);
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFFE);
            M2C_FIELD(arg0, f32 *, 0x130) = (f32) (temp_f12_2 + lbl_80321A7C);
            M2C_FIELD(arg0, f32 *, 0x12C) = temp_f12_2;
            return;
        }
        temp_f13_3 = M2C_FIELD(arg0, f32 *, 0xFC);
        if (!(temp_f13_3 <= (temp_f12_2 * lbl_80321A80))) {
            var_f31_2 = __builtin_fabsf((__builtin_fabsf(temp_f12_2) - __builtin_fabsf(temp_f13_3 - temp_f12_2)) / temp_f12_2) * lbl_80321A68;
            if (!(var_f31_2 >= lbl_80321A84)) {
                var_f31_2 = lbl_80321A84;
            } else if (!(var_f31_2 <= lbl_80321A68)) {
                var_f31_2 = lbl_80321A68;
            }
        } else {
            var_f31_2 = lbl_80321A68;
            FollowCamera__SetHeightIfHigher(arg0, lbl_80321A88);
        }
        sp8 = M2C_FIELD(arg2, s32 *, 0);
        temp_f31 = -(var_f31_2 * farg0);
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
        ld_8 = M2C_FIELD(arg3, f32 *, 8);
        Camera__TryComputeHeadingBetweenXZPoints(arg2, &sp38, M2C_FIELD(arg3, f32 *, 0), ld_8);
        MathUtil__OffsetPointXZByAngle(sp38, temp_f31, &sp8, &sp18);
        sp1C = M2C_FIELD(arg2, f32 *, 4);
        if (fn_800C3F0C(arg0, &sp18, &sp28, M2C_FIELD(arg0, f32 *, 0x160), lbl_80321A8C) != 1) {
            temp_f13_4 = M2C_FIELD(arg0, f32 *, 0x154);
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFFE);
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x12C) + temp_f31;
            M2C_FIELD(arg0, f32 *, 0x12C) = temp_f0_2;
            if (temp_f0_2 != temp_f13_4) {
                M2C_FIELD(arg0, f32 *, 0x12C) = temp_f13_4;
            }
            goto block_26;
        }
    } else {
block_25:
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFFE);
block_26:
        temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x12C);
        M2C_FIELD(arg0, f32 *, 0x130) = (f32) (temp_f0_3 + lbl_80321A7C);
        M2C_FIELD(arg0, f32 *, 0x128) = (f32) (temp_f0_3 + lbl_80321A78);
    }
}
