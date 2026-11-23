/* HUD__CollectBossStatBarActors @ 0x80121768 (size: 0x178, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;
typedef struct Ent { s32 flags; } Ent;
typedef struct Node { Ent *ent; char pad[0x10]; struct Node *next; } Node;
typedef struct Vec { Ent **data; s32 count; s32 cap; s32 grow; s32 zero; } Vec;
typedef struct World { char pad[0x2C]; Node *head; } World;
typedef struct Mask { s32 value; s32 bits; } Mask;
void Mem__Delete(void *);
u32 Mem__NewArray(u32);
void *memcpy(void *dst, const void *src, unsigned int n);
void *memmove(void *dst, void *src, unsigned int n);
void *memset(void *dst, int value, u32 n);
extern Vec lbl_803941C4 __attribute__((section(".data")));
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern World *lbl_803DCCB8;
void HUD__CollectBossStatBarActors(void) {
    Node **headp;
    Node *node;
    Vec *v;

    v = &lbl_803941C4;
    if (lbl_803941C4.data != 0) {
        Mem__Delete(lbl_803941C4.data);
    }
    lbl_803941C4.data = 0;
    headp = &lbl_803DCCB8->head;
    v->count = 0;
    v->cap = 0;
    node = *headp;
    if (node != 0) {
        do {
            Ent *ent;
            Ent *keep;
            Ent **saved;
            s32 index;
            Vec *w;

            ent = node->ent;
            if ((ent->flags & lbl_803945E4.bits) != lbl_803945E4.value) {
                goto next;
            }
            w = &lbl_803941C4;
            keep = ent;
            {
                    index = w->count;
                    saved = &keep;
                    if (index == w->cap) {
                        s32 bytes;
                        s32 nbytes;
                        Ent **fresh;

                        bytes = index * 4;
                        nbytes = (index + w->grow) * 4;
                        fresh = (Ent **) Mem__NewArray(nbytes);
                        if (fresh != 0) {
                            if (lbl_803941C4.data != 0) {
                                memcpy(fresh, lbl_803941C4.data, (unsigned int) bytes);
                                if (lbl_803941C4.data != 0) {
                                    Mem__Delete(lbl_803941C4.data);
                                }
                            }
                            w->data = fresh;
                            w->cap = w->cap + w->grow;
                            if (w->zero != 0) {
                                memset((char *) fresh + bytes, 0, (u32) (nbytes - bytes));
                            }
                        } else {
                            goto next;
                        }
                    }
                    {
                        Ent **data;
                        s32 off;
                        s32 tail;
                        Ent **slot;

                        data = w->data;
                        off = index * 4;
                        tail = w->count - index;
                        slot = (Ent **) ((char *) data + off);
                        if (tail != 0) {
                            memmove(slot + 1, slot, (unsigned int) tail * 4);
                        }
                        *(Ent **) ((char *) data + off) = *saved;
                        w->count = w->count + 1;
                    }
            }
next:
            if (node != 0) {
                node = node->next;
            } else {
                node = *headp;
            }
        } while (node != 0);
    }
}
