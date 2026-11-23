/* Avatar__BuildFireShieldAttachers @ 0x80095690 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Attacher__Destroy(void *);
s32 Attacher__GetEmitter(u32);
s32 Avatar__CreateAttacherImpl(void *, s8 *, s32, s32);
int Bone__IsRenderable(void *);
int Emitter__SetScale(unsigned int, int, float);
void fn_802244AC(void *, float *);
void *Avatar__GetFireShieldAttacherBoneName();      /* extern */
f32 *fn_801DCE10(s32, s32);                         /* extern */
extern f32 lbl_8031F980 __attribute__((section(".data")));
extern f32 lbl_8031F984 __attribute__((section(".data")));
extern f32 lbl_8031F988 __attribute__((section(".data")));

void Avatar__BuildFireShieldAttachers(void *arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    f32 sp8;
    f32 *temp_r3_2;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;
    s32 var_r31_2;
    void *temp_r3;
    void *var_r28;

    var_r28 = Avatar__GetFireShieldAttacherBoneName();
    if ((arg1 <= 0x1E) && (var_r31 = arg1 + 1, ((var_r31 > 0x1F) == 0))) {
loop_3:
        if (!(*arg2 & (1 << var_r31))) {
            var_r31 += 1;
            if (var_r31 > 0x1F) {
                goto block_5;
            }
            goto loop_3;
        }
    } else {
block_5:
        var_r30 = 0;
        *arg2 |= 1 << arg1;
        var_r31_2 = 0x20;
        do {
            temp_r3 = *(var_r30 + arg3);
            if (temp_r3 != NULL) {
                Attacher__Destroy(temp_r3);
                *(var_r30 + arg3) = 0;
            }
            var_r30 += 4;
            var_r31_2 -= 1;
        } while (var_r31_2 != 0);
        temp_f29 = lbl_8031F980;
        temp_f30 = lbl_8031F988;
        var_r29 = 0;
        do {
            temp_r3_2 = fn_801DCE10(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0xC8), M2C_FIELD(var_r28, s32 *, 0));
            if ((Bone__IsRenderable(temp_r3_2) != 0) && !(fabs(*temp_r3_2) < temp_f29)) {
                temp_r3_3 = Avatar__CreateAttacherImpl(arg0 + 0x684, M2C_FIELD(var_r28, s8 **, 8), (s32) arg0, (s32) temp_r3_2);
                *(var_r29 + arg3) = temp_r3_3;
                if (temp_r3_3 != 0) {
                    temp_r3_4 = Attacher__GetEmitter((u32) temp_r3_3);
                    if ((temp_r3_4 != 0) && (temp_f31 = lbl_8031F984, M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */), (0 == 0))) {
                        Emitter__SetScale((u32) temp_r3_4, 0, M2C_FIELD(var_r28, f32 *, 4));
                        sp8 = temp_f31;
                        M2C_FIELD(&sp8, f32 *, 8) = temp_f31;
                        M2C_FIELD(&sp8, f32 *, 4) = temp_f30;
                        fn_802244AC((void *) temp_r3_4, &sp8);
                        *(var_r29 + arg4) = 1;
                    } else {
                        *(var_r29 + arg4) = 0;
                    }
                }
            }
            temp_r0 = M2C_FIELD(var_r28, s32 *, 0xC);
            var_r28 += 0xC;
            var_r29 += 4;
        } while (temp_r0 != 0);
    }
}
