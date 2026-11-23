/* AIController__UpdateAvatarMovementAnimationMotionConstraints @ 0x800B621C (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AvatarMovement__UpdateAnimationMotionConstraints(char *);
void AIController__UpdateAvatarMovementAnimationMotionConstraints(void *arg0) {
    AvatarMovement__UpdateAnimationMotionConstraints(M2C_FIELD(arg0, s8 **, 0x7C));
}
