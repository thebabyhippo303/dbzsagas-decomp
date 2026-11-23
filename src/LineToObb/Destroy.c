/* LineToObb__Destroy @ 0x801D3E54 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Mem__Delete(void *);
extern char lbl_80342198[] __attribute__((section(".data")));
extern char lbl_80342350[] __attribute__((section(".data")));
extern int lbl_803DE570 __attribute__((section(".sdata")));

typedef struct Target {
    char pad0[28];
    int flags;
    float x;
    float y;
    float z;
    char pad1[44 - 40 - 4];
    void *owner;
    int active;
} Target;

typedef struct LineToObb {
    char pad0[28];
    char *vtable;
    char pad1[36 - 32];
    Target *target;
    char pad2[124 - 40];
    int enabled;
    void *next;
    float value;
} LineToObb;

void LineToObb__Destroy(LineToObb *self, int flags) {
    self->vtable = lbl_80342198;
    if (self->enabled != 0) {
        Target *t = self->target;
        void *next = self->next;
        float v = self->value;
        if (t->active != 0 && (void *)self == t->owner) {
            unsigned m;
            t->owner = next;
            m = t->flags & lbl_803DE570;
            switch (m) {
            case 0x10:
                t->y = v;
                break;
            case 0x20:
                t->x = v;
                break;
            case 0x30:
                t->z = v;
                break;
            }
        }
    }
    self->vtable = lbl_80342350;
    if (flags & 1) {
        Mem__Delete(self);
    }
}
