/* Camera__AddEffect @ 0x800B94A8 (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
void Mem__Delete(void *);
char *Mem__NewArray(s32);
void *memcpy(void *, const void *, u32);
void *memmove(void *, const void *, u32);
void *memset(void *, int, u32);
void Camera__AddEffect(void *self, void **eff) {
    void **pitem;
    void *vt;
    char *objp;
    Array *a;
    s32 idx;
    s32 oldBytes;
    s32 newBytes;
    char *data;
    char *slot;
    char *base;
    s32 off;
    s32 tail;
    void *vt2;
    char *vtb;

    if (eff != 0) {
        pitem = (void **)&eff;
        vt = M2C_FIELD(self, void **, 0x3C);
        a = (Array *)((char *)self + 0x24);
        vtb = (char *)vt + 0x30;
        objp = (char *)self + M2C_FIELD(vt, s16 *, 0x30);
        ((void (*)(void *, void *))M2C_FIELD(vtb, void **, 4))(objp,
            ((void *(*)(void *))M2C_FIELD(*eff, void **, 0xC))((char *)eff + M2C_FIELD(*eff, s16 *, 8)));
        idx = a->count;
        if (idx == a->cap) {
            oldBytes = idx << 2;
            newBytes = (idx + a->grow) << 2;
            data = Mem__NewArray(newBytes);
            if (data != 0) {
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
                goto insert;
            }
        } else {
insert:
            base = a->data;
            off = idx << 2;
            slot = base + off;
            tail = a->count - idx;
            if (tail != 0) {
                memmove(slot + 4, slot, tail << 2);
            }
            *(void **)(base + off) = *pitem;
            a->count = a->count + 1;
        }
        vt2 = M2C_FIELD(self, void **, 0x3C);
        ((void (*)(void *))M2C_FIELD(vt2, void **, 0x3C))((char *)self + M2C_FIELD(vt2, s16 *, 0x38));
    }
}
