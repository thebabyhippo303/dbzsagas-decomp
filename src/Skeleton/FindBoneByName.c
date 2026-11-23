/* Skeleton__FindBoneByName @ 0x8023DA8C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned short u16;
typedef struct BoneDesc { char pad[176]; char name[16]; } BoneDesc;
typedef struct Bone { char pad[216]; BoneDesc *desc; char pad2[224 - 220]; } Bone;
typedef struct Skeleton { u16 count; char pad[14]; Bone *bones; } Skeleton;

s32 String__CompareNIgnoreCase(const char *, const char *, s32);

s32 Skeleton__FindBoneByName(Skeleton *skel, Bone **out, const char *name) {
    s32 i;
    if (skel != 0) {
        *out = skel->bones;
        for (i = 0; i < skel->count; i++) {
            if (String__CompareNIgnoreCase(name, (*out)->desc->name, 16) == 0) {
                return 1;
            }
            *out = *out + 1;
        }
    }
    *out = 0;
    return 0;
}
