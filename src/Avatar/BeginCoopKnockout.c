/* Avatar__BeginCoopKnockout @ 0x800B8F3C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK AvatarControls__StartCoopKnockoutAnimation(s32); /* extern */

s32 Avatar__BeginCoopKnockout(void *arg0) {
    s32 temp_r30;

    temp_r30 = arg0 + 8;
    M2C_FIELD(arg0, s32 *, 0x88) = 1;
    AvatarControls__StartCoopKnockoutAnimation(temp_r30);
    return temp_r30;
}
