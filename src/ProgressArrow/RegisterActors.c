/* ProgressArrow__RegisterActors @ 0x8011F22C (size: 0x1F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ProgressArrow__EnsureActorRegistrationHandle(void *);
int String__CompareIgnoreCase(const char *, const char *);
void * fn_80184348(int);
void fn_801843CC(void *);
void fn_802CB514(void *);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
extern s8 lbl_803272EC __attribute__((section(".data")));
extern f32 lbl_803272FC __attribute__((section(".data")));
extern f32 lbl_80327300 __attribute__((section(".data")));
extern M2C_UNK lbl_803941AC __attribute__((section(".data")));
extern M2C_UNK lbl_803945A4 __attribute__((section(".data")));
extern void *lbl_803DCCB8;
extern f32 lbl_803DD9A0;
extern s32 lbl_803DD9A4;
extern f32 lbl_803DD9A8;

s32 ProgressArrow__RegisterActors(void) {
    s32 *sp8;
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r27;
    s32 temp_r30;
    s32 temp_r31;
    u32 temp_r28;
    void **temp_r22;
    void *temp_r28_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *var_r26;

    if ((void *) M2C_FIELD(&lbl_803941AC, void **, 0) != NULL) {
        fn_801843CC(M2C_FIELD(&lbl_803941AC, void **, 0));
    }
    M2C_FIELD(&lbl_803941AC, s32 *, 8) = 0;
    M2C_FIELD(&lbl_803941AC, void **, 0) = NULL;
    temp_r22 = lbl_803DCCB8 + 0x2C;
    M2C_FIELD(&lbl_803941AC, s32 *, 4) = 0;
    var_r26 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
    if (var_r26 != NULL) {
        do {
            temp_r10 = M2C_FIELD(var_r26, s32 **, 0);
            if ((s32) (*temp_r10 & M2C_FIELD(&lbl_803945A4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945A4, s32 *, 0)) {
                sp8 = temp_r10;
                if (String__CompareIgnoreCase(temp_r10 + 0x1C0, &lbl_803272EC) == 0) {
                    temp_r30 = M2C_FIELD(&lbl_803941AC, s32 *, 4);
                    if (temp_r30 == (s32) M2C_FIELD(&lbl_803941AC, s32 *, 8)) {
                        temp_r28 = temp_r30 * 4;
                        temp_r27 = (temp_r30 + M2C_FIELD(&lbl_803941AC, s32 *, 0xC)) * 4;
                        temp_r3 = fn_80184348(temp_r27);
                        if (temp_r3 != NULL) {
                            if ((void *) M2C_FIELD(&lbl_803941AC, void **, 0) != NULL) {
                                memcpy(temp_r3, M2C_FIELD(&lbl_803941AC, void **, 0), temp_r28);
                                if ((void *) M2C_FIELD(&lbl_803941AC, void **, 0) != NULL) {
                                    fn_801843CC(M2C_FIELD(&lbl_803941AC, void **, 0));
                                }
                            }
                            M2C_FIELD(&lbl_803941AC, void **, 0) = temp_r3;
                            M2C_FIELD(&lbl_803941AC, s32 *, 8) = (s32) (M2C_FIELD(&lbl_803941AC, s32 *, 8) + M2C_FIELD(&lbl_803941AC, s32 *, 0xC));
                            if ((s32) M2C_FIELD(&lbl_803941AC, s32 *, 0x10) != 0) {
                                memset(temp_r3 + temp_r28, 0, temp_r27 - temp_r28);
                            }
                            goto block_13;
                        }
                    } else {
block_13:
                        temp_r28_2 = M2C_FIELD(&lbl_803941AC, void **, 0);
                        temp_r31 = temp_r30 * 4;
                        temp_r3_2 = temp_r28_2 + temp_r31;
                        temp_r0 = M2C_FIELD(&lbl_803941AC, s32 *, 4) - temp_r30;
                        if (temp_r0 != 0) {
                            memmove(temp_r3_2 + 4, temp_r3_2, temp_r0 * 4);
                        }
                        M2C_FIELD(temp_r28_2, void **, temp_r31) = sp8;
                        M2C_FIELD(&lbl_803941AC, s32 *, 4) = (s32) (M2C_FIELD(&lbl_803941AC, s32 *, 4) + 1);
                    }
                    M2C_FIELD(sp8, s32 *, 0x200) = 0;
                    fn_802CB514(sp8);
                    temp_r9 = M2C_FIELD(sp8, void **, 0x34);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(sp8 + M2C_FIELD(temp_r9, s16 *, 0x60), 1);
                    ProgressArrow__EnsureActorRegistrationHandle(sp8);
                }
            }
            if (var_r26 != NULL) {
                var_r26 = M2C_FIELD(var_r26, void **, 0x14);
            } else {
                var_r26 = *temp_r22;
            }
        } while (var_r26 != NULL);
    }
    lbl_803DD9A4 = 0;
    lbl_803DD9A0 = lbl_803272FC;
    lbl_803DD9A8 = lbl_80327300;
    return 1;
}

