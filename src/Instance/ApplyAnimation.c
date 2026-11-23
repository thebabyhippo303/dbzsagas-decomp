/* Instance__ApplyAnimation @ 0x8023F4A0 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { void *f0; void *f4; } BoneEnt;
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Instance__BindAnimationTracks(void *, void *, s32, u32);
void Animation__SampleToMatrix(void *, void *, void *, s32, s32, s32);
void Bone__MarkTransformDirty(void *);
void Bone__ResetTransform(void *);
void Instance__ApplyAnimation(void *arg0, void *arg1, s32 arg2, s32 arg3, u32 arg4) {
s32 t3 = arg3;
void *t1 = arg1;
u32 t4 = arg4;
s32 t2 = arg2;
void *bone;
void *anim;
Instance__BindAnimationTracks(arg0, t1, t3, t4);
bone = ((BoneEnt *)((void **)((char *)t1 + 20))[0])[t3].f4;
if (bone == NULL) {
return;
}
do {
anim = M2C_FIELD(bone, void **, 212);
if (anim != NULL) {
Animation__SampleToMatrix(anim, bone, (char *)bone + 64, t2, (t4 >> 4) & 1, 0);
Bone__MarkTransformDirty(bone);
} else {
Bone__ResetTransform(bone);
}
bone = M2C_FIELD(bone, void **, 196);
} while (bone != NULL);
}
