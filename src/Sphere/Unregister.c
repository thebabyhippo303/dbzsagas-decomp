/* Sphere__Unregister @ 0x8026C0F0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sphere__Unregister @ 0x8026C0F0 (0x7C). ProDG -O2. */
typedef struct SphereNode {
    char pad[396];
    struct SphereNode *next;
    int gap;
    int registered;
} SphereNode;

extern SphereNode *lbl_803DD918;
extern SphereNode *lbl_803DD91C;

void Sphere__Unregister(SphereNode *self) {
    SphereNode *prev;
    if (self->registered == 0)
        return;
    if (lbl_803DD918 == self) {
        if (lbl_803DD91C == self) {
            lbl_803DD91C = 0;
            lbl_803DD918 = 0;
            return;
        }
        lbl_803DD918 = self->next;
        return;
    }
    prev = lbl_803DD918;
    for (;;) {
        if (prev->next == self)
            break;
        prev = prev->next;
        if (prev == 0)
            return;
    }
    if (lbl_803DD91C == self)
        lbl_803DD91C = prev;
    prev->next = self->next;
}
