/* Bone__MarkTransformDirty @ 0x8023BC30 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Bone__MarkTransformDirty @ 0x8023BC30 (0x78). ProDG -O2. */
typedef struct Bone Bone;

typedef struct {
    char pad[0x18];
    int dirty;
} BoneOwner;

struct Bone {
    char pad[200];
    Bone *child;
    char pad2[4];
    BoneOwner *owner;
    char pad3[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x7C];
    int count;
} BoneStats;

extern BoneStats lbl_803AD910;
extern void Bone__MarkHierarchyDirty(Bone *bone);

void Bone__MarkTransformDirty(Bone *bone) {
    if (bone != 0) {
        unsigned int flags = bone->flags;
        bone->flags = flags & ~0x00400000;
        if ((flags & 0x00800000) == 0) {
            Bone *child = bone->child;
            bone->flags = (flags & ~0x00400000) | 0x00800000;
            if (child != 0)
                Bone__MarkHierarchyDirty(child);
        }
        bone->owner->dirty = 1;
    }
    lbl_803AD910.count++;
}
