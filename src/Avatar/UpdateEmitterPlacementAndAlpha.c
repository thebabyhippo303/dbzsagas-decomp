/* Avatar__UpdateEmitterPlacementAndAlpha @ 0x80095860 (size: 0x1B0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Attacher__GetEmitter(u32);
void Emitter__SetAlpha(void *, float);
void fn_802244AC(void *, float *);
float sqrtf(float);
extern f32 lbl_8031F98C __attribute__((section(".data")));
extern f32 lbl_8031F990 __attribute__((section(".data")));
extern f32 lbl_8031F994 __attribute__((section(".data")));
extern f32 lbl_8031F998 __attribute__((section(".data")));

void Avatar__UpdateEmitterPlacementAndAlpha(void *arg0, s32 arg1, s32 arg2) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 var_f0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r25;
    s32 var_r29;
    void *temp_r10;
    void *temp_r26;

    temp_f29 = lbl_8031F98C;
    temp_f30 = lbl_8031F990;
    temp_r26 = arg0 + 0x68;
    var_r29 = 0;
    var_r25 = 0x20;
    do {
        temp_r3 = *(var_r29 + arg1);
        if ((temp_r3 != 0) && ((s32) *(var_r29 + arg2) != 0)) {
            temp_r3_2 = Attacher__GetEmitter((u32) temp_r3);
            if (temp_r3_2 != 0) {
                temp_f1 = M2C_FIELD(arg0, f32 *, 0x68);
                temp_f0 = M2C_FIELD(temp_r26, f32 *, 4);
                temp_f13 = M2C_FIELD(temp_r26, f32 *, 8);
                temp_f1_2 = temp_f1 * temp_f1;
                sp8 = temp_f1_2;
                spC = temp_f0 * temp_f0;
                sp10 = temp_f13 * temp_f13;
                temp_f1_3 = sqrtf(temp_f1_2 + M2C_FIELD(&sp8, f32 *, 4) + M2C_FIELD(&sp8, f32 *, 8));
                var_f0 = lbl_8031F990;
                temp_r10 = arg0 + 0x68;
                if (!(temp_f1_3 < var_f0)) {
                    var_f0 = temp_f1_3;
                    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
                    if (0 == 0) {
                        var_f0 = lbl_8031F994;
                    }
                }
                temp_f31 = lbl_8031F998;
                temp_f12 = M2C_FIELD(temp_r10, f32 *, 8);
                temp_f11 = temp_f31 / temp_f29;
                temp_f13_2 = M2C_FIELD(arg0, f32 *, 0x68);
                temp_f0_2 = M2C_FIELD(temp_r10, f32 *, 4);
                sp18 = temp_f13_2;
                sp1C = temp_f0_2;
                sp20 = temp_f12;
                temp_f13_3 = temp_f13_2 * temp_f11;
                sp8 = temp_f13_3;
                spC = temp_f0_2 * temp_f11;
                sp10 = temp_f12 * temp_f11;
                sp18 = -temp_f13_3;
                sp1C = temp_f29 - var_f0;
                sp20 = -M2C_FIELD(&sp8, f32 *, 8);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x71C) == 3) {
                    sp18 = temp_f30;
                    M2C_FIELD(&sp18, f32 *, 4) = temp_f31;
                    M2C_FIELD(&sp18, f32 *, 8) = temp_f30;
                }
                fn_802244AC((void *) temp_r3_2, &sp18);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x4EC) != 0) {
                    Emitter__SetAlpha((void *) temp_r3_2, lbl_8031F990);
                } else {
                    Emitter__SetAlpha((void *) temp_r3_2, temp_f31);
                }
            }
        }
        var_r29 += 4;
        var_r25 -= 1;
    } while (var_r25 != 0);
}
