/* Avatar__GetSpawnPoint @ 0x8003DF68 (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Script__PopInt(void *, void *);
void Script__PushFloat(void *, void *, float);
void Script__PushInt(void *, void *, int);
float sqrtf(float);
extern f32 lbl_80311B3C __attribute__((section(".data")));

void Avatar__GetSpawnPoint(void *arg0, void *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_r10;
    s32 var_r28;
    void *temp_r11;
    void *temp_r3;
    void *temp_r7;
    void *temp_r9;

    temp_r3 = Script__PopInt(arg0, arg1);
    var_r28 = 0;
    sp8 = lbl_80311B3C;
    M2C_FIELD(&sp8, f32 *, 8) = (f32) lbl_80311B3C;
    M2C_FIELD(&sp8, f32 *, 4) = (f32) lbl_80311B3C;
    if (((s32) M2C_FIELD(temp_r3, s32 *, 0x7E4) == 0) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x71C) == 5)) {
        temp_r11 = M2C_FIELD(temp_r3, void **, 0xB8C);
        temp_r7 = temp_r3 + 0x770;
        temp_r10 = M2C_FIELD(temp_r11, f32 *, 0x3E8);
        temp_r9 = temp_r11 + 0x3E8;
        sp20 = M2C_FIELD(temp_r9, f32 *, 8);
        sp1C = M2C_FIELD(temp_r9, f32 *, 4);
        sp18 = temp_r10;
        sp8 = temp_r10;
        M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
        temp_f12 = sp8 - M2C_FIELD(temp_r3, f32 *, 0x770);
        temp_f11 = temp_f12 * temp_f12;
        temp_f13 = M2C_FIELD(&sp8, f32 *, 4) - M2C_FIELD(temp_r7, f32 *, 4);
        sp28 = temp_f11;
        temp_f0 = M2C_FIELD(&sp8, f32 *, 8) - M2C_FIELD(temp_r7, f32 *, 8);
        sp1C = temp_f13;
        sp20 = temp_f0;
        sp18 = temp_f12;
        sp2C = temp_f13 * temp_f13;
        sp30 = temp_f0 * temp_f0;
        sqrtf(temp_f11 + M2C_FIELD(&sp28, f32 *, 4) + M2C_FIELD(&sp28, f32 *, 8));
        M2C_ERROR(/* "fcmpu $cr7, $f1, $f0" is not supported, the first arg is not $cr0 */);
        var_r28 = ((u32) M2C_ERROR(/* unknown instruction: mfcr $r28 */) >> 2U) & 1;
    }
    Script__PushFloat(arg0, arg1, sp8);
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 4));
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 8));
    Script__PushInt(arg0, arg1, var_r28);
}

