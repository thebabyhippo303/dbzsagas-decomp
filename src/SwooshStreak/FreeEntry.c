/* SwooshStreak__FreeEntry @ 0x802336C0 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct VEnt { short off; short pad; void (*fn)(void *, s32); } VEnt;
typedef struct VTab { char pad[8]; VEnt e; } VTab;
typedef struct Obj { char pad[0x18]; VTab *vt; } Obj;
typedef struct Entry {
    s32 f0; char pad0[0x34 - 4]; void *buf;
    char pad1[0x44 - 0x38]; Obj *obj; void *res;
} Entry;

void SwooshStreak__DestroyResource(void *, s32);
s32 memFree(void *);
void SList__Remove(void *, void *);
void SList__PushFront(void *, void *);
extern char lbl_803ADE7C[] __attribute__((section(".data")));
extern char lbl_803ADE88[] __attribute__((section(".data")));

void SwooshStreak__FreeEntry(Entry *self) {
    Obj *o = self->obj;
    void *r;
    if (o != 0) {
        o->vt->e.fn((char *)o + o->vt->e.off, 3);
    }
    r = self->res;
    self->obj = 0;
    if (r != 0) {
        SwooshStreak__DestroyResource(r, 3);
    }
    self->res = 0;
    memFree(self->buf);
    self->buf = 0;
    self->f0 = 0;
    SList__Remove(lbl_803ADE88, self);
    SList__PushFront(lbl_803ADE7C, self);
}
