/* Asset__LoadActorMotion @ 0x8025243C (size: 0x220, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

char * Path__JoinWithExtension(char *, char *, char *, char *);
s32 AnimationTable__Load(void *, void *, void *);
void * AnimScript__LoadThread(void *, s32, void *, void *, s32);
void AnimScript__StartLabel(void *, s32, u32, s32);
void AnimScript__RunThread(void *, s32, s32);
extern s8 lbl_80347DA4 __attribute__((section(".data")));
extern s8 lbl_80347DA8 __attribute__((section(".data")));

s32 Asset__LoadActorMotion(void *arg0, s8 *arg1, void *arg2, s8 *arg3, s8 *arg4, s32 arg5, s8 *arg6, s32 arg7) {
    char sp8[256];
    s32 *var_r9;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r30;
    s32 var_r3;

    var_r30 = 0;
    if (((var_r3 = (s32) arg3) != 0) && ((s32) *arg3 != 0)) {
        M2C_FIELD(arg2, s32 *, 0x168) = 0;
        AnimationTable__Load(Path__JoinWithExtension(&sp8, arg1, arg3, &lbl_80347DA4), arg2, 0);
        var_ctr = 4;
        var_r9 = arg2 + 0x150;
        for (var_ctr = 4; var_ctr != 0; var_ctr--) {
            *var_r9 = 0;
            var_r9 -= 0x14;
        }
        var_r30 = 1;
        if ((s32) M2C_FIELD(arg2, s32 *, 0x168) == 0) {
            var_r30 = 0;
        }
    }
    M2C_FIELD(arg2, s32 *, 0xF0) = 0;
    if ((arg4 != 0) && ((s32) *arg4 != 0)) {
        AnimScript__LoadThread(arg2, 0, Path__JoinWithExtension(&sp8, arg1, arg4, &lbl_80347DA8), (void *)0x26, 1);
        if (arg5 != 0xFFFF) {
            AnimScript__StartLabel(arg2, 0, (u32) arg5, 1);
            AnimScript__RunThread(arg2, 0, 1);
        }
        if ((s32) M2C_FIELD(arg2, s32 *, 0xF0) != 0) {
            var_r30 |= 1;
            var_r0 = 1;
            if (var_r30 == 0) {
                var_r0 = 0;
            }
            var_r30 = var_r0;
        } else {
            s32 t = 1;
            if (var_r30 == 0) {
                t = 0;
            }
            var_r30 = t;
        }
    }
    M2C_FIELD(arg2, s32 *, 0xF4) = 0;
    if ((arg6 != 0) && ((s32) *arg6 != 0)) {
        AnimScript__LoadThread(arg2, 1, Path__JoinWithExtension(&sp8, arg1, arg6, &lbl_80347DA8), (void *)0x26, 1);
        if (arg7 != 0xFFFF) {
            AnimScript__StartLabel(arg2, 1, (u32) arg7, 1);
            AnimScript__RunThread(arg2, 1, 1);
        }
        if ((s32) M2C_FIELD(arg2, s32 *, 0xF4) != 0) {
            var_r30 |= 1;
            var_r0_2 = 1;
            if (var_r30 == 0) {
                var_r0_2 = 0;
            }
            var_r30 = var_r0_2;
        } else {
            s32 t2 = 1;
            if (var_r30 == 0) {
                t2 = 0;
            }
            var_r30 = t2;
        }
    }
    return var_r30;
}

