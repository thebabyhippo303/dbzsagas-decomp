/* Avatar__GetReferenceBoneTransformMatrix @ 0x80098D78 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 fn_801DCDB4(void *);                               /* extern */
M2C_UNK fn_801DD038(void *, s32, f32 *);            /* extern */

void Avatar__GetReferenceBoneTransformMatrix(void *arg0, void *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp8;
    f32 *var_r10;
    f32 *var_r8;
    f32 temp_f11;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    s32 temp_r0;
    s32 var_r7;
    void *temp_r9;

    fn_801DD038(arg0, fn_801DCDB4(arg0 + 0x1A40), &sp8);
    temp_r9 = arg0 + 0x44;
    temp_f9 = M2C_FIELD(&sp8, f32 *, 4);
    var_r8 = &sp30;
    var_r10 = &sp58;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x44);
    var_r7 = 0x18;
    temp_f11 = M2C_FIELD(&sp8, f32 *, 8);
    temp_f6 = M2C_FIELD(&sp8, f32 *, 0x10);
    temp_f7 = M2C_FIELD(&sp8, f32 *, 0xC);
    sp58 = (temp_f11 * M2C_FIELD(temp_r9, f32 *, 0x18)) + ((sp8 * temp_f2) + (temp_f9 * M2C_FIELD(temp_r9, f32 *, 0xC)));
    temp_f8 = M2C_FIELD(&sp8, f32 *, 0x14);
    temp_f3 = M2C_FIELD(&sp8, f32 *, 0x1C);
    temp_f4 = M2C_FIELD(&sp8, f32 *, 0x18);
    sp5C = (temp_f11 * M2C_FIELD(temp_r9, f32 *, 0x1C)) + ((sp8 * M2C_FIELD(temp_r9, f32 *, 4)) + (temp_f9 * M2C_FIELD(temp_r9, f32 *, 0x10)));
    temp_f5 = M2C_FIELD(&sp8, f32 *, 0x20);
    sp60 = (temp_f11 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((sp8 * M2C_FIELD(temp_r9, f32 *, 8)) + (temp_f9 * M2C_FIELD(temp_r9, f32 *, 0x14)));
    sp64 = (temp_f8 * M2C_FIELD(temp_r9, f32 *, 0x18)) + ((temp_f7 * temp_f2) + (temp_f6 * M2C_FIELD(temp_r9, f32 *, 0xC)));
    sp68 = (temp_f8 * M2C_FIELD(temp_r9, f32 *, 0x1C)) + ((temp_f7 * M2C_FIELD(temp_r9, f32 *, 4)) + (temp_f6 * M2C_FIELD(temp_r9, f32 *, 0x10)));
    sp6C = (temp_f8 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((temp_f7 * M2C_FIELD(temp_r9, f32 *, 8)) + (temp_f6 * M2C_FIELD(temp_r9, f32 *, 0x14)));
    sp70 = (temp_f5 * M2C_FIELD(temp_r9, f32 *, 0x18)) + ((temp_f4 * temp_f2) + (temp_f3 * M2C_FIELD(temp_r9, f32 *, 0xC)));
    sp74 = (temp_f5 * M2C_FIELD(temp_r9, f32 *, 0x1C)) + ((temp_f4 * M2C_FIELD(temp_r9, f32 *, 4)) + (temp_f3 * M2C_FIELD(temp_r9, f32 *, 0x10)));
    sp78 = (temp_f5 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((temp_f4 * M2C_FIELD(temp_r9, f32 *, 8)) + (temp_f3 * M2C_FIELD(temp_r9, f32 *, 0x14)));
    do {
        var_r7 -= 0x18;
        M2C_FIELD(var_r8, f32 *, 0) = M2C_FIELD(var_r10, f32 *, 0);
        M2C_FIELD(var_r8, s32 *, 4) = (s32) M2C_FIELD(var_r10, s32 *, 4);
        M2C_FIELD(var_r8, s32 *, 8) = (s32) M2C_FIELD(var_r10, s32 *, 8);
        M2C_FIELD(var_r8, s32 *, 0xC) = (s32) M2C_FIELD(var_r10, s32 *, 0xC);
        M2C_FIELD(var_r8, s32 *, 0x10) = (s32) M2C_FIELD(var_r10, s32 *, 0x10);
        temp_r0 = M2C_FIELD(var_r10, s32 *, 0x14);
        var_r10 += 0x18;
        M2C_FIELD(var_r8, s32 *, 0x14) = temp_r0;
        var_r8 += 0x18;
    } while (var_r7 != 0);
    M2C_FIELD(var_r8, f32 *, 0) = M2C_FIELD(var_r10, f32 *, 0);
    M2C_FIELD(var_r8, s32 *, 4) = (s32) M2C_FIELD(var_r10, s32 *, 4);
    M2C_FIELD(var_r8, s32 *, 8) = (s32) M2C_FIELD(var_r10, s32 *, 8);
    M2C_FIELD(arg1, f32 *, 0) = sp30;
    M2C_FIELD(arg1, f32 *, 0x20) = sp50;
    M2C_FIELD(arg1, f32 *, 4) = sp34;
    M2C_FIELD(arg1, f32 *, 8) = sp38;
    M2C_FIELD(arg1, f32 *, 0xC) = sp3C;
    M2C_FIELD(arg1, f32 *, 0x10) = sp40;
    M2C_FIELD(arg1, f32 *, 0x14) = sp44;
    M2C_FIELD(arg1, f32 *, 0x18) = sp48;
    M2C_FIELD(arg1, f32 *, 0x1C) = sp4C;
}
