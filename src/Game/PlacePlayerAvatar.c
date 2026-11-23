/* Game__PlacePlayerAvatar @ 0x80021FC8 (size: 0x1E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetHealthImpl(void *, float);
void Avatar__SetPositionImpl(int, int, float);
int CameraBag__IsCurrentNamed(void *, char *);
int String__CompareIgnoreCase(const char *, const char *);
s32 Avatar__ApplyDeferredPosition(s32);             /* extern */
M2C_UNK Camera__RefreshFollowPositionFromActor(s32); /* extern */
M2C_UNK fn_8008E2F8(s32);                           /* extern */
M2C_UNK fn_80126450(s32, s32);                      /* extern */
extern s8 lbl_8030FD24 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DC5B4;

void Game__PlacePlayerAvatar(s32 arg0, s32 arg1) {
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 var_r11;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r3;

    var_r11 = 1;
    if ((s32) M2C_FIELD((lbl_803DC368 + 0x12C), s32 *, 0x248) == 0) {
        var_r11 = 0;
    }
    if (var_r11 != 0) {
        temp_r29 = arg1 * 4;
        temp_r30 = arg0 + ((arg1 * 0xC) + 0x74);
        fn_80126450(temp_r30, arg0 + (temp_r29 + 0x8C));
        M2C_FIELD(lbl_803DC368, s32 *, 0x374) = 0;
        Avatar__SetPositionImpl(*(arg0 + 0x2B0 + temp_r29), temp_r30, *(arg0 + 0x8C + temp_r29));
        if (CameraBag__IsCurrentNamed(lbl_803DC5B4, &lbl_8030FD24) != 0) {
            temp_r31 = lbl_803DC5B4;
            if (&lbl_8030FD24 == NULL) {
                var_r3 = 0;
            } else {
                var_r27 = 0;
                var_r28 = 0;
                var_r29 = 0;
loop_8:
                if (var_r28 < (s32) M2C_FIELD(temp_r31, s32 *, 0)) {
                    if (String__CompareIgnoreCase(&lbl_8030FD24, M2C_FIELD((var_r29 + M2C_FIELD(temp_r31, s32 *, 4)), s8 **, 4)) == 0) {
                        var_r27 = *(var_r29 + M2C_FIELD(temp_r31, s32 *, 4));
                    } else {
                        var_r29 += 8;
                        var_r28 += 1;
                        goto loop_8;
                    }
                }
                var_r3 = var_r27;
            }
            Camera__RefreshFollowPositionFromActor(var_r3);
        }
    } else {
        temp_r30_2 = arg1 * 4;
        temp_r28 = arg0 + 0x2B0;
        if (Avatar__ApplyDeferredPosition(*(temp_r28 + temp_r30_2)) == 0) {
            Avatar__SetPositionImpl(*(temp_r28 + temp_r30_2), arg0 + ((arg1 * 0xC) + 0x74), *(arg0 + 0x8C + temp_r30_2));
        }
        temp_r3 = *(temp_r28 + temp_r30_2);
        Avatar__SetHealthImpl(temp_r3, M2C_FIELD(temp_r3, f32 *, 0x28C));
        fn_8008E2F8(*(temp_r28 + temp_r30_2));
        if (CameraBag__IsCurrentNamed(lbl_803DC5B4, &lbl_8030FD24) != 0) {
            temp_r31_2 = lbl_803DC5B4;
            if (&lbl_8030FD24 == NULL) {
                var_r3_2 = 0;
            } else {
                var_r27_2 = 0;
                var_r28_2 = 0;
                var_r29_2 = 0;
loop_20:
                if (var_r28_2 < (s32) M2C_FIELD(temp_r31_2, s32 *, 0)) {
                    if (String__CompareIgnoreCase(&lbl_8030FD24, M2C_FIELD((var_r29_2 + M2C_FIELD(temp_r31_2, s32 *, 4)), s8 **, 4)) == 0) {
                        var_r27_2 = *(var_r29_2 + M2C_FIELD(temp_r31_2, s32 *, 4));
                    } else {
                        var_r29_2 += 8;
                        var_r28_2 += 1;
                        goto loop_20;
                    }
                }
                var_r3_2 = var_r27_2;
            }
            Camera__RefreshFollowPositionFromActor(var_r3_2);
        }
    }
}

