/* CCameraStick__Update @ 0x800CD6CC (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int CCameraAvatar__GetActorCount(void *);
int CCameraAvatar__HasWideFramingActor(void *);
s32 CCameraAvatar__AreActorsInFrame(void *, f32);   /* extern */
M2C_UNK CCameraAvatar__ComputeAverageActorPosition(f32 *, void *); /* extern */
s32 CCameraAvatar__PlayerOnScreenEdge(void *);      /* extern */
M2C_UNK fn_800BAEF4();                              /* extern */
s32 fn_800BB8CC(void *);                            /* extern */
s32 fn_800CD8CC(void *, s32, f32 *, f32 *);         /* extern */
extern f32 lbl_80321C58 __attribute__((section(".data")));
extern f32 lbl_80321C5C __attribute__((section(".data")));
extern f32 lbl_80321C60 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void CCameraStick__Update(void *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f9;
    f32 var_f31;
    s32 temp_r3;
    void *temp_r29;
    void *temp_r9;

    fn_800BAEF4();
    var_f31 = M2C_FIELD(arg0, f32 *, 0x84);
    if (CCameraAvatar__AreActorsInFrame(arg0, lbl_80321C58) != 0) {
        var_f31 = M2C_FIELD(arg0, f32 *, 0x44);
    } else if (CCameraAvatar__AreActorsInFrame(arg0, lbl_80321C5C) == 0) {
        var_f31 = M2C_FIELD(arg0, f32 *, 0x40);
    }
    if (fn_800BB8CC(arg0) == 0) {
        if (CCameraAvatar__GetActorCount(arg0) == 1) {
            var_f31 = (M2C_FIELD(arg0, f32 *, 0x44) + M2C_FIELD(arg0, f32 *, 0x40)) * lbl_80321C60;
        } else {
            var_f31 = M2C_FIELD(arg0, f32 *, 0x40);
        }
    }
    if (CCameraAvatar__HasWideFramingActor(arg0) != 0) {
        var_f31 = M2C_FIELD(arg0, f32 *, 0x40);
    }
    temp_f13 = M2C_FIELD(arg0, f32 *, 0x84);
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) (((var_f31 - temp_f13) * lbl_803A35BC) + temp_f13);
    temp_r29 = arg0 + 0xC;
    CCameraAvatar__ComputeAverageActorPosition(&sp8, arg0);
    if (CCameraAvatar__GetActorCount(arg0) == 2) {
        temp_r3 = CCameraAvatar__PlayerOnScreenEdge(arg0);
        if (temp_r3 != 0) {
            sp18 = M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(temp_r29, f32 *, 4);
            M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(temp_r29, f32 *, 8);
            sp28 = sp8;
            M2C_FIELD(&sp28, f32 *, 4) = (f32) M2C_FIELD(&sp8, f32 *, 4);
            M2C_FIELD(&sp28, f32 *, 8) = (f32) M2C_FIELD(&sp8, f32 *, 8);
            if (fn_800CD8CC(arg0, temp_r3, &sp18, &sp28) != 0) {
                sp8 = M2C_FIELD(arg0, f32 *, 0xC);
                M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r29, f32 *, 4);
                M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r29, f32 *, 8);
            }
        }
    }
    temp_r9 = arg0 + 0x78;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x84);
    temp_f9 = M2C_FIELD(temp_r9, f32 *, 8) * temp_f0;
    temp_f10 = M2C_FIELD(temp_r9, f32 *, 4) * temp_f0;
    sp40 = temp_f9;
    temp_f11 = M2C_FIELD(arg0, f32 *, 0x78) * temp_f0;
    sp3C = temp_f10;
    sp38 = temp_f11;
    sp18 = sp8 + temp_f11;
    sp1C = M2C_FIELD(&sp8, f32 *, 4) + temp_f10;
    sp20 = M2C_FIELD(&sp8, f32 *, 8) + temp_f9;
    M2C_FIELD(arg0, f32 *, 0xC) = sp8;
    M2C_FIELD(temp_r29, f32 *, 8) = (f32) M2C_FIELD(&sp8, f32 *, 8);
    M2C_FIELD(temp_r29, f32 *, 4) = (f32) M2C_FIELD(&sp8, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0) = sp18;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
}
