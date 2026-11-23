/* ShotList__AddEntry @ 0x800D0744 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
typedef struct Entry { char *name; s32 camera; f32 t0; f32 t1; s32 started; } Entry;
void *Mem__New(s32);
char *Mem__NewArray(s32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, u32);
void *memmove(void *, const void *, u32);
void *memset(void *, int, u32);
char *strcpy(char *, const char *);
int strlen(const char *);
extern Array lbl_80392D54 __attribute__((section(".data")));
void ShotList__AddEntry(char *name, s32 camera, f32 t0, f32 dur) {
    Entry *item;
    Entry **pitem;
    Array *a;
    Entry *e;
    s32 idx;
    s32 oldBytes;
    s32 newBytes;
    char *data;
    char *base;
    s32 off;
    s32 tail;
    char *slot;
    s32 cap;

    a = &lbl_80392D54;
    pitem = &item;
    e = Mem__New(0x14);
    e->name = Mem__NewArray(strlen(name) + 1);
    strcpy(e->name, name);
    idx = a->count;
    cap = a->cap;
    e->camera = camera;
    e->t1 = t0 + dur;
    e->started = 0;
    item = e;
    e->t0 = t0;
    if (idx == cap) {
        oldBytes = idx << 2;
        newBytes = (idx + a->grow) << 2;
        data = Mem__NewArray(newBytes);
        if (data == 0) {
            return;
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
    off = idx << 2;
    slot = base + off;
    tail = a->count - idx;
    if (tail != 0) {
        memmove(slot + 4, slot, tail << 2);
    }
    *(Entry **)(base + off) = *pitem;
    a->count = a->count + 1;
}
