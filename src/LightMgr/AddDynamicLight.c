/* LightMgr__AddDynamicLight @ 0x80209294 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
void sprintf(char *, char *, ...);
char *Mem__NewArray(s32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, unsigned int);
void *memmove(void *, const void *, unsigned long);
void *memset(void *, int, unsigned long);
int strlen(const char *);
extern char lbl_80345E38[] __attribute__((section(".data")));
extern f32 lbl_80345E4C __attribute__((section(".data")));

void fn_80209294(char *w, char *light) {
    char buf[32];
    char *pb;
    char *it2;
    s32 n;
    char *item;
    char **pitem;
    Array *a;
    s32 idx;
    s32 oldBytes;
    s32 newBytes;
    char *data;
    char *base;
    char *slot;
    s32 off;
    s32 tail;

    item = light;
    pitem = &item;
    sprintf(buf, lbl_80345E38, *(s32 *)(w + 0x34));
    pb = buf;
    a = (Array *)(w + 0x18);
    memset(*pitem + 0x74, 0, 0x40);
    n = strlen(pb);
    memcpy(*pitem + 0x74, pb, n);
    it2 = *pitem;
    *(f32 *)(it2 + 0x60) = lbl_80345E4C;
    *(s32 *)(it2 + 0x70) = *(s32 *)(it2 + 0x70) & ~1;
    idx = *(s32 *)(w + 4);
    if (idx < 0 || idx > a->count) {
        idx = a->count;
    }
    if (a->count == a->cap) {
        oldBytes = a->count << 2;
        newBytes = (a->count + a->grow) << 2;
        data = Mem__NewArray(newBytes);
        if (data == 0) {
            goto done;
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
        memmove(slot + 4, slot, tail << 2);
    }
    *(char **)(base + off) = *pitem;
    a->count = a->count + 1;
done:
    *(s32 *)(w + 4) = *(s32 *)(4 + w) + 1;
    *(s32 *)(w + 0x34) = *(s32 *)(w + 0x34) + 1;
}
