/* AI__UpdateAnchorCandidateAvailability @ 0x80062EEC (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Avatar__CountOtherActorsInActionState(s32, s32, s32);
extern f32 lbl_8031E4C8 __attribute__((section(".data")));

void AI__UpdateAnchorCandidateAvailability(void *arg0) {
    s32 temp_r30;
    s32 var_r0;
    s32 var_r30;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;

    var_r30 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (var_r30) {                              /* switch 1; irregular */
    case 5:                                         /* switch 1 */
        var_r0 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        case 1:                                     /* switch 4 */
block_38:
            var_r0 = 0;
        }
block_39:
        M2C_FIELD(arg0, s32 *, 0x508) = var_r0;
        return;
    case 1:                                         /* switch 1 */
        var_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
        switch (var_r0) {                           /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_r11 = M2C_FIELD(arg0, void **, 0x390);
            if (!((M2C_FIELD(temp_r11, f32 *, 0x288) / M2C_FIELD(temp_r11, f32 *, 0x28C)) > lbl_8031E4C8)) {
                goto block_39;
            }
        case 1:                                     /* switch 2 */
block_33:
            M2C_FIELD(arg0, s32 *, 0x508) = var_r30;
            return;
        case 2:                                     /* switch 2 */
            if (Avatar__CountOtherActorsInActionState((s32) M2C_FIELD(arg0, void **, 0x390), 1, -1) <= 1) {
                goto block_38;
            }
            goto block_33;
        case 3:                                     /* switch 2 */
            if (Avatar__CountOtherActorsInActionState((s32) M2C_FIELD(arg0, void **, 0x390), 1, 3) != 0) {
                goto block_38;
            }
            goto block_33;
        }
        break;
    case 0:                                         /* switch 1 */
        var_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
        switch (var_r0) {                           /* switch 3; irregular */
        case 4:                                     /* switch 3 */
            var_r0 = 1;
            goto block_39;
        case 0:                                     /* switch 3 */
            if (Avatar__CountOtherActorsInActionState((s32) M2C_FIELD(arg0, void **, 0x390), 0, 4) == 0) {
                var_r0 = 1;
                goto block_39;
            }
            goto block_33;
        case 2:                                     /* switch 3 */
            temp_r30 = Avatar__CountOtherActorsInActionState((s32) M2C_FIELD(arg0, void **, 0x390), 0, 4);
            if (Avatar__CountOtherActorsInActionState((s32) M2C_FIELD(arg0, void **, 0x390), 0, 0) == 0) {
                var_r0 = 1;
                if (temp_r30 != 0) {
                    goto block_38;
                }
            } else {
                goto block_38;
            }
            goto block_39;
        case 1:                                     /* switch 3 */
            temp_r11_2 = M2C_FIELD(arg0, void **, 0x390);
            if (!((M2C_FIELD(temp_r11_2, f32 *, 0x288) / M2C_FIELD(temp_r11_2, f32 *, 0x28C)) > lbl_8031E4C8)) {
                goto block_33;
            }
            goto block_39;
        case 3:                                     /* switch 3 */
            var_r0 = 1;
            goto block_39;
        }
        break;
    case 2:                                         /* switch 1 */
        var_r30 = M2C_FIELD(arg0, s32 *, 0xCC);
        switch (var_r30) {                          /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            if (Avatar__CountOtherActorsInActionState((s32) M2C_FIELD(arg0, void **, 0x390), 2, 0) > 0) {
                var_r0 = 1;
                goto block_39;
            }
            goto block_33;
        case 3:                                     /* switch 4 */
            temp_r11_3 = M2C_FIELD(arg0, void **, 0x390);
            var_r0 = 1;
            if (!((M2C_FIELD(temp_r11_3, f32 *, 0x288) / M2C_FIELD(temp_r11_3, f32 *, 0x28C)) > lbl_8031E4C8)) {
                goto block_38;
            }
            goto block_39;
        }
        break;
    }
}
