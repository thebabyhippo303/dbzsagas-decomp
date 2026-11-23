/* VariableContext__Destroy @ 0x8018DFEC (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void Mem__DeleteArray(void *);
void * memset(void *, int, u32);
typedef struct VList { void **data; u32 count; s32 cap; s32 f0C; s32 flag; } VList;
typedef struct VIface { char pad[8]; s16 off; s16 pad2; void (*dtor)(void *, s32); } VIface;
typedef struct VObj { s32 pad; VIface *vt; } VObj;
typedef struct VSub { VList *list; s32 f2C; } VSub;
typedef struct VCtx { char pad[0x24]; void *f24; VSub sub; void **f30; } VCtx;

void VariableContext__Destroy(VCtx *arg0, s32 arg1) {
    void **t;
    VList *l;
    VList *l2;
    VList *il;
    VObj *o;
    VObj **slot;
    s32 i;
    s32 idx;
    u32 n;
    s32 cnt;
    VSub *sub;

    if (arg0->f24 != NULL) {
        Mem__DeleteArray(arg0->f24);
    }
    t = arg0->f30;
    if (t != NULL) {
        if (*t != NULL) {
            Mem__Delete(*t);
        }
        Mem__Delete(t);
    }
    sub = &arg0->sub;
    if (sub->f2C != 0) {
        n = arg0->sub.list->count;
        for (i = 0; i < n; i++) {
                il = sub->list;
                idx = i;
                if (i < 0) {
                    idx = il->count - 1;
                }
                cnt = il->count;
                if ((idx >= cnt) || (cnt == 0)) {
                    slot = NULL;
                } else {
                    slot = (VObj **) il->data + idx;
                }
                o = *slot;
                if (o != NULL) {
                    o->vt->dtor((char *) o + o->vt->off, 3);
                }
        }
    }
    l = sub->list;
    if (l->flag != 0) {
        if (l->data != NULL) {
            memset(l->data, 0, l->cap * 4);
        }
    }
    l->count = 0;
    l2 = sub->list;
    if (l2 != NULL) {
        if (l2->data != NULL) {
            Mem__Delete(l2->data);
        }
        Mem__Delete(l2);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
