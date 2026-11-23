/* RigidBody__DispatchContacts @ 0x80280D8C (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16; typedef float f32;
typedef struct Vt { char pad[0x20]; s16 off; s16 p; void (*fn)(void *, s32, s32, s32, s32, s32, s32, f32, f32); } Vt;
typedef struct Obj { Vt *vt; } Obj;
typedef struct List { Obj **items; u32 count; } List;
typedef struct Body { void *a; List *list; } Body;

void RigidBody__DispatchContacts(Body *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 f1, f32 f2) {
    u32 i = 0;
    u32 n = self->list->count;
    for (; i < n; i++) {
        List *l = self->list;
        s32 idx = i;
        Obj **p;
        Obj *e;
        Vt *vt;
        if (idx < 0) idx = l->count - 1;
        if (idx >= (s32)l->count || (s32)l->count == 0) p = 0;
        else p = l->items + idx;
        e = *p;
        vt = e->vt;
        vt->fn((char *)e + vt->off, a1, a2, a3, a4, a5, a6, f1, f2);
    }
}
