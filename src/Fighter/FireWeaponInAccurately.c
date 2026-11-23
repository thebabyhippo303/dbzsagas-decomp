/* Fighter__FireWeaponInAccurately @ 0x8002B36C (size: 0x204, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Fighter__QueueWeaponFire(char *, int *, int, float);
float Rand__RangeFloat(float, float);
float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
float cosf(float);
float sinf(float);
extern f32 lbl_803115FC __attribute__((section(".data")));
extern f32 lbl_80311600 __attribute__((section(".data")));
extern f32 lbl_803DE520;

void Fighter__FireWeaponInAccurately(void *arg0, void *arg1) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f8;
    s8 *temp_r31;
    void *temp_r27;
    void *temp_r28;
    void *temp_r9;

    temp_r28 = Script__PopInt(arg0, arg1);
    temp_f29 = Script__PopFloat(arg0, arg1);
    temp_f1 = Script__PopFloat(arg0, arg1);
    temp_r31 = M2C_FIELD(arg0, s8 **, 0xC8);
    if (temp_r28 != NULL) {
        temp_r9 = M2C_FIELD(temp_r28, void **, 0x160);
        temp_r27 = temp_r31 + 0x38;
        sp8 = M2C_FIELD(temp_r9, f32 *, 0);
        M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
        sp28 = sp8 - M2C_FIELD(temp_r31, f32 *, 0x38);
        sp30 = M2C_FIELD(&sp8, f32 *, 8) - M2C_FIELD(temp_r27, f32 *, 8);
        sp2C = M2C_FIELD(&sp8, f32 *, 4) - M2C_FIELD(temp_r27, f32 *, 4);
        sp18 = sp28;
        M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(&sp28, f32 *, 4);
        M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(&sp28, f32 *, 8);
        sp1C = M2C_FIELD(&sp18, f32 *, 4);
        sp20 = M2C_FIELD(&sp18, f32 *, 8);
        temp_f31 = Rand__RangeFloat(-temp_f1, temp_f1) * lbl_803DE520;
        temp_f30 = sinf(temp_f31);
        temp_f1_2 = cosf(temp_f31);
        temp_f8 = -temp_f30;
        sp28 = (sp18 * temp_f1_2) + (sp20 * temp_f30);
        sp2C = sp1C;
        sp30 = (sp18 * temp_f8) + (sp20 * temp_f1_2);
        sp48 = lbl_80311600;
        sp54 = lbl_803115FC;
        sp38 = temp_f1_2;
        sp3C = lbl_803115FC;
        sp40 = temp_f8;
        sp44 = lbl_803115FC;
        sp4C = lbl_803115FC;
        sp50 = temp_f30;
        sp58 = temp_f1_2;
        sp18 = sp28;
        M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(&sp28, f32 *, 8);
        M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(&sp28, f32 *, 4);
        sp28 = M2C_FIELD(temp_r31, f32 *, 0x38) + sp18;
        sp2C = M2C_FIELD(temp_r27, f32 *, 4) + sp1C;
        sp30 = M2C_FIELD(temp_r27, f32 *, 8) + sp20;
        sp8 = sp28;
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp28, f32 *, 4);
        M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp28, f32 *, 8);
        Fighter__QueueWeaponFire(temp_r31, (s32 *) &sp8, 0, temp_f29);
        return;
    }
    Fighter__QueueWeaponFire(temp_r31, NULL, 0, temp_f29);
}

