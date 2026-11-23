/* AvatarMovement__AdjustCollisionBoundsForHeight @ 0x8008D684 (size: 0x244, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float sqrtf(float);
extern f32 lbl_8031F79C __attribute__((section(".data")));

f32 AvatarMovement__AdjustCollisionBoundsForHeight(void *arg0, f32 farg0) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_r0;
    f32 temp_r8;
    f32 temp_r9_2;
    f32 var_f1;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r6;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r9;

    temp_f10 = M2C_FIELD(arg0, f32 *, 0x728);
    temp_r10 = arg0 + 0x728;
    temp_r9 = arg0 + 0x140;
    temp_r7 = arg0 + 0x14C;
    sp28 = temp_f10 + M2C_FIELD(arg0, f32 *, 0x140);
    sp2C = M2C_FIELD(temp_r10, f32 *, 4) + M2C_FIELD(temp_r9, f32 *, 4);
    sp30 = M2C_FIELD(temp_r10, f32 *, 8) + M2C_FIELD(temp_r9, f32 *, 8);
    sp8 = sp28;
    M2C_FIELD(&sp8, f32 *, 4) = sp2C;
    M2C_FIELD(&sp8, f32 *, 8) = sp30;
    sp28 = temp_f10 + M2C_FIELD(arg0, f32 *, 0x14C);
    sp30 = M2C_FIELD(temp_r10, f32 *, 8) + M2C_FIELD(temp_r7, f32 *, 8);
    sp2C = M2C_FIELD(temp_r10, f32 *, 4) + M2C_FIELD(temp_r7, f32 *, 4);
    sp18 = sp28;
    sp1C = sp2C;
    sp20 = sp30;
    var_f1 = M2C_FIELD(&sp8, f32 *, 4);
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
    if (0 == 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x6AC);
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            if (!(var_f1 > temp_f0)) {
                M2C_FIELD(&sp8, f32 *, 4) = temp_f0;
                goto block_5;
            }
        } else {
            M2C_FIELD(&sp8, f32 *, 4) = farg0;
block_5:
            temp_r6 = arg0 + 0x728;
            temp_r10_2 = arg0 + 0x14C;
            temp_f3 = sp8 + sp18;
            sp38 = temp_f3 * lbl_8031F79C;
            temp_f5 = sp18 - sp8;
            temp_r7_2 = arg0 + 0x140;
            temp_f7 = M2C_FIELD(&sp8, f32 *, 4) + sp1C;
            temp_f6 = M2C_FIELD(&sp8, f32 *, 8) + sp20;
            temp_r8 = sp38;
            sp3C = temp_f7 * lbl_8031F79C;
            sp40 = temp_f6 * lbl_8031F79C;
            temp_f9 = sp20 - M2C_FIELD(&sp8, f32 *, 8);
            temp_r9_2 = sp3C;
            temp_f8 = sp1C - M2C_FIELD(&sp8, f32 *, 4);
            temp_r0 = sp40;
            sp38 = temp_f5 * lbl_8031F79C;
            sp3C = temp_f8 * lbl_8031F79C;
            sp40 = temp_f9 * lbl_8031F79C;
            M2C_FIELD(arg0, f32 *, 0x728) = temp_r8;
            M2C_FIELD(temp_r6, f32 *, 8) = temp_r0;
            M2C_FIELD(temp_r6, f32 *, 4) = temp_r9_2;
            M2C_FIELD(arg0, f32 *, 0x14C) = sp38;
            M2C_FIELD(temp_r10_2, f32 *, 4) = sp3C;
            M2C_FIELD(temp_r10_2, f32 *, 8) = sp40;
            sp48 = temp_f3;
            sp4C = temp_f7;
            sp50 = temp_f6;
            sp58 = temp_f5;
            sp5C = temp_f8;
            sp60 = temp_f9;
            sp38 = -M2C_FIELD(arg0, f32 *, 0x14C);
            sp3C = -M2C_FIELD(temp_r10_2, f32 *, 4);
            sp40 = -M2C_FIELD(temp_r10_2, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x140) = sp38;
            M2C_FIELD(temp_r7_2, f32 *, 8) = sp40;
            M2C_FIELD(temp_r7_2, f32 *, 4) = sp3C;
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x14C);
            temp_f0_2 = M2C_FIELD(temp_r10_2, f32 *, 8);
            temp_f13 = M2C_FIELD(temp_r10_2, f32 *, 4);
            temp_f1_2 = temp_f1 * temp_f1;
            sp38 = temp_f1_2;
            sp40 = temp_f0_2 * temp_f0_2;
            sp3C = temp_f13 * temp_f13;
            M2C_FIELD((arg0 + 0x13C), f32 *, 0x1C) = sqrtf(temp_f1_2 + M2C_FIELD(&sp38, f32 *, 4) + M2C_FIELD(&sp38, f32 *, 8));
            goto block_6;
        }
    } else {
block_6:
        var_f1 = M2C_FIELD(&sp8, f32 *, 4);
    }
    return var_f1;
}
