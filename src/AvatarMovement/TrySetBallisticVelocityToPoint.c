/* AvatarMovement__TrySetBallisticVelocityToPoint @ 0x8008A380 (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float sqrtf(float);
M2C_UNK AvatarMovement__StoreBallisticTargetAndHeading(void *, void *, f32); /* extern */
extern f32 lbl_8031F55C __attribute__((section(".data")));
extern f32 lbl_8031F560 __attribute__((section(".data")));
extern f32 lbl_8031F564 __attribute__((section(".data")));

s32 AvatarMovement__TrySetBallisticVelocityToPoint(void *arg0, void *arg1) {
    f32 spC;
    f32 sp8;
    f32 temp_f10;
    f32 var_f10;
    f32 var_f12;
    f32 var_f31;
    s32 temp_r0;
    s32 var_r0;
    void *temp_r11;
    void *temp_r9;

    temp_r0 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_r0 == 1) {
        var_f31 = M2C_FIELD(arg1, f32 *, 0x10);
        goto block_8;
    }
    var_f12 = M2C_FIELD(arg1, f32 *, 0x10);
    if ((temp_r0 == 3) || ((temp_r0 == 4) && (M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */), (0 == 0)))) {
        var_f12 += M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x3C);
    }
    if (!(var_f12 < lbl_8031F55C)) {
        var_f31 = sqrtf(2.0f * M2C_FIELD(arg0, f32 *, 0xC4) * var_f12);
block_8:
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            goto block_9;
        }
        temp_f10 = (var_f31 + sqrtf((var_f31 * var_f31) + (2.0f * M2C_FIELD(arg0, f32 *, 0xC4) * (M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x3C) - M2C_FIELD(arg1, f32 *, 4))))) / M2C_FIELD(arg0, f32 *, 0xC4);
        spC = lbl_8031F560;
        sp8 = temp_f10;
        if ((s32) (u8) (M2C_BITWISE(u32, sp8) >> 0x17U) != 0) {
            var_r0 = 0 + M2C_CARRY;
        } else {
            var_r0 = 1;
        }
        if (var_r0 == 0) {
            var_f10 = lbl_8031F560 / temp_f10;
        } else {
            var_f10 = lbl_8031F55C;
        }
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        temp_r11 = temp_r9 + 0x68;
        M2C_FIELD(temp_r9, f32 *, 0x68) = (f32) (var_f10 * (M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(temp_r9, f32 *, 0x38)));
        M2C_FIELD(temp_r11, f32 *, 4) = var_f31;
        M2C_FIELD(temp_r11, f32 *, 8) = (f32) (var_f10 * (M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_r9, f32 *, 0x40)));
        AvatarMovement__StoreBallisticTargetAndHeading(arg0, arg1, lbl_8031F564);
        return 1;
    }
block_9:
    return 0;
}

