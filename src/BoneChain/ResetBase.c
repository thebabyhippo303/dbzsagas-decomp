/* BoneChain__ResetBase @ 0x801DFE78 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Bone__IsRenderable(void *);
M2C_UNK BoneChain__ApplyRootTransform(void *);      /* extern */
M2C_UNK BoneChain__SnapToAnimatedPose(void *);      /* extern */

void BoneChain__ResetBase(void *arg0) {
    if (Bone__IsRenderable(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x34)) != 0) {
        BoneChain__SnapToAnimatedPose(arg0);
        BoneChain__ApplyRootTransform(arg0);
    }
}
