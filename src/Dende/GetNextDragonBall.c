/* Dende__GetNextDragonBall @ 0x80040AC8 (size: 0x23C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Actor__FindBoneIdByName(void *, unsigned char *, const char *);
void Script__PushInt(void *, void *, int);
int String__CompareIgnoreCase(const char *, const char *);
void fn_801DD1FC(float *, void *, int);
extern u8 lbl_803113E8 __attribute__((section(".data")));
extern s8 lbl_80311C14 __attribute__((section(".data")));
extern M2C_UNK lbl_803945A4 __attribute__((section(".data")));
extern void *lbl_803DCCB8;

void Dende__GetNextDragonBall(void *arg0, void *arg1) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s8 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp2C;
    f32 sp30;
    f32 sp28;
    f32 sp18;
    f32 sp8;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *var_r23;
    void *var_r29;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC8);
    temp_r9_2 = temp_r9 + 0x38;
    var_r23 = NULL;
    sp8 = M2C_FIELD(temp_r9, f32 *, 0x38);
    M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9_2, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r9_2, f32 *, 8);
    var_r29 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
    if (var_r29 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r29, void **, 0);
            if (((s32) (M2C_FIELD(temp_r30, s32 *, 0) & M2C_FIELD(&lbl_803945A4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945A4, s32 *, 0)) && (String__CompareIgnoreCase(temp_r30 + 0x1C0, &lbl_80311C14) == 0)) {
                temp_r9_3 = temp_r30 + 0x38;
                sp38 = M2C_FIELD(temp_r30, f32 *, 0x38);
                M2C_FIELD(&sp38, f32 *, 4) = (f32) M2C_FIELD(temp_r9_3, f32 *, 4);
                M2C_FIELD(&sp38, f32 *, 8) = (f32) M2C_FIELD(temp_r9_3, f32 *, 8);
                sp48 = sp38 - sp8;
                sp4C = sp3C - M2C_FIELD(&sp8, f32 *, 4);
                sp50 = sp40 - M2C_FIELD(&sp8, f32 *, 8);
                sp28 = sp48;
                M2C_FIELD(&sp28, f32 *, 4) = (f32) M2C_FIELD(&sp48, f32 *, 4);
                M2C_FIELD(&sp28, f32 *, 8) = (f32) M2C_FIELD(&sp48, f32 *, 8);
                if (((s32) M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x84), s32 *, 0xC) != 0) && (Actor__FindBoneIdByName(temp_r30, &lbl_803113E8, &sp58) != 0)) {
                    fn_801DD1FC(&sp48, temp_r30, (s32) (u8) sp58);
                    M2C_FIELD(&sp38, f32 *, 4) = (f32) M2C_FIELD(&sp48, f32 *, 4);
                    sp38 = sp48;
                    M2C_FIELD(&sp38, f32 *, 8) = (f32) M2C_FIELD(&sp48, f32 *, 8);
                }
                sp60 = sp28 * sp28;
                sp64 = sp2C * sp2C;
                sp68 = sp30 * sp30;
                M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
                if (0 == 0) {
                    var_r23 = temp_r30;
                    sp18 = sp38;
                    M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(&sp38, f32 *, 4);
                    M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(&sp38, f32 *, 8);
                }
            }
            if (var_r29 != NULL) {
                var_r29 = M2C_FIELD(var_r29, void **, 0x14);
            } else {
                var_r29 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
            }
        } while (var_r29 != NULL);
    }
    if (var_r23 != NULL) {
        M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
        sp8 = sp18;
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
    }
    Script__PushInt(arg0, arg1, (s32) var_r23);
}
