/* Skeleton__GetBoneWorldRotation @ 0x8023DC74 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Skeleton__GetBoneById(void *, s32);
void *Bone__EnsureWorldTransform(void *);

void Skeleton__GetBoneWorldRotation(void *arg0, s32 arg1, f32 *arg2) {
    void *bone;
    void *mtx0;
    f32 *mtx;

    bone = Skeleton__GetBoneById(arg0, arg1);
    if (bone != NULL) {
        mtx0 = M2C_FIELD(bone, void **, 0xC0);
        if (mtx0 == NULL) {
            mtx0 = bone;
        }
        mtx = (f32 *)Bone__EnsureWorldTransform(mtx0);
        arg2[0] = mtx[0];
        arg2[1] = mtx[1];
        arg2[2] = mtx[2];
        arg2[3] = mtx[3];
        arg2[4] = mtx[4];
        arg2[5] = mtx[5];
        arg2[6] = mtx[6];
        arg2[7] = mtx[7];
        arg2[8] = mtx[8];
        arg2[9] = mtx[9];
        arg2[10] = mtx[10];
        arg2[11] = mtx[11];
        arg2[12] = mtx[12];
        arg2[13] = mtx[13];
        arg2[14] = mtx[14];
        arg2[15] = mtx[15];
    }
}
