/* AvatarControls__DeactivateCurrentMode @ 0x800A25C4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VtA { char pad[8]; short adjust; short unused; void (*fn)(void *, int *); } VtA;
typedef struct ObjA { int pad; VtA *vt; } ObjA;
typedef struct VtB { char pad[56]; short adjust; short unused; void (*fn)(void *); } VtB;
typedef struct ObjB { int pad; VtB *vt; } ObjB;
typedef struct Owner { char pad[1976]; ObjA *a; } Owner;
typedef struct Ctl { Owner *owner; int pad; ObjB *b; } Ctl;

void AvatarControls__DeactivateCurrentMode(Ctl *self) {
    int local = 0;
    ObjA *a = self->owner->a;
    a->vt->fn((char *)a + a->vt->adjust, &local);
    {
        ObjB *b = self->b;
        b->vt->fn((char *)b + b->vt->adjust);
    }
}
