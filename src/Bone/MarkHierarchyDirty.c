/* Bone__MarkHierarchyDirty @ 0x8023BCA8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Bone__MarkHierarchyDirty @ 0x8023BCA8 (0x5C). ProDG -O2. */
typedef struct Bone Bone;

struct Bone {
    char pad[200];
    Bone *child;
    Bone *next;
    char pad2[12];
    unsigned int flags;
};

void Bone__MarkHierarchyDirty(Bone *bone) {
    unsigned int flags = bone->flags;
    if ((flags & 0x00800000) == 0) {
        Bone *child = bone->child;
        bone->flags = flags | 0x00800000;
        if (child != 0)
            Bone__MarkHierarchyDirty(child);
    }
    if (bone->next != 0)
        Bone__MarkHierarchyDirty(bone->next);
}
