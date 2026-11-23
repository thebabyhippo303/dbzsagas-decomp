/* Camera__GetActorHeadOffset @ 0x800B9B70 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Actor__FindBoneIdByName(void *, unsigned char *, const char *);
void fn_801DD1FC(float *, void *, int);
extern u8 lbl_8031E9D0 __attribute__((section(".data")));
extern f32 lbl_80321578 __attribute__((section(".data")));
extern f32 lbl_8032157C __attribute__((section(".data")));

void *Camera__GetActorHeadOffset(void *arg0, void *arg1, void *arg2) {
    volatile f32 sp30[3];
    volatile f32 sp20[3];
    s8 sp18;
    f32 sp8;
    volatile s32 frame_pad[4];

    sp8 = lbl_80321578;
    M2C_FIELD(&sp8, f32 *, 4) = (f32) lbl_8032157C;
    M2C_FIELD(&sp8, f32 *, 8) = (f32) lbl_80321578;
    if ((arg2 != NULL) && (Actor__FindBoneIdByName(arg2, &lbl_8031E9D0, &sp18) != 0)) {
        fn_801DD1FC((f32 *)sp30, arg2, (s32) (u8) sp18);
        sp20[0] = sp30[0] - M2C_FIELD(arg2, f32 *, 0x38);
        sp20[1] = sp30[1] - M2C_FIELD(arg2, f32 *, 0x3C);
        sp20[2] = sp30[2] - M2C_FIELD(arg2, f32 *, 0x40);
        sp8 = sp20[0];
        M2C_FIELD(&sp8, f32 *, 4) = sp20[1];
        M2C_FIELD(&sp8, f32 *, 8) = sp20[2];
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&sp8, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&sp8, f32 *, 8);
    return arg0;
}
