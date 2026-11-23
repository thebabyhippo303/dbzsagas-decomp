/* AIController__UpdateAvatarMovementSound @ 0x80089B78 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_800AC4A0(s32);                           /* extern */

void AIController__UpdateAvatarMovementSound(void *arg0) {
    fn_800AC4A0(M2C_FIELD(arg0, s32 *, 0x7C));
}
