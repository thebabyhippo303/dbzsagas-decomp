/* Instance__BindAnimationTracks @ 0x8023ED00 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
char *Instance__GetMirroredBoneName(char *, void *);
void *AnimationData__FindTrack(void *, void *);
void Bone__ComputeRetargetMatrix(void *, void *);
void Instance__BindAnimationTracks(void *arg0, void *arg1, s32 arg2, u32 arg3) {
    void *base;
    char *ptr;
    u32 id;
    void *bone;
    char *name;
    void *track;
    void *base2;
    u32 id2;
    base = M2C_FIELD(arg1, void **, 0x14);
    ptr = (char *)(arg2 * 8 + (s32)base);
    id = (u32)arg0;
    if (arg3 & 16) {
        id = (u32)arg0 | 1;
    }
    if (M2C_FIELD(ptr, u32 *, 0) != id) {
        bone = M2C_FIELD(ptr, void **, 4);
        if (bone != 0) {
            do {
                if (arg3 & 16) {
                    name = Instance__GetMirroredBoneName((char *)M2C_FIELD(bone, void **, 0xD8) + 0xB0, M2C_FIELD(arg1, void **, 8));
                } else {
                    name = (char *)M2C_FIELD(bone, void **, 0xD8) + 0xB0;
                }
                track = AnimationData__FindTrack(arg0, name);
                M2C_FIELD(bone, void **, 0xD4) = track;
                if (track != 0) {
                    Bone__ComputeRetargetMatrix(bone, (char *)M2C_FIELD(track, void **, 4) + 20);
                }
                bone = M2C_FIELD(bone, void **, 0xC4);
            } while (bone != 0);
        }
        base2 = M2C_FIELD(arg1, void **, 0x14);
        id2 = (u32)arg0;
        if (arg3 & 16) {
            id2 = (u32)arg0 | 1;
        }
        M2C_FIELD((char *)base2 + arg2 * 8, u32 *, 0) = id2;
    }
}
