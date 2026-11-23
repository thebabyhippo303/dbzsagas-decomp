/* MainMenu__BuildLetterAnimationChildList @ 0x80130F9C (size: 0x1D4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
typedef struct VT {
    char pad0[0x260];
    s16 adj260; s16 padA;
    void (*fn264)(void *, f32 *, f32 *, f32 *, f32 *);
    char pad1[0x388 - 0x268];
    s16 adj388; s16 padB;
    char *(*fn38C)(void *);
} VT;
void *Mem__New(u32);
char *Mem__NewArray(s32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, unsigned int);
void *memmove(void *, const void *, unsigned long);
void *memset(void *, int, unsigned long);
extern f32 lbl_8032AA14 __attribute__((section(".data")));
void MainMenu__BuildLetterAnimationChildList(char *self, char *node);

void MainMenu__BuildLetterAnimationChildList(char *self, char *node) {
    f32 vv[4];
    char *item;
    char *t;
    f32 tf;
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
    VT *vt;
    char *c;

    c = *(char **)(node + 4);
    if (c != 0) {
        MainMenu__BuildLetterAnimationChildList(self, c);
    }
    c = *(char **)(node + 8);
    if (c != 0) {
        MainMenu__BuildLetterAnimationChildList(self, c);
    }
    if (*(s32 *)(node + 0x168) != 0) {
        vt = *(VT **)(node + 0x19C);
        if (vt->fn38C(node + vt->adj388) != 0) {
            vt = *(VT **)(node + 0x19C);
            if (*(s32 *)(vt->fn38C(node + vt->adj388) + 4) != 0) {
                a = (Array *)(self + 0x1A4);
                vv[3] = lbl_8032AA14;
                vv[1] = lbl_8032AA14;
                vv[2] = lbl_8032AA14;
                vv[0] = lbl_8032AA14;
                t = Mem__New(12);
                *(char **)t = node;
                *(s32 *)(t + 8) = 0;
                item = t;
                pitem = &item;
                vt = *(VT **)(node + 0x19C);
                vt->fn264(node + vt->adj260, &vv[0], &vv[1], &vv[2], &vv[3]);
                tf = vv[1];
                *(f32 *)(*pitem + 4) = tf;
                idx = a->count;
                if (idx == a->cap) {
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
                off = idx * 4;
                slot = base + off;
                tail = a->count - idx;
                if (tail != 0) {
                    memmove(slot + 4, slot, tail << 2);
                }
                *(char **)(base + off) = *pitem;
                a->count = a->count + 1;
            }
        }
    }
}
