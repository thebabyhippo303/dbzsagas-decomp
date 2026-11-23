/* Dende__GetNearestHidingSpotDistance @ 0x80044DD0 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopInt(void *, void *);
void Script__PushFloat(void *, void *, float);
void Script__SetIntVariable(void *, int, char *, int);
float sqrtf(float);
extern s8 lbl_80311F38 __attribute__((section(".data")));
extern f32 lbl_80311F48 __attribute__((section(".data")));

void Dende__GetNearestHidingSpotDistance(void *arg0, void *arg1) {
    f32 ld_38;
    f32 sp10;
    f32 spC;
    f32 temp_f11;
    f32 temp_f12;
    f32 var_f31;
    void *temp_r30;
    void *temp_r3;

    temp_r3 = Script__PopInt(arg0, arg1);
    temp_r30 = Script__PopInt(arg0, arg1);
    var_f31 = lbl_80311F48;
    if (temp_r3 != NULL) {
        ld_38 = M2C_FIELD(temp_r30, f32 *, 0x38);
        sp10 = M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(temp_r30, f32 *, 0x40);
        temp_f12 = M2C_FIELD(temp_r3, f32 *, 0x38) - ld_38;
        sp10 = temp_f12;
        spC = M2C_FIELD(temp_r3, f32 *, 0x3c) - M2C_FIELD(temp_r30, f32 *, 0x3c);
        temp_f11 = temp_f12 * temp_f12;
        temp_f12 = M2C_FIELD(&sp10, f32 *, 4);
        sp10 = M2C_FIELD(&sp10, f32 *, 8);
        spC = temp_f11;
        var_f31 = sqrtf(M2C_FIELD(&spC, f32 *, 4) + temp_f11 + M2C_FIELD(&spC, f32 *, 8));
        temp_f12 = temp_f12 * temp_f12;
        sp10 = sp10 * sp10;
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
        if ((0 == 0) && (M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */), (0 == 0))) {
            Script__SetIntVariable(M2C_FIELD(temp_r30, void **, 0x84), 3, &lbl_80311F38, 1);
        } else {
            Script__SetIntVariable(M2C_FIELD(temp_r30, void **, 0x84), 3, &lbl_80311F38, 0);
        }
    }
    Script__PushFloat(arg0, arg1, var_f31);
}
