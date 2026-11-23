/* SuspensionBridge__UpdatePhysicsAndBoneTransform @ 0x800FBE2C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Bone__UpdateTransform(s32);                 /* extern */
M2C_UNK SuspensionBridge__UpdatePhysics();          /* extern */
M2C_UNK fn_802C9B8C(void *);                        /* extern */

void SuspensionBridge__UpdatePhysicsAndBoneTransform(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x770) < 0) {
        SuspensionBridge__UpdatePhysics();
        fn_802C9B8C(arg0);
        Bone__UpdateTransform(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0xC));
    }
}
