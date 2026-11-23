/* HUD__UpdateSimpleHudPosition @ 0x8010D0B0 (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void HUD__OffsetWidgetPosition(void *, void *, float, float);
M2C_UNK HUD__OffsetWidgetGroupPositions(void *, void *, f32, f32); /* extern */
extern f32 lbl_8032630C __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void HUD__UpdateSimpleHudPosition(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;
    void **var_r31;
    void *temp_r4;

    temp_f1 = M2C_FIELD(arg1, f32 *, 0x4E4);
    temp_f13 = lbl_803A35BC * lbl_8032630C;
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
    if (0 == 0) {
        M2C_FIELD(arg1, f32 *, 0x4E4) = (f32) (temp_f1 - temp_f13);
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            goto block_5;
        }
    } else {
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            M2C_FIELD(arg1, f32 *, 0x4E4) = (f32) (temp_f1 + temp_f13);
            M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
            if (0 == 0) {
block_5:
                M2C_FIELD(arg1, f32 *, 0x4E4) = (f32) M2C_FIELD(arg1, f32 *, 0x4EC);
            }
        }
    }
    temp_f13_2 = lbl_803A35BC * lbl_8032630C;
    temp_f0 = M2C_FIELD(arg1, f32 *, 0x4E8);
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
    if (0 == 0) {
        M2C_FIELD(arg1, f32 *, 0x4E8) = (f32) (temp_f0 - temp_f13_2);
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            goto block_11;
        }
    } else {
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if (0 == 0) {
            M2C_FIELD(arg1, f32 *, 0x4E8) = (f32) (temp_f0 + temp_f13_2);
            M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
            if (0 == 0) {
block_11:
                M2C_FIELD(arg1, f32 *, 0x4E8) = (f32) M2C_FIELD(arg1, f32 *, 0x4F0);
            }
        }
    }
    temp_f30 = M2C_FIELD(arg1, f32 *, 0x4E4) - temp_f1;
    temp_f31 = M2C_FIELD(arg1, f32 *, 0x4E8) - M2C_FIELD(arg1, f32 *, 0x4E8);
    var_r31 = arg1 + 0x2B0;
    HUD__OffsetWidgetPosition(arg0, M2C_FIELD(arg1, void **, 0x2C0), temp_f30, temp_f31);
    do {
        temp_r4 = *var_r31;
        var_r31 += 4;
        HUD__OffsetWidgetPosition(arg0, temp_r4, temp_f30, temp_f31);
    } while (var_r31 <= (void *) (arg1 + 0x2BC));
    HUD__OffsetWidgetGroupPositions(arg0, arg1 + 4, temp_f30, temp_f31);
}
