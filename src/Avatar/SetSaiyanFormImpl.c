/* Avatar__SetSaiyanFormImpl @ 0x80095B38 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef unsigned char u8;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Actor__FindBoneIdByName(void *, const char *, u8 *);
void Actor__SetBoneHidden(void *, s32, s32);
void Avatar__StopFireShieldImpl(void *, void *);
void Bone__UpdateTransform(void *);
void fn_80246B1C(void *, s32);
void fn_801DB5C8(s32);

extern char lbl_8031F7C0[] __attribute__((section(".data")));
extern char lbl_8031F99C[] __attribute__((section(".data")));
extern char lbl_8031F9A4[] __attribute__((section(".data")));
extern char lbl_8031F9AC[] __attribute__((section(".data")));

void Avatar__SetSaiyanFormImpl(void *arg0, s32 arg1) {
    u8 spA;
    u8 sp9;
    u8 sp8;
    s32 var_r4;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x2D0) = arg1;
    if (arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x1AEC) = M2C_FIELD(arg0, s32 *, 0x1AEC) + 1;
    } else if (arg1 == 2) {
        M2C_FIELD(arg0, s32 *, 0x1AF0) = M2C_FIELD(arg0, s32 *, 0x1AF0) + 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2D0) <= 0) {
        Avatar__StopFireShieldImpl(arg0, (void *)3);
        Avatar__StopFireShieldImpl(arg0, (void *)4);
        Avatar__StopFireShieldImpl(arg0, (void *)5);
        temp_r11 = M2C_FIELD(arg0, void **, 0xAC);
        temp_r9 = M2C_FIELD(temp_r11, void **, 0xC);
        ((void (*)(void *, void *))M2C_FIELD(temp_r9, void **, 0x2C))((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x28), lbl_8031F7C0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        fn_801DB5C8(M2C_FIELD(arg0, s32 *, 0xA4));
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0x90);
    if (temp_r3 != NULL) {
        var_r4 = 1;
        if (M2C_FIELD(arg0, s32 *, 0x2D0) == 0) {
            var_r4 = 0;
        }
        fn_80246B1C(temp_r3, var_r4);
    }
    if (Actor__FindBoneIdByName(arg0, lbl_8031F99C, &sp8) != 0) {
        Actor__SetBoneHidden(arg0, sp8, M2C_FIELD(arg0, s32 *, 0x2D0) == 0);
    }
    if (Actor__FindBoneIdByName(arg0, lbl_8031F9A4, &sp9) != 0) {
        Actor__SetBoneHidden(arg0, sp9, (M2C_FIELD(arg0, s32 *, 0x2D0) ^ 1) == 0);
    }
    if (Actor__FindBoneIdByName(arg0, lbl_8031F9AC, &spA) != 0) {
        Actor__SetBoneHidden(arg0, spA, (M2C_FIELD(arg0, s32 *, 0x2D0) ^ 2) == 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        Bone__UpdateTransform(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0xC));
        fn_801DB5C8(M2C_FIELD(arg0, s32 *, 0xA4));
    }
}
