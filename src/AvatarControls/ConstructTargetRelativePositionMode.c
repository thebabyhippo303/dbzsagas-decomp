/* AvatarControls__ConstructTargetRelativePositionMode @ 0x800A16DC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AvatarControls__ConstructCallbackState();   /* extern */
extern M2C_UNK lbl_80334F70 __attribute__((section(".data")));

void *AvatarControls__ConstructTargetRelativePositionMode(void *arg0, s32 unused, s32 arg2) {
    AvatarControls__ConstructCallbackState();
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80334F70;
    return arg0;
}
