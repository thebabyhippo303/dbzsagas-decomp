/* VariableContext__FindVariableIndex @ 0x8018E43C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct VEnt { short off; short pad; char *(*fn)(void *); } VEnt;
typedef struct VTab { char pad[0x10]; VEnt e; } VTab;
typedef struct Obj { s32 f0; VTab *vt; } Obj;
typedef struct List { Obj **items; s32 count; } List;
typedef struct Ctx { char pad[0x28]; List *list; } Ctx;

s32 String__CompareIgnoreCase(const char *, const char *);

static inline Obj **ListGet(List *l, s32 i) {
    s32 idx = i;
    if (i < 0) {
        idx = l->count - 1;
    }
    if (idx >= l->count || l->count == 0) {
        return 0;
    }
    return &l->items[idx];
}

s32 VariableContext__FindVariableIndex(Ctx *ctx, const char *name) {
    register s32 i;
    Obj *o;
    i = 0;
    if (i < ctx->list->count) {
        do {
            o = *ListGet(ctx->list, i);
            if (String__CompareIgnoreCase(o->vt->e.fn((char *)o + o->vt->e.off), name) == 0) {
                return i;
            }
            i++;
        } while (i < ctx->list->count);
    }
    return -1;
}
