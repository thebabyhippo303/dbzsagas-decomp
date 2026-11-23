/* MainMenu__DestroyLetterAnimationChildList @ 0x80130C38 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct PtrVec { void **data; s32 count; s32 cap; s32 pad; s32 flag; } PtrVec;
typedef struct Letters { char pad0[0x19C]; void *vt; char pad1[0x1A4 - 0x1A0]; PtrVec vec; } Letters;

void Mem__Delete(void *);
void *memset(void *, int, unsigned long);
void Sphere__DestroyCore(void *, s32);
extern char lbl_80335F08[] __attribute__((section(".data")));

void MainMenu__DestroyLetterAnimationChildList(Letters *self, s32 flags) {
    PtrVec *v = &self->vec;
    PtrVec *w;
    s32 i;
    s32 off;
    s32 z;
    self->vt = lbl_80335F08;
    if (v->count != 0) {
        w = v;
        i = 0;
        if (i < v->count) {
            off = 0;
            do {
                i++;
                Mem__Delete(*(void **)((char *)self->vec.data + off));
                off += 4;
            } while (i < w->count);
        }
    }
    v = &self->vec;
    w = v;
    if (v->flag != 0 && self->vec.data != 0) {
        memset(self->vec.data, 0, w->cap * 4);
    }
    z = 0;
    v->count = z;
    if (self->vec.data != 0) {
        Mem__Delete(self->vec.data);
    }
    w->cap = z;
    w->count = z;
    self->vec.data = 0;
    Sphere__DestroyCore(self, flags);
}
