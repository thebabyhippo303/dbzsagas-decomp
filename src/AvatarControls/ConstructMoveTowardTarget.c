/* AvatarControls__ConstructMoveTowardTarget @ 0x80089BE8 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AvatarControls__ConstructBase(void *, int, int);
extern f32 lbl_8031F530 __attribute__((section(".data")));
extern M2C_UNK lbl_803352F8 __attribute__((section(".data")));
extern M2C_UNK lbl_803353E8 __attribute__((section(".data")));
extern M2C_UNK lbl_80335408 __attribute__((section(".data")));

void *AvatarControls__ConstructMoveTowardTarget(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r8;

    AvatarControls__ConstructBase(arg0, arg1, arg2);
    temp_r8 = arg0 + 0x88;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_803352F8;
    M2C_FIELD(temp_r8, M2C_UNK **, 4) = &lbl_80335408;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(temp_r8, M2C_UNK **, 4) = &lbl_803353E8;
    M2C_FIELD(temp_r8, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r8, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r8, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_8031F530;
    return arg0;
}
