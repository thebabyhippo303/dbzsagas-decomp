/* BoneChain__HasNameInChain @ 0x801DFD9C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
int String__CompareIgnoreCase(const char *, const char *);
typedef struct Vt { char pad[48]; short adjust; short unused; int (*fn)(void *, const char *); } Vt;
typedef struct Parent { char pad[52]; Vt *vt; } Parent;
typedef struct BC { Parent *parent; const char *name; } BC;
int BoneChain__HasNameInChain(BC *self, const char *name) { Parent *p;
 if (String__CompareIgnoreCase(self->name, name) == 0) return 1;
 p = self->parent;
 if (p != 0) { if (p->vt->fn((char *)p + p->vt->adjust, name) != 0) return 1; }
 return 0; }