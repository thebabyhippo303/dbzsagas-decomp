/* Bone__ResetTransform @ 0x8023C284 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Bone Bone;

typedef struct {
    char pad[0x18];
    int dirty;
} BoneOwner;

struct Bone {
    char pad[0x40];
    float m[16];
    char pad2[200 - 0x40 - 64];
    Bone *child;
    char pad3[4];
    BoneOwner *owner;
    char pad4[8];
    unsigned int flags;
};

extern float lbl_80346F6C __attribute__((section(".data")));
extern float lbl_80346F70 __attribute__((section(".data")));
extern void Bone__MarkHierarchyDirty(Bone *bone);

void Bone__ResetTransform(Bone *bone) {
    if (bone != 0 && (bone->flags & 0x00400000) == 0) {
        float one = lbl_80346F6C;
        float zero;
        volatile float *m = bone->m;

        m[0] = one;
        zero = lbl_80346F70;
        m[15] = one;
        m[14] = zero;
        m[1] = zero;
        m[2] = zero;
        m[3] = zero;
        m[4] = zero;
        m[5] = one;
        m[6] = zero;
        m[7] = zero;
        m[8] = zero;
        m[9] = zero;
        m[10] = one;
        m[11] = zero;
        m[12] = zero;
        m[13] = zero;

        {
            unsigned int flags = bone->flags;
            unsigned int updated = flags | 0x00400000;
            bone->flags = updated;
            if ((updated & 0x00800000) == 0) {
                Bone *child = bone->child;
                bone->flags = flags | 0x00C00000;
                if (child != 0) {
                    Bone__MarkHierarchyDirty(child);
                    bone->owner->dirty = 1;
                }
            }
        }
    }
}
