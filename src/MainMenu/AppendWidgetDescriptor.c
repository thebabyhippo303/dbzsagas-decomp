/* MainMenu__AppendWidgetDescriptor @ 0x8012F0D0 (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
typedef struct Desc { s32 a; s32 b; } Desc;
typedef struct Menu { char pad[0x1A0]; Array list; } Menu;
void *Mem__New(s32);
char *Mem__NewArray(s32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, u32);
void *memmove(void *, const void *, unsigned long);
void *memset(void *, int, unsigned long);
void MainMenu__AppendWidgetDescriptor(Menu *self, s32 a, s32 b) {
    Desc *item;
    Desc **pitem;
    Array *arr;
    s32 idx;
    s32 oldBytes;
    s32 newBytes;
    char *data;
    char *base;
    s32 off;
    s32 tail;
    Desc *d;
    char *slot;

    arr = &self->list;
    pitem = &item;
    d = Mem__New(8);
    d->b = b;
    d->a = a;
    item = d;
    idx = arr->count;
    if (idx == arr->cap) {
        oldBytes = idx << 2;
        newBytes = (idx + arr->grow) << 2;
        data = Mem__NewArray(newBytes);
        if (data == 0) {
            return;
        }
        if (arr->data != 0) {
            memcpy(data, arr->data, oldBytes);
            if (arr->data != 0) {
                Mem__Delete(arr->data);
            }
        }
        arr->data = data;
        arr->cap = arr->cap + arr->grow;
        if (arr->zero != 0) {
            memset(data + oldBytes, 0, newBytes - oldBytes);
        }
    }
    base = arr->data;
    off = idx << 2;
    slot = base + off;
    tail = arr->count - idx;
    if (tail != 0) {
        memmove(slot + 4, slot, tail << 2);
    }
    *(Desc **)(base + off) = *pitem;
    arr->count = arr->count + 1;
}
