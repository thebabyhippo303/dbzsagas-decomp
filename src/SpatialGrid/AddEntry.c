/* SpatialGrid__AddEntry @ 0x8025EF80 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
u32 Mem__NewArray(u32);
void *memcpy(void *, const void *, u32);
void Mem__Delete(void *);
void *memmove(void *, const void *, u32);
void *memset(void *, int, u32);

s32 SpatialGrid__AddEntry(void *arg0, s32 arg1) {
    Array *a;
    s32 id;
    s32 *pitem;
    s32 idx;
    s32 cap;
    s32 oldBytes;
    s32 newBytes;
    char *data;
    char *base;
    s32 off;
    s32 tail;
    char *slot;

    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        goto ret1;
    }
    if (arg1 == 0) {
        goto ret0;
    }
    goto main;
ret0:
    return 0;
main:
    a = M2C_FIELD(arg0, Array **, 0x20);
    pitem = &id;
    id = arg1;
    idx = a->count;
    cap = a->cap;
    if (idx == cap) {
        oldBytes = idx * 4;
        newBytes = (idx + a->grow) * 4;
        data = (char *)Mem__NewArray(newBytes);
        if (data == 0) {
            goto ret0;
        }
        if (a->data != 0) {
            memcpy(data, a->data, oldBytes);
            if (a->data != 0) {
                Mem__Delete(a->data);
            }
        }
        a->data = data;
        a->cap = a->cap + a->grow;
        if (a->zero != 0) {
            memset(data + oldBytes, 0, newBytes - oldBytes);
        }
    }
    base = a->data;
    off = idx * 4;
    slot = base + off;
    tail = a->count - idx;
    if (tail != 0) {
        memmove(slot + 4, slot, tail * 4);
    }
    *(s32 *)(base + off) = *pitem;
    a->count = a->count + 1;
    goto ret1;
ret1:
    return 1;
}
