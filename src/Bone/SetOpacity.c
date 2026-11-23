/* Bone__SetOpacity @ 0x8023BDF8 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
static const char pool_pad[0x6F40] = {1};
extern float lbl_80346F38 __attribute__((section(".rodata")));
void Bone__MarkHierarchyDirty(void *);
typedef struct Link { char pad[24]; int dirty; } Link;
typedef struct Bone {
    char pad[200];
    void *parent;
    char pad2[4];
    Link *link;
    char pad3[8];
    union { unsigned char opacity; unsigned flags; } u;
} Bone;

void Bone__SetOpacity(Bone *b, float opacity) {
    unsigned v = (unsigned)(opacity * lbl_80346F38);
    if (v > 255) {
        v = 255;
    }
    if (b != 0 && b->u.opacity != v) {
        b->u.opacity = v;
        if ((b->u.flags & 0x800000) == 0) {
            b->u.flags |= 0x800000;
            if (b->parent != 0) {
                Bone__MarkHierarchyDirty(b->parent);
                b->link->dirty = 1;
            }
        }
    }
}
