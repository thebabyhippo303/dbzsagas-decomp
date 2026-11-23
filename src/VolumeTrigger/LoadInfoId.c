/* VolumeTrigger__LoadInfoId @ 0x800FE9F0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_802B2FB4(void *);
void fn_802B2FB8(void *, char *);
int fn_802B2FBC(void *, char *, int);
extern s8 lbl_80324848 __attribute__((section(".data")));
extern s8 lbl_803248A8 __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));

void VolumeTrigger__LoadPathActionId(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x26C) != 0) {
        fn_802B2FB4(&lbl_803BEFC0);
        fn_802B2FB8(&lbl_803BEFC0, &lbl_80324848);
        M2C_FIELD(arg0, s32 *, 0x484) = fn_802B2FBC(&lbl_803BEFC0, &lbl_803248A8, (s32) &lbl_803248A8);
    }
}
