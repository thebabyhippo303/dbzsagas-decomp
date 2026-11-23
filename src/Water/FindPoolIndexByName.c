/* Water__FindPoolIndexByName @ 0x802942D8 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Vec { void **data; s32 count; } Vec;
typedef struct Pool { char pad[0x2CC]; char *name; } Pool;
typedef struct Water { Vec *pools; } Water;
int strcmp(const char *, const char *);
s32 Water__FindPoolIndexByName(Water *self, const char *name) {
    s32 i = 0;
    s32 n = self->pools->count;
    if (i < n) {
        do {
            Vec *v = self->pools;
            s32 idx = i;
            Pool **e;
            Pool *p;
            if (i < 0) idx = v->count - 1;
            if (idx >= v->count || v->count == 0) {
                e = 0;
            } else {
                e = (Pool **)v->data + idx;
            }
            p = *e;
            if (p->name != 0 && strcmp(p->name, name) == 0) {
                return i;
            }
            i++;
        } while (i < n);
    }
    return -1;
}
